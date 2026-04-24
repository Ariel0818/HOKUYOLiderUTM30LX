import cv2
import os


def video_to_frames(video_path, output_folder):
    # 确保输出文件夹存在
    if not os.path.exists(output_folder):
        os.makedirs(output_folder)

    # 打开视频文件
    vidcap = cv2.VideoCapture(video_path)
    total_frames = int(vidcap.get(cv2.CAP_PROP_FRAME_COUNT))

    success, image = vidcap.read()
    count = 0

    while success:
        # 构造输出图片的路径
        output_path = os.path.join(output_folder, f"frame_{count:04d}.jpg")
        # 保存当前帧为JPEG文件
        cv2.imwrite(output_path, image)
        success, image = vidcap.read()
        print(f"Processed frame {count + 1}/{total_frames}")
        count += 1

    vidcap.release()
    print("Conversion completed!")


# 使用方法
video_to_frames('dji_fly_20FEB2023_row1_video.mp4', '20febrow1')
