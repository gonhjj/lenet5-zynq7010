import torch
import torch.nn as nn
import torchvision
from torch.cuda.amp import GradScaler
from torch.cuda.amp import autocast as autocast
import  torchvision.transforms as transformers

#   Set hyperparameters
batch_size = 128
num_classes = 10
learning_rate = 0.0001
num_epochs = 50

#Determine whether to run the training on GPU or CPU
device = torch.device('cuda' if torch.cuda.is_available() else 'cpu')

#   Load dataset and preprocess
train_dataset = torchvision.datasets.MNIST(root = './data',train = True,
                                           transform = torchvision.transforms.Compose([
                                               torchvision.transforms.Resize((32,32)),
                                               torchvision.transforms.ToTensor(),
                                               torchvision.transforms.Normalize((0.1307,), (0.3081,))
                                           ]), download = True)

test_dataset = torchvision.datasets.MNIST(root = './data',train = False,
                                           transform = torchvision.transforms.Compose([
                                               torchvision.transforms.Resize((32,32)),
                                               torchvision.transforms.ToTensor(),
                                               torchvision.transforms.Normalize((0.1307,), (0.3081,))
                                           ]), download = True)

train_loader = torch.utils.data.DataLoader(dataset = train_dataset,
                                           batch_size = batch_size,
                                           shuffle = False)

test_loader = torch.utils.data.DataLoader(dataset = test_dataset,
                                           batch_size = batch_size,
                                           shuffle = False)

#Define the network
class LeNet5(nn.Module):
    def __init__(self,num_classes):
        super(LeNet5,self).__init__()

        self.conv1 = nn.Conv2d(in_channels=1,out_channels=6,kernel_size=5,stride=1,padding=0)
        #self.bn1 = nn.BatchNorm2d(6)
        self.relu1 = nn.ReLU()
        self.pool1 = nn.MaxPool2d(kernel_size=2,stride=2)

        self.conv2 = nn.Conv2d(in_channels=6,out_channels=16,kernel_size=5,stride=1,padding=0)
        #self.bn2 = nn.BatchNorm2d(16)
        self.relu2 = nn.ReLU()
        self.pool2 = nn.MaxPool2d(kernel_size=2, stride=2)

        self.conv3 = nn.Conv2d(in_channels=16, out_channels=120, kernel_size=5, stride=1, padding=0)
        #self.bn3 = nn.BatchNorm2d(120)
        self.relu3 = nn.ReLU()

        self.fc = nn.Linear(in_features=120,out_features=84)
        self.relu4  = nn.ReLU()
        self.fc1 = nn.Linear(in_features=84, out_features= num_classes)

    def forward(self,x):
        out = self.conv1(x)
        #out = self.bn1(out)
        out = self.relu1(out)
        out = self.pool1(out)

        out = self.conv2(out)
        #out = self.bn2(out)
        out = self.relu2(out)
        out = self.pool2(out)

        out = self.conv3(out)
        #out = self.bn3(out)
        out = self.relu3(out)

        out = out.reshape(out.size(0),-1)
        out = self.fc(out)
        out = self.relu4(out)
        out = self.fc1(out)
        return out

#   Create the model
model = LeNet5(num_classes).to(device)

#   Define the loss function
criterion = nn.CrossEntropyLoss()

#   Define the optimizer with the model parameters and learning rate
optimizer = torch.optim.Adam(model.parameters(),lr = learning_rate,eps=1e-2)
#optimizer = torch.optim.SGD(model.parameters(), lr=learning_rate, momentum=0.9)

#   Define the number of steps
total_step = len(train_loader)

# 创建GradScaler对象，用于自动放缩梯度
scaler = GradScaler()

if __name__ == "__main__":
    #   Start training
    print("Start Training ...")

    for epoch in range(num_epochs):
        for i,(images, labels) in enumerate(train_loader):
            images = images.to(device)
            labels = labels.to(device)

            optimizer.zero_grad()
            # 开启半精度训练上下文
            with autocast():
            #   Forward pass
                outputs = model(images)
                loss = criterion(outputs,labels)

            if torch.isnan(loss).any():
                print("Loss is nan, printing model parameters:")
                torch.save(model.state_dict(), "model_parameters_at_nan_loss.pth")
                for name, param in model.named_parameters():
                    print('name:{} param grad:{} param requires_grad:{}'.format(name, param.grad, param.requires_grad))
                exit()

            #   Backward and optimize
            #optimizer.zero_grad()
            scaler.scale(loss).backward()  # 自动放缩梯度
            scaler.step(optimizer)
            scaler.update()

            #loss.backward()
            #optimizer.step()

            # 梯度裁剪，防止梯度爆炸
            torch.nn.utils.clip_grad_norm_(model.parameters(), max_norm=1.0,norm_type=1.0)

            if(i + 1) % 400 == 0:
                print('Epoch [{}/{}], Step [{}/{}], Loss: {:.4f}'
                      .format( epoch +1,num_epochs, i+1, total_step,loss.item()))

    #   Save the model
    model.half()
    torch.save(model.state_dict(),"lenet5_m_half.pth")
    print("model have been save")

    #   Test the model
    with torch.no_grad():
        correct = 0
        total = 0
        for images,labels in test_loader:
            images = images.to(device).half()
            labels = labels.to(device)
            #with autocast():
            outputs = model(images)
            _, predicted = torch.max(outputs.data, 1)
            total += labels.size(0)
            correct += (predicted == labels).sum().item()

        print('Accuracy of the network  on the 10000 test images:{:.2f} %'.format(100 * correct /total))

