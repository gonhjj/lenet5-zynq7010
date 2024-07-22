import numpy as np

input_data = np.load("../fc1_b.npy")
print(input_data.shape)

data = input_data.reshape(1,-1)
print(data.shape)
print(data)

rows, cols = data.shape
formatted_data = data.flatten().tolist()

with open("../fc1_b.txt", "w") as f:
    for i in range(rows):
        row_data = formatted_data[i*cols:(i+1)*cols]
        row_str = ",\n".join(str(val) for val in row_data)
        f.write(row_str + "\n")