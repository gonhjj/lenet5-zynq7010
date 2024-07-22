#此代码用于读取mnist数据集的图片
#并将其转换为tensor张量
#以行的形式存储在txt文本中


import torchvision
import torchvision.transforms as transformers
import numpy as np

#加载mnist测试集
test_dataset = torchvision.datasets.MNIST(root = './data',train = False,
                                           transform = torchvision.transforms.Compose([
                                               torchvision.transforms.Resize((32,32)),
                                               torchvision.transforms.ToTensor(),
                                           ]), download = True)

#获取第n张测试图片及其标签
image, label = test_dataset[55]
print("标签：", label)

#将图片转换为数据形式并重塑为2D数组
image_array = image.numpy()
image_array = image_array.reshape((32,32))

#存储图片为.txt文件
np.savetxt('../in0.txt',image_array,delimiter='\n',fmt='%f')

with open('../in0.txt','r') as f:
    lines = f.readlines()
    for i in range(-1,992,32):
        lines[i] = lines[i].rstrip() + '\n'
    lines[1023] = lines[1023].rstrip('\n')
with open('../in0.txt','w')as f:
    f.writelines(lines)