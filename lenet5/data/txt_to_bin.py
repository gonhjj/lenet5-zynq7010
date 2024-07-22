import numpy as np

# 读取文本文件中的数据
with open('../in0.txt', 'r') as f:
    lines = f.readlines()

# 将字符串数据转换为浮点数
floats = [float(line.strip()) for line in lines]

# 将浮点数列表转换为 NumPy 数组
array = np.array(floats, dtype=np.float32)  # 或 np.float64，根据需要选择

# 使用 tofile 方法将数组保存为二进制文件
array.tofile('../in0.bin')