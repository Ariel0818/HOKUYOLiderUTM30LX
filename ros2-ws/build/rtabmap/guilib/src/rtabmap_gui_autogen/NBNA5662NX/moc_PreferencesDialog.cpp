/****************************************************************************
** Meta object code from reading C++ file 'PreferencesDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/rtabmap/guilib/include/rtabmap/gui/PreferencesDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PreferencesDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_rtabmap__PreferencesDialog_t {
    QByteArrayData data[86];
    char stringdata0[1731];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_rtabmap__PreferencesDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_rtabmap__PreferencesDialog_t qt_meta_stringdata_rtabmap__PreferencesDialog = {
    {
QT_MOC_LITERAL(0, 0, 26), // "rtabmap::PreferencesDialog"
QT_MOC_LITERAL(1, 27, 15), // "settingsChanged"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 30), // "PreferencesDialog::PANEL_FLAGS"
QT_MOC_LITERAL(4, 75, 22), // "rtabmap::ParametersMap"
QT_MOC_LITERAL(5, 98, 12), // "setInputRate"
QT_MOC_LITERAL(6, 111, 5), // "value"
QT_MOC_LITERAL(7, 117, 16), // "setDetectionRate"
QT_MOC_LITERAL(8, 134, 12), // "setTimeLimit"
QT_MOC_LITERAL(9, 147, 11), // "setSLAMMode"
QT_MOC_LITERAL(10, 159, 7), // "enabled"
QT_MOC_LITERAL(11, 167, 18), // "selectSourceDriver"
QT_MOC_LITERAL(12, 186, 3), // "Src"
QT_MOC_LITERAL(13, 190, 3), // "src"
QT_MOC_LITERAL(14, 194, 7), // "variant"
QT_MOC_LITERAL(15, 202, 9), // "calibrate"
QT_MOC_LITERAL(16, 212, 15), // "calibrateSimple"
QT_MOC_LITERAL(17, 228, 29), // "calibrateOdomSensorExtrinsics"
QT_MOC_LITERAL(18, 258, 11), // "closeDialog"
QT_MOC_LITERAL(19, 270, 16), // "QAbstractButton*"
QT_MOC_LITERAL(20, 287, 6), // "button"
QT_MOC_LITERAL(21, 294, 10), // "resetApply"
QT_MOC_LITERAL(22, 305, 13), // "resetSettings"
QT_MOC_LITERAL(23, 319, 11), // "panelNumber"
QT_MOC_LITERAL(24, 331, 14), // "loadConfigFrom"
QT_MOC_LITERAL(25, 346, 12), // "saveConfigTo"
QT_MOC_LITERAL(26, 359, 11), // "resetConfig"
QT_MOC_LITERAL(27, 371, 24), // "makeObsoleteGeneralPanel"
QT_MOC_LITERAL(28, 396, 31), // "makeObsoleteCloudRenderingPanel"
QT_MOC_LITERAL(29, 428, 24), // "makeObsoleteLoggingPanel"
QT_MOC_LITERAL(30, 453, 23), // "makeObsoleteSourcePanel"
QT_MOC_LITERAL(31, 477, 7), // "clicked"
QT_MOC_LITERAL(32, 485, 11), // "QModelIndex"
QT_MOC_LITERAL(33, 497, 7), // "current"
QT_MOC_LITERAL(34, 505, 8), // "previous"
QT_MOC_LITERAL(35, 514, 12), // "addParameter"
QT_MOC_LITERAL(36, 527, 20), // "updatePredictionPlot"
QT_MOC_LITERAL(37, 548, 11), // "updateKpROI"
QT_MOC_LITERAL(38, 560, 31), // "updateStereoDisparityVisibility"
QT_MOC_LITERAL(39, 592, 31), // "updateFeatureMatchingVisibility"
QT_MOC_LITERAL(40, 624, 26), // "updateOdometryStackedIndex"
QT_MOC_LITERAL(41, 651, 5), // "index"
QT_MOC_LITERAL(42, 657, 15), // "useOdomFeatures"
QT_MOC_LITERAL(43, 673, 22), // "changeWorkingDirectory"
QT_MOC_LITERAL(44, 696, 20), // "changeDictionaryPath"
QT_MOC_LITERAL(45, 717, 31), // "changeOdometryORBSLAMVocabulary"
QT_MOC_LITERAL(46, 749, 29), // "changeOdometryOKVISConfigPath"
QT_MOC_LITERAL(47, 779, 28), // "changeOdometryVINSConfigPath"
QT_MOC_LITERAL(48, 808, 30), // "changeOdometryOpenVINSLeftMask"
QT_MOC_LITERAL(49, 839, 31), // "changeOdometryOpenVINSRightMask"
QT_MOC_LITERAL(50, 871, 21), // "changeIcpPMConfigPath"
QT_MOC_LITERAL(51, 893, 25), // "changeSuperPointModelPath"
QT_MOC_LITERAL(52, 919, 19), // "changePyMatcherPath"
QT_MOC_LITERAL(53, 939, 20), // "changePyMatcherModel"
QT_MOC_LITERAL(54, 960, 20), // "changePyDetectorPath"
QT_MOC_LITERAL(55, 981, 15), // "readSettingsEnd"
QT_MOC_LITERAL(56, 997, 13), // "setupTreeView"
QT_MOC_LITERAL(57, 1011, 20), // "updateBasicParameter"
QT_MOC_LITERAL(58, 1032, 18), // "openDatabaseViewer"
QT_MOC_LITERAL(59, 1051, 24), // "visualizeDistortionModel"
QT_MOC_LITERAL(60, 1076, 20), // "selectSourceDatabase"
QT_MOC_LITERAL(61, 1097, 21), // "selectCalibrationPath"
QT_MOC_LITERAL(62, 1119, 31), // "selectOdomSensorCalibrationPath"
QT_MOC_LITERAL(63, 1151, 24), // "selectSourceImagesStamps"
QT_MOC_LITERAL(64, 1176, 29), // "selectSourceRGBDImagesPathRGB"
QT_MOC_LITERAL(65, 1206, 31), // "selectSourceRGBDImagesPathDepth"
QT_MOC_LITERAL(66, 1238, 27), // "selectSourceImagesPathScans"
QT_MOC_LITERAL(67, 1266, 25), // "selectSourceImagesPathIMU"
QT_MOC_LITERAL(68, 1292, 26), // "selectSourceImagesPathOdom"
QT_MOC_LITERAL(69, 1319, 24), // "selectSourceImagesPathGt"
QT_MOC_LITERAL(70, 1344, 32), // "selectSourceStereoImagesPathLeft"
QT_MOC_LITERAL(71, 1377, 33), // "selectSourceStereoImagesPathR..."
QT_MOC_LITERAL(72, 1411, 22), // "selectSourceImagesPath"
QT_MOC_LITERAL(73, 1434, 21), // "selectSourceVideoPath"
QT_MOC_LITERAL(74, 1456, 27), // "selectSourceStereoVideoPath"
QT_MOC_LITERAL(75, 1484, 28), // "selectSourceStereoVideoPath2"
QT_MOC_LITERAL(76, 1513, 27), // "selectSourceDistortionModel"
QT_MOC_LITERAL(77, 1541, 19), // "selectSourceOniPath"
QT_MOC_LITERAL(78, 1561, 20), // "selectSourceOni2Path"
QT_MOC_LITERAL(79, 1582, 19), // "selectSourceMKVPath"
QT_MOC_LITERAL(80, 1602, 19), // "selectSourceSvoPath"
QT_MOC_LITERAL(81, 1622, 30), // "selectSourceRealsense2JsonPath"
QT_MOC_LITERAL(82, 1653, 27), // "selectSourceDepthaiBlobPath"
QT_MOC_LITERAL(83, 1681, 25), // "updateSourceGrpVisibility"
QT_MOC_LITERAL(84, 1707, 12), // "testOdometry"
QT_MOC_LITERAL(85, 1720, 10) // "testCamera"

    },
    "rtabmap::PreferencesDialog\0settingsChanged\0"
    "\0PreferencesDialog::PANEL_FLAGS\0"
    "rtabmap::ParametersMap\0setInputRate\0"
    "value\0setDetectionRate\0setTimeLimit\0"
    "setSLAMMode\0enabled\0selectSourceDriver\0"
    "Src\0src\0variant\0calibrate\0calibrateSimple\0"
    "calibrateOdomSensorExtrinsics\0closeDialog\0"
    "QAbstractButton*\0button\0resetApply\0"
    "resetSettings\0panelNumber\0loadConfigFrom\0"
    "saveConfigTo\0resetConfig\0"
    "makeObsoleteGeneralPanel\0"
    "makeObsoleteCloudRenderingPanel\0"
    "makeObsoleteLoggingPanel\0"
    "makeObsoleteSourcePanel\0clicked\0"
    "QModelIndex\0current\0previous\0addParameter\0"
    "updatePredictionPlot\0updateKpROI\0"
    "updateStereoDisparityVisibility\0"
    "updateFeatureMatchingVisibility\0"
    "updateOdometryStackedIndex\0index\0"
    "useOdomFeatures\0changeWorkingDirectory\0"
    "changeDictionaryPath\0"
    "changeOdometryORBSLAMVocabulary\0"
    "changeOdometryOKVISConfigPath\0"
    "changeOdometryVINSConfigPath\0"
    "changeOdometryOpenVINSLeftMask\0"
    "changeOdometryOpenVINSRightMask\0"
    "changeIcpPMConfigPath\0changeSuperPointModelPath\0"
    "changePyMatcherPath\0changePyMatcherModel\0"
    "changePyDetectorPath\0readSettingsEnd\0"
    "setupTreeView\0updateBasicParameter\0"
    "openDatabaseViewer\0visualizeDistortionModel\0"
    "selectSourceDatabase\0selectCalibrationPath\0"
    "selectOdomSensorCalibrationPath\0"
    "selectSourceImagesStamps\0"
    "selectSourceRGBDImagesPathRGB\0"
    "selectSourceRGBDImagesPathDepth\0"
    "selectSourceImagesPathScans\0"
    "selectSourceImagesPathIMU\0"
    "selectSourceImagesPathOdom\0"
    "selectSourceImagesPathGt\0"
    "selectSourceStereoImagesPathLeft\0"
    "selectSourceStereoImagesPathRight\0"
    "selectSourceImagesPath\0selectSourceVideoPath\0"
    "selectSourceStereoVideoPath\0"
    "selectSourceStereoVideoPath2\0"
    "selectSourceDistortionModel\0"
    "selectSourceOniPath\0selectSourceOni2Path\0"
    "selectSourceMKVPath\0selectSourceSvoPath\0"
    "selectSourceRealsense2JsonPath\0"
    "selectSourceDepthaiBlobPath\0"
    "updateSourceGrpVisibility\0testOdometry\0"
    "testCamera"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_rtabmap__PreferencesDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      75,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  389,    2, 0x06 /* Public */,
       1,    1,  392,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,  395,    2, 0x0a /* Public */,
       7,    1,  398,    2, 0x0a /* Public */,
       8,    1,  401,    2, 0x0a /* Public */,
       9,    1,  404,    2, 0x0a /* Public */,
      11,    2,  407,    2, 0x0a /* Public */,
      11,    1,  412,    2, 0x2a /* Public | MethodCloned */,
      15,    0,  415,    2, 0x0a /* Public */,
      16,    0,  416,    2, 0x0a /* Public */,
      17,    0,  417,    2, 0x0a /* Public */,
      18,    1,  418,    2, 0x08 /* Private */,
      21,    1,  421,    2, 0x08 /* Private */,
      22,    1,  424,    2, 0x08 /* Private */,
      24,    0,  427,    2, 0x08 /* Private */,
      25,    0,  428,    2, 0x08 /* Private */,
      26,    0,  429,    2, 0x08 /* Private */,
      27,    0,  430,    2, 0x08 /* Private */,
      28,    0,  431,    2, 0x08 /* Private */,
      29,    0,  432,    2, 0x08 /* Private */,
      30,    0,  433,    2, 0x08 /* Private */,
      31,    2,  434,    2, 0x08 /* Private */,
      35,    1,  439,    2, 0x08 /* Private */,
      35,    1,  442,    2, 0x08 /* Private */,
      35,    1,  445,    2, 0x08 /* Private */,
      35,    1,  448,    2, 0x08 /* Private */,
      36,    0,  451,    2, 0x08 /* Private */,
      37,    0,  452,    2, 0x08 /* Private */,
      38,    0,  453,    2, 0x08 /* Private */,
      39,    0,  454,    2, 0x08 /* Private */,
      40,    1,  455,    2, 0x08 /* Private */,
      42,    0,  458,    2, 0x08 /* Private */,
      43,    0,  459,    2, 0x08 /* Private */,
      44,    0,  460,    2, 0x08 /* Private */,
      45,    0,  461,    2, 0x08 /* Private */,
      46,    0,  462,    2, 0x08 /* Private */,
      47,    0,  463,    2, 0x08 /* Private */,
      48,    0,  464,    2, 0x08 /* Private */,
      49,    0,  465,    2, 0x08 /* Private */,
      50,    0,  466,    2, 0x08 /* Private */,
      51,    0,  467,    2, 0x08 /* Private */,
      52,    0,  468,    2, 0x08 /* Private */,
      53,    0,  469,    2, 0x08 /* Private */,
      54,    0,  470,    2, 0x08 /* Private */,
      55,    0,  471,    2, 0x08 /* Private */,
      56,    0,  472,    2, 0x08 /* Private */,
      57,    0,  473,    2, 0x08 /* Private */,
      58,    0,  474,    2, 0x08 /* Private */,
      59,    0,  475,    2, 0x08 /* Private */,
      60,    0,  476,    2, 0x08 /* Private */,
      61,    0,  477,    2, 0x08 /* Private */,
      62,    0,  478,    2, 0x08 /* Private */,
      63,    0,  479,    2, 0x08 /* Private */,
      64,    0,  480,    2, 0x08 /* Private */,
      65,    0,  481,    2, 0x08 /* Private */,
      66,    0,  482,    2, 0x08 /* Private */,
      67,    0,  483,    2, 0x08 /* Private */,
      68,    0,  484,    2, 0x08 /* Private */,
      69,    0,  485,    2, 0x08 /* Private */,
      70,    0,  486,    2, 0x08 /* Private */,
      71,    0,  487,    2, 0x08 /* Private */,
      72,    0,  488,    2, 0x08 /* Private */,
      73,    0,  489,    2, 0x08 /* Private */,
      74,    0,  490,    2, 0x08 /* Private */,
      75,    0,  491,    2, 0x08 /* Private */,
      76,    0,  492,    2, 0x08 /* Private */,
      77,    0,  493,    2, 0x08 /* Private */,
      78,    0,  494,    2, 0x08 /* Private */,
      79,    0,  495,    2, 0x08 /* Private */,
      80,    0,  496,    2, 0x08 /* Private */,
      81,    0,  497,    2, 0x08 /* Private */,
      82,    0,  498,    2, 0x08 /* Private */,
      83,    0,  499,    2, 0x08 /* Private */,
      84,    0,  500,    2, 0x08 /* Private */,
      85,    0,  501,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 4,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Double,    6,
    QMetaType::Void, QMetaType::Double,    6,
    QMetaType::Void, QMetaType::Float,    6,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, 0x80000000 | 12, QMetaType::Int,   13,   14,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 19,   20,
    QMetaType::Void, 0x80000000 | 19,   20,
    QMetaType::Void, QMetaType::Int,   23,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 32, 0x80000000 | 32,   33,   34,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Double,    6,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   41,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void rtabmap::PreferencesDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PreferencesDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->settingsChanged((*reinterpret_cast< PreferencesDialog::PANEL_FLAGS(*)>(_a[1]))); break;
        case 1: _t->settingsChanged((*reinterpret_cast< rtabmap::ParametersMap(*)>(_a[1]))); break;
        case 2: _t->setInputRate((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->setDetectionRate((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->setTimeLimit((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 5: _t->setSLAMMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->selectSourceDriver((*reinterpret_cast< Src(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: _t->selectSourceDriver((*reinterpret_cast< Src(*)>(_a[1]))); break;
        case 8: _t->calibrate(); break;
        case 9: _t->calibrateSimple(); break;
        case 10: _t->calibrateOdomSensorExtrinsics(); break;
        case 11: _t->closeDialog((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        case 12: _t->resetApply((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        case 13: _t->resetSettings((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->loadConfigFrom(); break;
        case 15: { bool _r = _t->saveConfigTo();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 16: _t->resetConfig(); break;
        case 17: _t->makeObsoleteGeneralPanel(); break;
        case 18: _t->makeObsoleteCloudRenderingPanel(); break;
        case 19: _t->makeObsoleteLoggingPanel(); break;
        case 20: _t->makeObsoleteSourcePanel(); break;
        case 21: _t->clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 22: _t->addParameter((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 23: _t->addParameter((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 24: _t->addParameter((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 25: _t->addParameter((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 26: _t->updatePredictionPlot(); break;
        case 27: _t->updateKpROI(); break;
        case 28: _t->updateStereoDisparityVisibility(); break;
        case 29: _t->updateFeatureMatchingVisibility(); break;
        case 30: _t->updateOdometryStackedIndex((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 31: _t->useOdomFeatures(); break;
        case 32: _t->changeWorkingDirectory(); break;
        case 33: _t->changeDictionaryPath(); break;
        case 34: _t->changeOdometryORBSLAMVocabulary(); break;
        case 35: _t->changeOdometryOKVISConfigPath(); break;
        case 36: _t->changeOdometryVINSConfigPath(); break;
        case 37: _t->changeOdometryOpenVINSLeftMask(); break;
        case 38: _t->changeOdometryOpenVINSRightMask(); break;
        case 39: _t->changeIcpPMConfigPath(); break;
        case 40: _t->changeSuperPointModelPath(); break;
        case 41: _t->changePyMatcherPath(); break;
        case 42: _t->changePyMatcherModel(); break;
        case 43: _t->changePyDetectorPath(); break;
        case 44: _t->readSettingsEnd(); break;
        case 45: _t->setupTreeView(); break;
        case 46: _t->updateBasicParameter(); break;
        case 47: _t->openDatabaseViewer(); break;
        case 48: _t->visualizeDistortionModel(); break;
        case 49: _t->selectSourceDatabase(); break;
        case 50: _t->selectCalibrationPath(); break;
        case 51: _t->selectOdomSensorCalibrationPath(); break;
        case 52: _t->selectSourceImagesStamps(); break;
        case 53: _t->selectSourceRGBDImagesPathRGB(); break;
        case 54: _t->selectSourceRGBDImagesPathDepth(); break;
        case 55: _t->selectSourceImagesPathScans(); break;
        case 56: _t->selectSourceImagesPathIMU(); break;
        case 57: _t->selectSourceImagesPathOdom(); break;
        case 58: _t->selectSourceImagesPathGt(); break;
        case 59: _t->selectSourceStereoImagesPathLeft(); break;
        case 60: _t->selectSourceStereoImagesPathRight(); break;
        case 61: _t->selectSourceImagesPath(); break;
        case 62: _t->selectSourceVideoPath(); break;
        case 63: _t->selectSourceStereoVideoPath(); break;
        case 64: _t->selectSourceStereoVideoPath2(); break;
        case 65: _t->selectSourceDistortionModel(); break;
        case 66: _t->selectSourceOniPath(); break;
        case 67: _t->selectSourceOni2Path(); break;
        case 68: _t->selectSourceMKVPath(); break;
        case 69: _t->selectSourceSvoPath(); break;
        case 70: _t->selectSourceRealsense2JsonPath(); break;
        case 71: _t->selectSourceDepthaiBlobPath(); break;
        case 72: _t->updateSourceGrpVisibility(); break;
        case 73: _t->testOdometry(); break;
        case 74: _t->testCamera(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PreferencesDialog::*)(PreferencesDialog::PANEL_FLAGS );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PreferencesDialog::settingsChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PreferencesDialog::*)(rtabmap::ParametersMap );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PreferencesDialog::settingsChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject rtabmap::PreferencesDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_rtabmap__PreferencesDialog.data,
    qt_meta_data_rtabmap__PreferencesDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *rtabmap::PreferencesDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *rtabmap::PreferencesDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_rtabmap__PreferencesDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int rtabmap::PreferencesDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 75)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 75;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 75)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 75;
    }
    return _id;
}

// SIGNAL 0
void rtabmap::PreferencesDialog::settingsChanged(PreferencesDialog::PANEL_FLAGS _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void rtabmap::PreferencesDialog::settingsChanged(rtabmap::ParametersMap _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
