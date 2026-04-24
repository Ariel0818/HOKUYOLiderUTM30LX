# cv-analysis

Computer vision scripts and notebooks for strawberry canopy analysis.

## Files

| File | Description |
|------|-------------|
| `ImageProcessing_EdgeDetect.ipynb` | Canny edge detection on RGB-D images to identify canopy boundaries. Tests Otsu's and median-based thresholds. Includes contour area computation and noise removal. |
| `labelme2area.ipynb` | Converts LabelMe polygon annotation JSON files to numeric canopy cross-sectional area using the Shoelace formula. |
| `imageshow.ipynb` | Visualizes depth camera `.npy` data as 2D heatmaps and 3D surface plots (bar3d, scatter, plot_surface). |
| `readdata.py` | Loads paired `DepthData.npy` + `HightData.npy` arrays, fuses them to compute total height per pixel. |
| `Videoconvert2image.py` | Extracts all frames from a DJI drone `.mp4` video and saves them as numbered JPEG files. |

## Expected Data Structure

```
cv-analysis/
├── DepthCamera_Data_Tanya/
│   └── 20 FEB 2023/
│       ├── 1_1ColorImage.jpg
│       ├── 1_1DepthData.npy
│       ├── 1_1HightData.npy
│       └── ...
├── segmentationlabel/
│   └── 1_1ColorImage.json    ← LabelMe output
└── edgeDetectoutput/          ← Canny output saved here
```

> Raw data files (`.npy`, `.jpg`, `.mp4`) are not committed to this repo due to size.

## Dependencies

```
numpy
opencv-python
matplotlib
pillow
jupyter
```
