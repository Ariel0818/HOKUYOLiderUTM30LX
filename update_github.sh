#!/bin/bash
# ============================================================
# Script to update GitHub repo: Ariel0818/HOKUYOLiderUTM30LX
# Run this from your LOCAL machine after cloning the repo.
# ============================================================

# 1. Clone the repo (skip if already cloned)
git clone https://github.com/Ariel0818/HOKUYOLiderUTM30LX.git
cd HOKUYOLiderUTM30LX

# 2. Create folder structure
mkdir -p cv-analysis docs assets bi-weekly-report

# ---- COPY FILES FROM YOUR LOCAL ZIP / FOLDER ----
# Adjust source paths to wherever your extracted zip is.
# Replace <YOUR_LOCAL_PATH> with the actual path.

LOCAL="<YOUR_LOCAL_PATH>/Strawberry_canopy_estimatiom_9.19_2023 copy"

# Python / notebooks
cp "$LOCAL/readdata.py"                        cv-analysis/
cp "$LOCAL/Videoconvert2image.py"              cv-analysis/
cp "$LOCAL/ImageProcessing_EdgeDetect.ipynb"   cv-analysis/
cp "$LOCAL/labelme2area.ipynb"                 cv-analysis/
cp "$LOCAL/imageshow.ipynb"                    cv-analysis/

# Figure
cp "$LOCAL/Figure_1.png"                       assets/

# Research reports
cp "$LOCAL/bi-weekly-report/"*.docx            bi-weekly-report/

# Docs (Pages files — already partially in repo, move them)
# The .pages files already exist in root; move them to docs/
git mv Lidar_instruction.pages              docs/ 2>/dev/null || true
git mv Lidar_instruction_English.pages      docs/ 2>/dev/null || true
git mv Lidar_instruction_English.pdf        docs/ 2>/dev/null || true
git mv catographer_instruction.pages        docs/ 2>/dev/null || true
git mv rtabmap_install_failed.pages         docs/ 2>/dev/null || true

# 3. Add all new files and the README / .gitignore you created
#    (copy README.md, cv-analysis/README.md, etc. from the output ZIP first)

# 4. Stage everything
git add .

# 5. Commit
git commit -m "feat: restructure repo + add CV analysis code and README

- Add cv-analysis/ with Python scripts and Jupyter notebooks
- Add assets/ with result figure
- Add bi-weekly-report/ with 6 research progress reports
- Move docs (.pages files) into docs/ folder
- Add root README.md with full project documentation
- Add .gitignore (excludes .DS_Store, .npy data, ROS build dirs)
- Add per-folder README.md files"

# 6. Push
git push origin main

echo "✅ Done! Visit: https://github.com/Ariel0818/HOKUYOLiderUTM30LX"
