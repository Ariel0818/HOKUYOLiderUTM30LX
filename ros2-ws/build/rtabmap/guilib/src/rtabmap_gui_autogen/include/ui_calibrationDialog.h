/********************************************************************************
** Form generated from reading UI file 'calibrationDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALIBRATIONDIALOG_H
#define UI_CALIBRATIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "rtabmap/utilite/UImageView.h"

QT_BEGIN_NAMESPACE

class Ui_calibrationDialog
{
public:
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_left;
    UImageView *image_view;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_right;
    UImageView *image_view_2;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *radioButton_raw;
    QRadioButton *radioButton_rectified;
    QRadioButton *radioButton_stereoRectified;
    QFrame *line;
    QCheckBox *checkBox_mirror;
    QCheckBox *checkBox_showHorizontalLines;
    QSpacerItem *horizontalSpacer;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    QSpinBox *spinBox_boardHeight;
    QLabel *label_15;
    QLabel *label_12;
    QLabel *label_16;
    QSpinBox *spinBox_boardWidth;
    QDoubleSpinBox *doubleSpinBox_squareSize;
    QLabel *label_21;
    QLabel *label_20;
    QSpinBox *spinBox_maxScale;
    QLabel *label_22;
    QLabel *label_stereoBaseline;
    QDoubleSpinBox *doubleSpinBox_stereoBaseline;
    QGroupBox *groupBox_progress;
    QVBoxLayout *verticalLayout_6;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QLabel *label_19;
    QLabel *label_serial;
    QCheckBox *checkBox_switchImages;
    QLabel *label_5;
    QProgressBar *progressBar_count;
    QProgressBar *progressBar_count_2;
    QLabel *label;
    QProgressBar *progressBar_x;
    QProgressBar *progressBar_x_2;
    QLabel *label_2;
    QProgressBar *progressBar_y;
    QProgressBar *progressBar_y_2;
    QLabel *label_3;
    QProgressBar *progressBar_size;
    QProgressBar *progressBar_size_2;
    QProgressBar *progressBar_skew;
    QProgressBar *progressBar_skew_2;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButton_calibrate;
    QCheckBox *checkBox_fisheye;
    QCheckBox *checkBox_unlock;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_2;
    QLineEdit *lineEdit_P_2;
    QLabel *label_fx;
    QLabel *label_fy;
    QLineEdit *lineEdit_K;
    QLabel *label_cx;
    QLabel *label_11;
    QLabel *label_cy;
    QLabel *label_6;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_8;
    QLabel *label_17;
    QLineEdit *lineEdit_D_2;
    QLabel *label_7;
    QLineEdit *lineEdit_D;
    QLabel *label_14;
    QLabel *label_error;
    QLabel *label_fx_2;
    QLabel *label_cx_2;
    QLabel *label_fy_2;
    QLabel *label_cy_2;
    QLineEdit *lineEdit_K_2;
    QLabel *label_18;
    QLineEdit *lineEdit_R;
    QLineEdit *lineEdit_P;
    QLineEdit *lineEdit_R_2;
    QLabel *label_baseline_name;
    QLabel *label_baseline;
    QLabel *label_error_2;
    QPushButton *pushButton_save;
    QPushButton *pushButton_restart;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *calibrationDialog)
    {
        if (calibrationDialog->objectName().isEmpty())
            calibrationDialog->setObjectName(QString::fromUtf8("calibrationDialog"));
        calibrationDialog->resize(1314, 847);
        verticalLayout_5 = new QVBoxLayout(calibrationDialog);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_left = new QLabel(calibrationDialog);
        label_left->setObjectName(QString::fromUtf8("label_left"));
        label_left->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_left);

        image_view = new UImageView(calibrationDialog);
        image_view->setObjectName(QString::fromUtf8("image_view"));

        verticalLayout_2->addWidget(image_view);

        verticalLayout_2->setStretch(1, 1);

        horizontalLayout_3->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_right = new QLabel(calibrationDialog);
        label_right->setObjectName(QString::fromUtf8("label_right"));
        label_right->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_right);

        image_view_2 = new UImageView(calibrationDialog);
        image_view_2->setObjectName(QString::fromUtf8("image_view_2"));

        verticalLayout_3->addWidget(image_view_2);

        verticalLayout_3->setStretch(1, 1);

        horizontalLayout_3->addLayout(verticalLayout_3);


        verticalLayout_4->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        radioButton_raw = new QRadioButton(calibrationDialog);
        radioButton_raw->setObjectName(QString::fromUtf8("radioButton_raw"));

        horizontalLayout_2->addWidget(radioButton_raw);

        radioButton_rectified = new QRadioButton(calibrationDialog);
        radioButton_rectified->setObjectName(QString::fromUtf8("radioButton_rectified"));

        horizontalLayout_2->addWidget(radioButton_rectified);

        radioButton_stereoRectified = new QRadioButton(calibrationDialog);
        radioButton_stereoRectified->setObjectName(QString::fromUtf8("radioButton_stereoRectified"));

        horizontalLayout_2->addWidget(radioButton_stereoRectified);

        line = new QFrame(calibrationDialog);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout_2->addWidget(line);

        checkBox_mirror = new QCheckBox(calibrationDialog);
        checkBox_mirror->setObjectName(QString::fromUtf8("checkBox_mirror"));

        horizontalLayout_2->addWidget(checkBox_mirror);

        checkBox_showHorizontalLines = new QCheckBox(calibrationDialog);
        checkBox_showHorizontalLines->setObjectName(QString::fromUtf8("checkBox_showHorizontalLines"));

        horizontalLayout_2->addWidget(checkBox_showHorizontalLines);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout_4->addLayout(horizontalLayout_2);


        horizontalLayout_4->addLayout(verticalLayout_4);

        scrollArea = new QScrollArea(calibrationDialog);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(scrollArea->sizePolicy().hasHeightForWidth());
        scrollArea->setSizePolicy(sizePolicy);
        scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 357, 820));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(scrollAreaWidgetContents);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        spinBox_boardHeight = new QSpinBox(groupBox);
        spinBox_boardHeight->setObjectName(QString::fromUtf8("spinBox_boardHeight"));
        spinBox_boardHeight->setMinimum(2);
        spinBox_boardHeight->setValue(6);

        gridLayout_3->addWidget(spinBox_boardHeight, 1, 3, 1, 1);

        label_15 = new QLabel(groupBox);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout_3->addWidget(label_15, 3, 0, 1, 1);

        label_12 = new QLabel(groupBox);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout_3->addWidget(label_12, 1, 0, 1, 1);

        label_16 = new QLabel(groupBox);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        gridLayout_3->addWidget(label_16, 3, 3, 1, 1);

        spinBox_boardWidth = new QSpinBox(groupBox);
        spinBox_boardWidth->setObjectName(QString::fromUtf8("spinBox_boardWidth"));
        spinBox_boardWidth->setMinimum(2);
        spinBox_boardWidth->setValue(8);

        gridLayout_3->addWidget(spinBox_boardWidth, 1, 1, 1, 1);

        doubleSpinBox_squareSize = new QDoubleSpinBox(groupBox);
        doubleSpinBox_squareSize->setObjectName(QString::fromUtf8("doubleSpinBox_squareSize"));
        doubleSpinBox_squareSize->setDecimals(4);
        doubleSpinBox_squareSize->setMaximum(1.000000000000000);
        doubleSpinBox_squareSize->setValue(0.033000000000000);

        gridLayout_3->addWidget(doubleSpinBox_squareSize, 3, 1, 1, 1);

        label_21 = new QLabel(groupBox);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        gridLayout_3->addWidget(label_21, 0, 0, 1, 1);

        label_20 = new QLabel(groupBox);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setOpenExternalLinks(true);

        gridLayout_3->addWidget(label_20, 0, 1, 1, 1);

        spinBox_maxScale = new QSpinBox(groupBox);
        spinBox_maxScale->setObjectName(QString::fromUtf8("spinBox_maxScale"));
        spinBox_maxScale->setMinimum(1);
        spinBox_maxScale->setMaximum(3);
        spinBox_maxScale->setValue(1);

        gridLayout_3->addWidget(spinBox_maxScale, 4, 1, 1, 1);

        label_22 = new QLabel(groupBox);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        gridLayout_3->addWidget(label_22, 4, 0, 1, 1);

        label_stereoBaseline = new QLabel(groupBox);
        label_stereoBaseline->setObjectName(QString::fromUtf8("label_stereoBaseline"));

        gridLayout_3->addWidget(label_stereoBaseline, 5, 0, 1, 1);

        doubleSpinBox_stereoBaseline = new QDoubleSpinBox(groupBox);
        doubleSpinBox_stereoBaseline->setObjectName(QString::fromUtf8("doubleSpinBox_stereoBaseline"));
        doubleSpinBox_stereoBaseline->setDecimals(4);
        doubleSpinBox_stereoBaseline->setMaximum(10.000000000000000);
        doubleSpinBox_stereoBaseline->setValue(0.000000000000000);

        gridLayout_3->addWidget(doubleSpinBox_stereoBaseline, 5, 1, 1, 1);


        verticalLayout->addWidget(groupBox);

        groupBox_progress = new QGroupBox(scrollAreaWidgetContents);
        groupBox_progress->setObjectName(QString::fromUtf8("groupBox_progress"));
        verticalLayout_6 = new QVBoxLayout(groupBox_progress);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_4 = new QLabel(groupBox_progress);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 5, 0, 1, 1);

        label_19 = new QLabel(groupBox_progress);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        gridLayout->addWidget(label_19, 0, 0, 1, 1);

        label_serial = new QLabel(groupBox_progress);
        label_serial->setObjectName(QString::fromUtf8("label_serial"));
        label_serial->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout->addWidget(label_serial, 0, 1, 1, 1);

        checkBox_switchImages = new QCheckBox(groupBox_progress);
        checkBox_switchImages->setObjectName(QString::fromUtf8("checkBox_switchImages"));

        gridLayout->addWidget(checkBox_switchImages, 0, 2, 1, 1);

        label_5 = new QLabel(groupBox_progress);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 1, 0, 1, 1);

        progressBar_count = new QProgressBar(groupBox_progress);
        progressBar_count->setObjectName(QString::fromUtf8("progressBar_count"));
        progressBar_count->setValue(24);

        gridLayout->addWidget(progressBar_count, 1, 1, 1, 1);

        progressBar_count_2 = new QProgressBar(groupBox_progress);
        progressBar_count_2->setObjectName(QString::fromUtf8("progressBar_count_2"));
        progressBar_count_2->setValue(24);
        progressBar_count_2->setInvertedAppearance(true);

        gridLayout->addWidget(progressBar_count_2, 1, 2, 1, 1);

        label = new QLabel(groupBox_progress);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 2, 0, 1, 1);

        progressBar_x = new QProgressBar(groupBox_progress);
        progressBar_x->setObjectName(QString::fromUtf8("progressBar_x"));
        progressBar_x->setValue(24);

        gridLayout->addWidget(progressBar_x, 2, 1, 1, 1);

        progressBar_x_2 = new QProgressBar(groupBox_progress);
        progressBar_x_2->setObjectName(QString::fromUtf8("progressBar_x_2"));
        progressBar_x_2->setValue(24);
        progressBar_x_2->setInvertedAppearance(true);
        progressBar_x_2->setTextDirection(QProgressBar::TopToBottom);

        gridLayout->addWidget(progressBar_x_2, 2, 2, 1, 1);

        label_2 = new QLabel(groupBox_progress);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 3, 0, 1, 1);

        progressBar_y = new QProgressBar(groupBox_progress);
        progressBar_y->setObjectName(QString::fromUtf8("progressBar_y"));
        progressBar_y->setValue(24);

        gridLayout->addWidget(progressBar_y, 3, 1, 1, 1);

        progressBar_y_2 = new QProgressBar(groupBox_progress);
        progressBar_y_2->setObjectName(QString::fromUtf8("progressBar_y_2"));
        progressBar_y_2->setValue(24);
        progressBar_y_2->setInvertedAppearance(true);

        gridLayout->addWidget(progressBar_y_2, 3, 2, 1, 1);

        label_3 = new QLabel(groupBox_progress);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 4, 0, 1, 1);

        progressBar_size = new QProgressBar(groupBox_progress);
        progressBar_size->setObjectName(QString::fromUtf8("progressBar_size"));
        progressBar_size->setValue(24);

        gridLayout->addWidget(progressBar_size, 4, 1, 1, 1);

        progressBar_size_2 = new QProgressBar(groupBox_progress);
        progressBar_size_2->setObjectName(QString::fromUtf8("progressBar_size_2"));
        progressBar_size_2->setValue(24);
        progressBar_size_2->setInvertedAppearance(true);

        gridLayout->addWidget(progressBar_size_2, 4, 2, 1, 1);

        progressBar_skew = new QProgressBar(groupBox_progress);
        progressBar_skew->setObjectName(QString::fromUtf8("progressBar_skew"));
        progressBar_skew->setValue(24);

        gridLayout->addWidget(progressBar_skew, 5, 1, 1, 1);

        progressBar_skew_2 = new QProgressBar(groupBox_progress);
        progressBar_skew_2->setObjectName(QString::fromUtf8("progressBar_skew_2"));
        progressBar_skew_2->setValue(24);
        progressBar_skew_2->setInvertedAppearance(true);

        gridLayout->addWidget(progressBar_skew_2, 5, 2, 1, 1);


        verticalLayout_6->addLayout(gridLayout);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        pushButton_calibrate = new QPushButton(groupBox_progress);
        pushButton_calibrate->setObjectName(QString::fromUtf8("pushButton_calibrate"));

        horizontalLayout_5->addWidget(pushButton_calibrate);

        checkBox_fisheye = new QCheckBox(groupBox_progress);
        checkBox_fisheye->setObjectName(QString::fromUtf8("checkBox_fisheye"));

        horizontalLayout_5->addWidget(checkBox_fisheye);

        checkBox_unlock = new QCheckBox(groupBox_progress);
        checkBox_unlock->setObjectName(QString::fromUtf8("checkBox_unlock"));

        horizontalLayout_5->addWidget(checkBox_unlock);

        horizontalLayout_5->setStretch(0, 1);

        verticalLayout_6->addLayout(horizontalLayout_5);

        groupBox_3 = new QGroupBox(groupBox_progress);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout_2 = new QGridLayout(groupBox_3);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        lineEdit_P_2 = new QLineEdit(groupBox_3);
        lineEdit_P_2->setObjectName(QString::fromUtf8("lineEdit_P_2"));
        lineEdit_P_2->setReadOnly(true);

        gridLayout_2->addWidget(lineEdit_P_2, 8, 2, 1, 1);

        label_fx = new QLabel(groupBox_3);
        label_fx->setObjectName(QString::fromUtf8("label_fx"));
        label_fx->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(label_fx, 0, 1, 1, 1);

        label_fy = new QLabel(groupBox_3);
        label_fy->setObjectName(QString::fromUtf8("label_fy"));
        label_fy->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(label_fy, 1, 1, 1, 1);

        lineEdit_K = new QLineEdit(groupBox_3);
        lineEdit_K->setObjectName(QString::fromUtf8("lineEdit_K"));
        lineEdit_K->setReadOnly(true);

        gridLayout_2->addWidget(lineEdit_K, 5, 1, 1, 1);

        label_cx = new QLabel(groupBox_3);
        label_cx->setObjectName(QString::fromUtf8("label_cx"));
        label_cx->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(label_cx, 2, 1, 1, 1);

        label_11 = new QLabel(groupBox_3);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_2->addWidget(label_11, 3, 0, 1, 1);

        label_cy = new QLabel(groupBox_3);
        label_cy->setObjectName(QString::fromUtf8("label_cy"));
        label_cy->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(label_cy, 3, 1, 1, 1);

        label_6 = new QLabel(groupBox_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_2->addWidget(label_6, 5, 0, 1, 1);

        label_9 = new QLabel(groupBox_3);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_2->addWidget(label_9, 1, 0, 1, 1);

        label_10 = new QLabel(groupBox_3);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_2->addWidget(label_10, 2, 0, 1, 1);

        label_8 = new QLabel(groupBox_3);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_2->addWidget(label_8, 0, 0, 1, 1);

        label_17 = new QLabel(groupBox_3);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        gridLayout_2->addWidget(label_17, 7, 0, 1, 1);

        lineEdit_D_2 = new QLineEdit(groupBox_3);
        lineEdit_D_2->setObjectName(QString::fromUtf8("lineEdit_D_2"));
        lineEdit_D_2->setReadOnly(true);

        gridLayout_2->addWidget(lineEdit_D_2, 6, 2, 1, 1);

        label_7 = new QLabel(groupBox_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_2->addWidget(label_7, 6, 0, 1, 1);

        lineEdit_D = new QLineEdit(groupBox_3);
        lineEdit_D->setObjectName(QString::fromUtf8("lineEdit_D"));
        lineEdit_D->setReadOnly(true);

        gridLayout_2->addWidget(lineEdit_D, 6, 1, 1, 1);

        label_14 = new QLabel(groupBox_3);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout_2->addWidget(label_14, 9, 0, 1, 1);

        label_error = new QLabel(groupBox_3);
        label_error->setObjectName(QString::fromUtf8("label_error"));

        gridLayout_2->addWidget(label_error, 9, 1, 1, 1);

        label_fx_2 = new QLabel(groupBox_3);
        label_fx_2->setObjectName(QString::fromUtf8("label_fx_2"));
        label_fx_2->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(label_fx_2, 0, 2, 1, 1);

        label_cx_2 = new QLabel(groupBox_3);
        label_cx_2->setObjectName(QString::fromUtf8("label_cx_2"));
        label_cx_2->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(label_cx_2, 2, 2, 1, 1);

        label_fy_2 = new QLabel(groupBox_3);
        label_fy_2->setObjectName(QString::fromUtf8("label_fy_2"));
        label_fy_2->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(label_fy_2, 1, 2, 1, 1);

        label_cy_2 = new QLabel(groupBox_3);
        label_cy_2->setObjectName(QString::fromUtf8("label_cy_2"));
        label_cy_2->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(label_cy_2, 3, 2, 1, 1);

        lineEdit_K_2 = new QLineEdit(groupBox_3);
        lineEdit_K_2->setObjectName(QString::fromUtf8("lineEdit_K_2"));
        lineEdit_K_2->setReadOnly(true);

        gridLayout_2->addWidget(lineEdit_K_2, 5, 2, 1, 1);

        label_18 = new QLabel(groupBox_3);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        gridLayout_2->addWidget(label_18, 8, 0, 1, 1);

        lineEdit_R = new QLineEdit(groupBox_3);
        lineEdit_R->setObjectName(QString::fromUtf8("lineEdit_R"));
        lineEdit_R->setReadOnly(true);

        gridLayout_2->addWidget(lineEdit_R, 7, 1, 1, 1);

        lineEdit_P = new QLineEdit(groupBox_3);
        lineEdit_P->setObjectName(QString::fromUtf8("lineEdit_P"));
        lineEdit_P->setReadOnly(true);

        gridLayout_2->addWidget(lineEdit_P, 8, 1, 1, 1);

        lineEdit_R_2 = new QLineEdit(groupBox_3);
        lineEdit_R_2->setObjectName(QString::fromUtf8("lineEdit_R_2"));
        lineEdit_R_2->setReadOnly(true);

        gridLayout_2->addWidget(lineEdit_R_2, 7, 2, 1, 1);

        label_baseline_name = new QLabel(groupBox_3);
        label_baseline_name->setObjectName(QString::fromUtf8("label_baseline_name"));

        gridLayout_2->addWidget(label_baseline_name, 4, 0, 1, 1);

        label_baseline = new QLabel(groupBox_3);
        label_baseline->setObjectName(QString::fromUtf8("label_baseline"));
        label_baseline->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(label_baseline, 4, 2, 1, 1);

        label_error_2 = new QLabel(groupBox_3);
        label_error_2->setObjectName(QString::fromUtf8("label_error_2"));

        gridLayout_2->addWidget(label_error_2, 9, 2, 1, 1);


        verticalLayout_6->addWidget(groupBox_3);

        pushButton_save = new QPushButton(groupBox_progress);
        pushButton_save->setObjectName(QString::fromUtf8("pushButton_save"));

        verticalLayout_6->addWidget(pushButton_save);

        pushButton_restart = new QPushButton(groupBox_progress);
        pushButton_restart->setObjectName(QString::fromUtf8("pushButton_restart"));

        verticalLayout_6->addWidget(pushButton_restart);


        verticalLayout->addWidget(groupBox_progress);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        scrollArea->setWidget(scrollAreaWidgetContents);

        horizontalLayout_4->addWidget(scrollArea);

        horizontalLayout_4->setStretch(0, 1);
        horizontalLayout_4->setStretch(1, 1);

        verticalLayout_5->addLayout(horizontalLayout_4);

        buttonBox = new QDialogButtonBox(calibrationDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout_5->addWidget(buttonBox);


        retranslateUi(calibrationDialog);

        QMetaObject::connectSlotsByName(calibrationDialog);
    } // setupUi

    void retranslateUi(QDialog *calibrationDialog)
    {
        calibrationDialog->setWindowTitle(QCoreApplication::translate("calibrationDialog", "Dialog", nullptr));
        label_left->setText(QString());
        label_right->setText(QString());
        radioButton_raw->setText(QCoreApplication::translate("calibrationDialog", "Raw", nullptr));
        radioButton_rectified->setText(QCoreApplication::translate("calibrationDialog", "Rectified", nullptr));
        radioButton_stereoRectified->setText(QCoreApplication::translate("calibrationDialog", "Stereo Rectified", nullptr));
        checkBox_mirror->setText(QCoreApplication::translate("calibrationDialog", "Mirror", nullptr));
        checkBox_showHorizontalLines->setText(QCoreApplication::translate("calibrationDialog", "Show horizontal lines", nullptr));
        groupBox->setTitle(QCoreApplication::translate("calibrationDialog", "Chessboard", nullptr));
#if QT_CONFIG(tooltip)
        label_15->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        label_15->setText(QCoreApplication::translate("calibrationDialog", "Square size", nullptr));
#if QT_CONFIG(tooltip)
        label_12->setToolTip(QCoreApplication::translate("calibrationDialog", "Number of inner squares on the board", nullptr));
#endif // QT_CONFIG(tooltip)
        label_12->setText(QCoreApplication::translate("calibrationDialog", "Board size", nullptr));
#if QT_CONFIG(tooltip)
        label_16->setToolTip(QCoreApplication::translate("calibrationDialog", "Number of inner squares on the board", nullptr));
#endif // QT_CONFIG(tooltip)
        label_16->setText(QString());
        doubleSpinBox_squareSize->setSuffix(QCoreApplication::translate("calibrationDialog", " m", nullptr));
#if QT_CONFIG(tooltip)
        label_21->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        label_21->setText(QCoreApplication::translate("calibrationDialog", "Download", nullptr));
#if QT_CONFIG(tooltip)
        label_20->setToolTip(QCoreApplication::translate("calibrationDialog", "Number of inner squares on the board", nullptr));
#endif // QT_CONFIG(tooltip)
        label_20->setText(QCoreApplication::translate("calibrationDialog", "<html><head/><body><p><a href=\"https://github.com/introlab/rtabmap/raw/master/data/check-108.pdf\"><span style=\" text-decoration: underline; color:#0000ff;\">Sample8x6</span></a></p></body></html>", nullptr));
#if QT_CONFIG(tooltip)
        label_22->setToolTip(QCoreApplication::translate("calibrationDialog", "If > 1, image is scaled down to help board detection on high definition images", nullptr));
#endif // QT_CONFIG(tooltip)
        label_22->setText(QCoreApplication::translate("calibrationDialog", "Max scale", nullptr));
#if QT_CONFIG(tooltip)
        label_stereoBaseline->setToolTip(QCoreApplication::translate("calibrationDialog", "If > 1, image is scaled down to help board detection on high definition images", nullptr));
#endif // QT_CONFIG(tooltip)
        label_stereoBaseline->setText(QCoreApplication::translate("calibrationDialog", "Stereo Baseline", nullptr));
#if QT_CONFIG(tooltip)
        doubleSpinBox_stereoBaseline->setToolTip(QCoreApplication::translate("calibrationDialog", "If you know the exact baseline of the stereo cameras, you can set it here in case the square size is not super accurate.", nullptr));
#endif // QT_CONFIG(tooltip)
        doubleSpinBox_stereoBaseline->setSuffix(QCoreApplication::translate("calibrationDialog", " m", nullptr));
        groupBox_progress->setTitle(QCoreApplication::translate("calibrationDialog", "Progress", nullptr));
        label_4->setText(QCoreApplication::translate("calibrationDialog", "Skew", nullptr));
        label_19->setText(QCoreApplication::translate("calibrationDialog", "Serial", nullptr));
        label_serial->setText(QCoreApplication::translate("calibrationDialog", "0", nullptr));
        checkBox_switchImages->setText(QCoreApplication::translate("calibrationDialog", "Switch images", nullptr));
        label_5->setText(QCoreApplication::translate("calibrationDialog", "Count", nullptr));
        progressBar_count->setFormat(QCoreApplication::translate("calibrationDialog", "%p", nullptr));
        progressBar_count_2->setFormat(QCoreApplication::translate("calibrationDialog", "%p", nullptr));
        label->setText(QCoreApplication::translate("calibrationDialog", "X", nullptr));
        progressBar_x->setFormat(QCoreApplication::translate("calibrationDialog", "%p%", nullptr));
        progressBar_x_2->setFormat(QCoreApplication::translate("calibrationDialog", "%p%", nullptr));
        label_2->setText(QCoreApplication::translate("calibrationDialog", "Y", nullptr));
        label_3->setText(QCoreApplication::translate("calibrationDialog", "Size", nullptr));
        pushButton_calibrate->setText(QCoreApplication::translate("calibrationDialog", "Calibrate", nullptr));
        checkBox_fisheye->setText(QCoreApplication::translate("calibrationDialog", "Fish eye", nullptr));
        checkBox_unlock->setText(QCoreApplication::translate("calibrationDialog", "Unlock", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("calibrationDialog", "Camera intrinsic parameters", nullptr));
        label_fx->setText(QCoreApplication::translate("calibrationDialog", "0", nullptr));
        label_fy->setText(QCoreApplication::translate("calibrationDialog", "0", nullptr));
        label_cx->setText(QCoreApplication::translate("calibrationDialog", "0", nullptr));
        label_11->setText(QCoreApplication::translate("calibrationDialog", "cy", nullptr));
        label_cy->setText(QCoreApplication::translate("calibrationDialog", "0", nullptr));
#if QT_CONFIG(tooltip)
        label_6->setToolTip(QCoreApplication::translate("calibrationDialog", "Camera matrix", nullptr));
#endif // QT_CONFIG(tooltip)
        label_6->setText(QCoreApplication::translate("calibrationDialog", "K", nullptr));
        label_9->setText(QCoreApplication::translate("calibrationDialog", "fy", nullptr));
        label_10->setText(QCoreApplication::translate("calibrationDialog", "cx", nullptr));
        label_8->setText(QCoreApplication::translate("calibrationDialog", "fx", nullptr));
#if QT_CONFIG(tooltip)
        label_17->setToolTip(QCoreApplication::translate("calibrationDialog", "Distorsion coefficients", nullptr));
#endif // QT_CONFIG(tooltip)
        label_17->setText(QCoreApplication::translate("calibrationDialog", "R", nullptr));
#if QT_CONFIG(tooltip)
        label_7->setToolTip(QCoreApplication::translate("calibrationDialog", "Distorsion coefficients", nullptr));
#endif // QT_CONFIG(tooltip)
        label_7->setText(QCoreApplication::translate("calibrationDialog", "D", nullptr));
#if QT_CONFIG(tooltip)
        label_14->setToolTip(QCoreApplication::translate("calibrationDialog", "Avg. reproduction error", nullptr));
#endif // QT_CONFIG(tooltip)
        label_14->setText(QCoreApplication::translate("calibrationDialog", "Error", nullptr));
        label_error->setText(QCoreApplication::translate("calibrationDialog", "0", nullptr));
        label_fx_2->setText(QCoreApplication::translate("calibrationDialog", "0", nullptr));
        label_cx_2->setText(QCoreApplication::translate("calibrationDialog", "0", nullptr));
        label_fy_2->setText(QCoreApplication::translate("calibrationDialog", "0", nullptr));
        label_cy_2->setText(QCoreApplication::translate("calibrationDialog", "0", nullptr));
#if QT_CONFIG(tooltip)
        label_18->setToolTip(QCoreApplication::translate("calibrationDialog", "Distorsion coefficients", nullptr));
#endif // QT_CONFIG(tooltip)
        label_18->setText(QCoreApplication::translate("calibrationDialog", "P", nullptr));
        label_baseline_name->setText(QCoreApplication::translate("calibrationDialog", "baseline", nullptr));
        label_baseline->setText(QCoreApplication::translate("calibrationDialog", "0", nullptr));
        label_error_2->setText(QCoreApplication::translate("calibrationDialog", "0", nullptr));
        pushButton_save->setText(QCoreApplication::translate("calibrationDialog", "Export calibration (*.yaml)", nullptr));
        pushButton_restart->setText(QCoreApplication::translate("calibrationDialog", "Restart", nullptr));
    } // retranslateUi

};

namespace Ui {
    class calibrationDialog: public Ui_calibrationDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALIBRATIONDIALOG_H
