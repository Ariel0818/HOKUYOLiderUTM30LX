import numpy as np
import matplotlib.pyplot as plt

# 读取 .npy 文件
depth = np.load('data/20 FEB 2023/2_1DepthData.npy')
height = np.load('data/20 FEB 2023/2_1HightData.npy')
# 输出数组以确认成功
print(depth.shape)  # 420 行 560 列， 正好对应图片大小
print(height.shape)
total_height = []
for i in range(420):
    for j in range(560):
        total = depth[i, j] + height[i, j]
        total_height.append(total)
print(total_height)


#
# x = np.arange(depth.shape[1])  # X轴的坐标值是列的索引
# y = np.arange(depth.shape[0])  # Y轴的坐标值是行的索引
# x, y = np.meshgrid(x, y)  # 创建网格坐标
#
# fig = plt.figure()
# ax = fig.add_subplot(111, projection='3d')
#
# # 绘制表面图
# ax.plot_surface(x, y, depth, cmap='viridis')
#
# # 设置坐标轴标签
# ax.set_xlabel('X Label')
# ax.set_ylabel('Y Label')
# ax.set_zlabel('Z Label')
#
# # 显示图形
# plt.show()


# # 使用 imshow 展示数据
# plt.imshow(height, cmap='viridis', origin='lower', extent=[0, depth.shape[1], 0, depth.shape[0]])
# plt.colorbar(label='Z value')
# plt.xlabel('X Label')
# plt.ylabel('Y Label')
# plt.title('2D Array Visualization')
# plt.show()

