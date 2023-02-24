/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../3dviewer/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    const uint offsetsAndSize[126];
    char stringdata0[1486];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 10), // "MainWindow"
QT_MOC_LITERAL(11, 20), // "on_open_file_clicked"
QT_MOC_LITERAL(32, 0), // ""
QT_MOC_LITERAL(33, 9), // "file_name"
QT_MOC_LITERAL(43, 5), // "char*"
QT_MOC_LITERAL(49, 3), // "str"
QT_MOC_LITERAL(53, 6), // "result"
QT_MOC_LITERAL(60, 27), // "on_up_down_bar_valueChanged"
QT_MOC_LITERAL(88, 5), // "value"
QT_MOC_LITERAL(94, 26), // "on_up_down_int_textChanged"
QT_MOC_LITERAL(121, 4), // "arg1"
QT_MOC_LITERAL(126, 24), // "on_reset_up_down_clicked"
QT_MOC_LITERAL(151, 30), // "on_left_right_bar_valueChanged"
QT_MOC_LITERAL(182, 29), // "on_left_right_int_textChanged"
QT_MOC_LITERAL(212, 23), // "on_reset_left_r_clicked"
QT_MOC_LITERAL(236, 30), // "on_front_back_bar_valueChanged"
QT_MOC_LITERAL(267, 29), // "on_back_front_int_textChanged"
QT_MOC_LITERAL(297, 27), // "on_reset_front_back_clicked"
QT_MOC_LITERAL(325, 11), // "moving_form"
QT_MOC_LITERAL(337, 37), // "on_rotate_bar_right_left_valu..."
QT_MOC_LITERAL(375, 36), // "on_rotate_right_left_int_text..."
QT_MOC_LITERAL(412, 34), // "on_reset_rotate_right_left_cl..."
QT_MOC_LITERAL(447, 34), // "on_rotate_bar_up_down_valueCh..."
QT_MOC_LITERAL(482, 33), // "on_rotate_up_down_int_textCha..."
QT_MOC_LITERAL(516, 25), // "on_reset_rotate_2_clicked"
QT_MOC_LITERAL(542, 37), // "on_rotate_bar_front_back_valu..."
QT_MOC_LITERAL(580, 36), // "on_rotate_back_front_int_text..."
QT_MOC_LITERAL(617, 25), // "on_reset_rotate_3_clicked"
QT_MOC_LITERAL(643, 13), // "rotating_form"
QT_MOC_LITERAL(657, 24), // "on_zoom_bar_valueChanged"
QT_MOC_LITERAL(682, 23), // "on_zoom_int_textChanged"
QT_MOC_LITERAL(706, 20), // "on_resetzoom_clicked"
QT_MOC_LITERAL(727, 9), // "zoom_form"
QT_MOC_LITERAL(737, 4), // "buff"
QT_MOC_LITERAL(742, 21), // "on_background_clicked"
QT_MOC_LITERAL(764, 26), // "on_wigth_line_valueChanged"
QT_MOC_LITERAL(791, 26), // "on_reset_widthline_clicked"
QT_MOC_LITERAL(818, 28), // "on_wigthline_int_textChanged"
QT_MOC_LITERAL(847, 37), // "on_comboBox_lines_currentInde..."
QT_MOC_LITERAL(885, 5), // "index"
QT_MOC_LITERAL(891, 30), // "on_Central_radioButton_toggled"
QT_MOC_LITERAL(922, 7), // "checked"
QT_MOC_LITERAL(930, 31), // "on_Parallel_radioButton_toggled"
QT_MOC_LITERAL(962, 39), // "on_comboBox_vertice_currentIn..."
QT_MOC_LITERAL(1002, 28), // "on_size_vertice_valueChanged"
QT_MOC_LITERAL(1031, 30), // "on_sizevertice_int_textChanged"
QT_MOC_LITERAL(1062, 28), // "on_reset_sizevertice_clicked"
QT_MOC_LITERAL(1091, 32), // "on_background_R_bar_valueChanged"
QT_MOC_LITERAL(1124, 32), // "on_background_G_bar_valueChanged"
QT_MOC_LITERAL(1157, 32), // "on_background_B_bar_valueChanged"
QT_MOC_LITERAL(1190, 26), // "on_line_R_bar_valueChanged"
QT_MOC_LITERAL(1217, 26), // "on_line_G_bar_valueChanged"
QT_MOC_LITERAL(1244, 26), // "on_line_B_bar_valueChanged"
QT_MOC_LITERAL(1271, 27), // "on_point_R_bar_valueChanged"
QT_MOC_LITERAL(1299, 27), // "on_point_G_bar_valueChanged"
QT_MOC_LITERAL(1327, 27), // "on_point_B_bar_valueChanged"
QT_MOC_LITERAL(1355, 15), // "on_JPEG_clicked"
QT_MOC_LITERAL(1371, 14), // "on_BMP_clicked"
QT_MOC_LITERAL(1386, 14), // "on_GIF_clicked"
QT_MOC_LITERAL(1401, 24), // "on_Save_settings_clicked"
QT_MOC_LITERAL(1426, 25), // "on_Reset_settings_clicked"
QT_MOC_LITERAL(1452, 17), // "AddFrameInGifTime"
QT_MOC_LITERAL(1470, 15) // "on_load_clicked"

    },
    "MainWindow\0on_open_file_clicked\0\0"
    "file_name\0char*\0str\0result\0"
    "on_up_down_bar_valueChanged\0value\0"
    "on_up_down_int_textChanged\0arg1\0"
    "on_reset_up_down_clicked\0"
    "on_left_right_bar_valueChanged\0"
    "on_left_right_int_textChanged\0"
    "on_reset_left_r_clicked\0"
    "on_front_back_bar_valueChanged\0"
    "on_back_front_int_textChanged\0"
    "on_reset_front_back_clicked\0moving_form\0"
    "on_rotate_bar_right_left_valueChanged\0"
    "on_rotate_right_left_int_textChanged\0"
    "on_reset_rotate_right_left_clicked\0"
    "on_rotate_bar_up_down_valueChanged\0"
    "on_rotate_up_down_int_textChanged\0"
    "on_reset_rotate_2_clicked\0"
    "on_rotate_bar_front_back_valueChanged\0"
    "on_rotate_back_front_int_textChanged\0"
    "on_reset_rotate_3_clicked\0rotating_form\0"
    "on_zoom_bar_valueChanged\0"
    "on_zoom_int_textChanged\0on_resetzoom_clicked\0"
    "zoom_form\0buff\0on_background_clicked\0"
    "on_wigth_line_valueChanged\0"
    "on_reset_widthline_clicked\0"
    "on_wigthline_int_textChanged\0"
    "on_comboBox_lines_currentIndexChanged\0"
    "index\0on_Central_radioButton_toggled\0"
    "checked\0on_Parallel_radioButton_toggled\0"
    "on_comboBox_vertice_currentIndexChanged\0"
    "on_size_vertice_valueChanged\0"
    "on_sizevertice_int_textChanged\0"
    "on_reset_sizevertice_clicked\0"
    "on_background_R_bar_valueChanged\0"
    "on_background_G_bar_valueChanged\0"
    "on_background_B_bar_valueChanged\0"
    "on_line_R_bar_valueChanged\0"
    "on_line_G_bar_valueChanged\0"
    "on_line_B_bar_valueChanged\0"
    "on_point_R_bar_valueChanged\0"
    "on_point_G_bar_valueChanged\0"
    "on_point_B_bar_valueChanged\0on_JPEG_clicked\0"
    "on_BMP_clicked\0on_GIF_clicked\0"
    "on_Save_settings_clicked\0"
    "on_Reset_settings_clicked\0AddFrameInGifTime\0"
    "on_load_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      53,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  332,    2, 0x08,    1 /* Private */,
       3,    2,  333,    2, 0x08,    2 /* Private */,
       7,    1,  338,    2, 0x08,    5 /* Private */,
       9,    1,  341,    2, 0x08,    7 /* Private */,
      11,    0,  344,    2, 0x08,    9 /* Private */,
      12,    1,  345,    2, 0x08,   10 /* Private */,
      13,    1,  348,    2, 0x08,   12 /* Private */,
      14,    0,  351,    2, 0x08,   14 /* Private */,
      15,    1,  352,    2, 0x08,   15 /* Private */,
      16,    1,  355,    2, 0x08,   17 /* Private */,
      17,    0,  358,    2, 0x08,   19 /* Private */,
      18,    0,  359,    2, 0x08,   20 /* Private */,
      19,    1,  360,    2, 0x08,   21 /* Private */,
      20,    1,  363,    2, 0x08,   23 /* Private */,
      21,    0,  366,    2, 0x08,   25 /* Private */,
      22,    1,  367,    2, 0x08,   26 /* Private */,
      23,    1,  370,    2, 0x08,   28 /* Private */,
      24,    0,  373,    2, 0x08,   30 /* Private */,
      25,    1,  374,    2, 0x08,   31 /* Private */,
      26,    1,  377,    2, 0x08,   33 /* Private */,
      27,    0,  380,    2, 0x08,   35 /* Private */,
      28,    0,  381,    2, 0x08,   36 /* Private */,
      29,    1,  382,    2, 0x08,   37 /* Private */,
      30,    1,  385,    2, 0x08,   39 /* Private */,
      31,    0,  388,    2, 0x08,   41 /* Private */,
      32,    1,  389,    2, 0x08,   42 /* Private */,
      34,    0,  392,    2, 0x08,   44 /* Private */,
      35,    1,  393,    2, 0x08,   45 /* Private */,
      36,    0,  396,    2, 0x08,   47 /* Private */,
      37,    1,  397,    2, 0x08,   48 /* Private */,
      38,    1,  400,    2, 0x08,   50 /* Private */,
      40,    1,  403,    2, 0x08,   52 /* Private */,
      42,    1,  406,    2, 0x08,   54 /* Private */,
      43,    1,  409,    2, 0x08,   56 /* Private */,
      44,    1,  412,    2, 0x08,   58 /* Private */,
      45,    1,  415,    2, 0x08,   60 /* Private */,
      46,    0,  418,    2, 0x08,   62 /* Private */,
      47,    1,  419,    2, 0x08,   63 /* Private */,
      48,    1,  422,    2, 0x08,   65 /* Private */,
      49,    1,  425,    2, 0x08,   67 /* Private */,
      50,    1,  428,    2, 0x08,   69 /* Private */,
      51,    1,  431,    2, 0x08,   71 /* Private */,
      52,    1,  434,    2, 0x08,   73 /* Private */,
      53,    1,  437,    2, 0x08,   75 /* Private */,
      54,    1,  440,    2, 0x08,   77 /* Private */,
      55,    1,  443,    2, 0x08,   79 /* Private */,
      56,    0,  446,    2, 0x08,   81 /* Private */,
      57,    0,  447,    2, 0x08,   82 /* Private */,
      58,    0,  448,    2, 0x08,   83 /* Private */,
      59,    0,  449,    2, 0x08,   84 /* Private */,
      60,    0,  450,    2, 0x08,   85 /* Private */,
      61,    0,  451,    2, 0x08,   86 /* Private */,
      62,    0,  452,    2, 0x08,   87 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 4,    5,    6,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,   33,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::Int,   39,
    QMetaType::Void, QMetaType::Bool,   41,
    QMetaType::Void, QMetaType::Bool,   41,
    QMetaType::Void, QMetaType::Int,   39,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_open_file_clicked(); break;
        case 1: _t->file_name((*reinterpret_cast< char*(*)>(_a[1])),(*reinterpret_cast< char*(*)>(_a[2]))); break;
        case 2: _t->on_up_down_bar_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_up_down_int_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->on_reset_up_down_clicked(); break;
        case 5: _t->on_left_right_bar_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_left_right_int_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->on_reset_left_r_clicked(); break;
        case 8: _t->on_front_back_bar_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->on_back_front_int_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->on_reset_front_back_clicked(); break;
        case 11: _t->moving_form(); break;
        case 12: _t->on_rotate_bar_right_left_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->on_rotate_right_left_int_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 14: _t->on_reset_rotate_right_left_clicked(); break;
        case 15: _t->on_rotate_bar_up_down_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->on_rotate_up_down_int_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 17: _t->on_reset_rotate_2_clicked(); break;
        case 18: _t->on_rotate_bar_front_back_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 19: _t->on_rotate_back_front_int_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 20: _t->on_reset_rotate_3_clicked(); break;
        case 21: _t->rotating_form(); break;
        case 22: _t->on_zoom_bar_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 23: _t->on_zoom_int_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 24: _t->on_resetzoom_clicked(); break;
        case 25: _t->zoom_form((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 26: _t->on_background_clicked(); break;
        case 27: _t->on_wigth_line_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 28: _t->on_reset_widthline_clicked(); break;
        case 29: _t->on_wigthline_int_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 30: _t->on_comboBox_lines_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 31: _t->on_Central_radioButton_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 32: _t->on_Parallel_radioButton_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 33: _t->on_comboBox_vertice_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 34: _t->on_size_vertice_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 35: _t->on_sizevertice_int_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 36: _t->on_reset_sizevertice_clicked(); break;
        case 37: _t->on_background_R_bar_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 38: _t->on_background_G_bar_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 39: _t->on_background_B_bar_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 40: _t->on_line_R_bar_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 41: _t->on_line_G_bar_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 42: _t->on_line_B_bar_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 43: _t->on_point_R_bar_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 44: _t->on_point_G_bar_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 45: _t->on_point_B_bar_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 46: _t->on_JPEG_clicked(); break;
        case 47: _t->on_BMP_clicked(); break;
        case 48: _t->on_GIF_clicked(); break;
        case 49: _t->on_Save_settings_clicked(); break;
        case 50: _t->on_Reset_settings_clicked(); break;
        case 51: _t->AddFrameInGifTime(); break;
        case 52: _t->on_load_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.offsetsAndSize,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_MainWindow_t
, QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<char *, std::false_type>, QtPrivate::TypeAndForceComplete<char *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 53)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 53;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 53)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 53;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
