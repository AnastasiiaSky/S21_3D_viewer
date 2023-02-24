/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
#include <glwidget.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *reset_rotate_right_left;
    QScrollBar *rotate_bar_right_left;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *resetzoom;
    QScrollBar *zoom_bar;
    QLineEdit *zoom_int;
    QLineEdit *rotate_right_left_int;
    QLineEdit *up_down_int;
    QLineEdit *left_right_int;
    QLineEdit *back_front_int;
    QLabel *label_7;
    QWidget *layoutWidget_4;
    QHBoxLayout *horizontalLayout_11;
    QHBoxLayout *horizontalLayout_12;
    QPushButton *reset_rotate_2;
    QScrollBar *rotate_bar_up_down;
    QLineEdit *rotate_up_down_int;
    QLineEdit *rotate_back_front_int;
    QLabel *label_8;
    QLabel *label_9;
    QWidget *layoutWidget_5;
    QHBoxLayout *horizontalLayout_13;
    QHBoxLayout *horizontalLayout_14;
    QPushButton *reset_rotate_3;
    QScrollBar *rotate_bar_front_back;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *reset_up_down;
    QScrollBar *up_down_bar;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *reset_left_r;
    QScrollBar *left_right_bar;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *reset_front_back;
    QScrollBar *front_back_bar;
    QPushButton *open_file;
    QRadioButton *Parallel_radioButton;
    QRadioButton *Central_radioButton;
    QPushButton *background;
    QGroupBox *line_setting;
    QPushButton *reset_widthline;
    QScrollBar *wigth_line;
    QLineEdit *wigthline_int;
    QLabel *label_5;
    QWidget *layoutWidget5;
    QHBoxLayout *horizontalLayout_8;
    QComboBox *comboBox_lines;
    QGroupBox *line_setting_2;
    QLineEdit *sizevertice_int;
    QLabel *label_6;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_9;
    QComboBox *comboBox_vertice;
    QWidget *layoutWidget6;
    QHBoxLayout *horizontalLayout_10;
    QPushButton *reset_sizevertice;
    QScrollBar *size_vertice;
    glwidget *openGLWidget;
    QGroupBox *line_setting_3;
    QLabel *label_10;
    QScrollBar *background_R_bar;
    QScrollBar *background_G_bar;
    QScrollBar *background_B_bar;
    QLabel *label_14;
    QScrollBar *line_R_bar;
    QScrollBar *line_G_bar;
    QScrollBar *line_B_bar;
    QScrollBar *point_R_bar;
    QScrollBar *point_G_bar;
    QScrollBar *point_B_bar;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *label_22;
    QLabel *label_23;
    QLabel *label_24;
    QGroupBox *line_setting_5;
    QPushButton *JPEG;
    QPushButton *BMP;
    QPushButton *GIF;
    QPushButton *Save_settings;
    QPushButton *load;
    QPushButton *Reset_settings;
    QGroupBox *line_setting_6;
    QLabel *label_12;
    QLabel *label_vert_num;
    QLabel *label_13;
    QLabel *label_vert_num_2;
    QGroupBox *line_setting_7;
    QLabel *label_path_to_file;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1498, 1072);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(100, 2));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        QBrush brush2(QColor(127, 127, 127, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush2);
        QBrush brush3(QColor(170, 170, 170, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        QBrush brush4(QColor(255, 255, 220, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush4);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        QBrush brush5(QColor(0, 0, 0, 128));
        brush5.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush5);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush5);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush5);
#endif
        MainWindow->setPalette(palette);
        MainWindow->setCursor(QCursor(Qt::ArrowCursor));
        MainWindow->setAutoFillBackground(false);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(30, 50, 491, 331));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush6(QColor(150, 133, 192, 22));
        brush6.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush);
#endif
        groupBox->setPalette(palette1);
        groupBox->setStyleSheet(QString::fromUtf8("background-color: rgba(150, 133, 192, 22);\n"
"color:rgb(0, 0, 0)"));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(11, 71, 291, 34));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        reset_rotate_right_left = new QPushButton(layoutWidget);
        reset_rotate_right_left->setObjectName(QString::fromUtf8("reset_rotate_right_left"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(reset_rotate_right_left->sizePolicy().hasHeightForWidth());
        reset_rotate_right_left->setSizePolicy(sizePolicy1);

        horizontalLayout_4->addWidget(reset_rotate_right_left);


        horizontalLayout_3->addLayout(horizontalLayout_4);

        rotate_bar_right_left = new QScrollBar(layoutWidget);
        rotate_bar_right_left->setObjectName(QString::fromUtf8("rotate_bar_right_left"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(rotate_bar_right_left->sizePolicy().hasHeightForWidth());
        rotate_bar_right_left->setSizePolicy(sizePolicy2);
        rotate_bar_right_left->setCursor(QCursor(Qt::OpenHandCursor));
        rotate_bar_right_left->setMouseTracking(true);
        rotate_bar_right_left->setTabletTracking(true);
        rotate_bar_right_left->setStyleSheet(QString::fromUtf8("background-color: rgb(97, 53, 131);"));
        rotate_bar_right_left->setOrientation(Qt::Horizontal);

        horizontalLayout_3->addWidget(rotate_bar_right_left);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(400, 40, 67, 17));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(400, 80, 67, 17));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(400, 200, 67, 17));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(400, 240, 67, 17));
        layoutWidget1 = new QWidget(groupBox);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 30, 291, 34));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        resetzoom = new QPushButton(layoutWidget1);
        resetzoom->setObjectName(QString::fromUtf8("resetzoom"));
        sizePolicy1.setHeightForWidth(resetzoom->sizePolicy().hasHeightForWidth());
        resetzoom->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(resetzoom);


        horizontalLayout_2->addLayout(horizontalLayout);

        zoom_bar = new QScrollBar(layoutWidget1);
        zoom_bar->setObjectName(QString::fromUtf8("zoom_bar"));
        sizePolicy2.setHeightForWidth(zoom_bar->sizePolicy().hasHeightForWidth());
        zoom_bar->setSizePolicy(sizePolicy2);
        zoom_bar->setCursor(QCursor(Qt::OpenHandCursor));
        zoom_bar->setMouseTracking(true);
        zoom_bar->setTabletTracking(true);
        zoom_bar->setStyleSheet(QString::fromUtf8("background-color: rgb(97, 53, 131);"));
        zoom_bar->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(zoom_bar);

        zoom_int = new QLineEdit(groupBox);
        zoom_int->setObjectName(QString::fromUtf8("zoom_int"));
        zoom_int->setGeometry(QRect(310, 30, 71, 31));
        rotate_right_left_int = new QLineEdit(groupBox);
        rotate_right_left_int->setObjectName(QString::fromUtf8("rotate_right_left_int"));
        rotate_right_left_int->setGeometry(QRect(310, 70, 71, 31));
        up_down_int = new QLineEdit(groupBox);
        up_down_int->setObjectName(QString::fromUtf8("up_down_int"));
        up_down_int->setGeometry(QRect(310, 190, 71, 31));
        left_right_int = new QLineEdit(groupBox);
        left_right_int->setObjectName(QString::fromUtf8("left_right_int"));
        left_right_int->setGeometry(QRect(310, 230, 71, 31));
        back_front_int = new QLineEdit(groupBox);
        back_front_int->setObjectName(QString::fromUtf8("back_front_int"));
        back_front_int->setGeometry(QRect(310, 270, 71, 31));
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(400, 280, 67, 17));
        layoutWidget_4 = new QWidget(groupBox);
        layoutWidget_4->setObjectName(QString::fromUtf8("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(10, 110, 291, 34));
        horizontalLayout_11 = new QHBoxLayout(layoutWidget_4);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        reset_rotate_2 = new QPushButton(layoutWidget_4);
        reset_rotate_2->setObjectName(QString::fromUtf8("reset_rotate_2"));
        sizePolicy1.setHeightForWidth(reset_rotate_2->sizePolicy().hasHeightForWidth());
        reset_rotate_2->setSizePolicy(sizePolicy1);

        horizontalLayout_12->addWidget(reset_rotate_2);


        horizontalLayout_11->addLayout(horizontalLayout_12);

        rotate_bar_up_down = new QScrollBar(layoutWidget_4);
        rotate_bar_up_down->setObjectName(QString::fromUtf8("rotate_bar_up_down"));
        sizePolicy2.setHeightForWidth(rotate_bar_up_down->sizePolicy().hasHeightForWidth());
        rotate_bar_up_down->setSizePolicy(sizePolicy2);
        rotate_bar_up_down->setCursor(QCursor(Qt::OpenHandCursor));
        rotate_bar_up_down->setMouseTracking(true);
        rotate_bar_up_down->setTabletTracking(true);
        rotate_bar_up_down->setStyleSheet(QString::fromUtf8("background-color: rgb(97, 53, 131);"));
        rotate_bar_up_down->setOrientation(Qt::Horizontal);

        horizontalLayout_11->addWidget(rotate_bar_up_down);

        rotate_up_down_int = new QLineEdit(groupBox);
        rotate_up_down_int->setObjectName(QString::fromUtf8("rotate_up_down_int"));
        rotate_up_down_int->setGeometry(QRect(310, 110, 71, 31));
        rotate_back_front_int = new QLineEdit(groupBox);
        rotate_back_front_int->setObjectName(QString::fromUtf8("rotate_back_front_int"));
        rotate_back_front_int->setGeometry(QRect(310, 150, 71, 31));
        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(400, 120, 67, 17));
        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(400, 160, 67, 17));
        layoutWidget_5 = new QWidget(groupBox);
        layoutWidget_5->setObjectName(QString::fromUtf8("layoutWidget_5"));
        layoutWidget_5->setGeometry(QRect(10, 150, 291, 34));
        horizontalLayout_13 = new QHBoxLayout(layoutWidget_5);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        horizontalLayout_13->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        reset_rotate_3 = new QPushButton(layoutWidget_5);
        reset_rotate_3->setObjectName(QString::fromUtf8("reset_rotate_3"));
        sizePolicy1.setHeightForWidth(reset_rotate_3->sizePolicy().hasHeightForWidth());
        reset_rotate_3->setSizePolicy(sizePolicy1);

        horizontalLayout_14->addWidget(reset_rotate_3);


        horizontalLayout_13->addLayout(horizontalLayout_14);

        rotate_bar_front_back = new QScrollBar(layoutWidget_5);
        rotate_bar_front_back->setObjectName(QString::fromUtf8("rotate_bar_front_back"));
        sizePolicy2.setHeightForWidth(rotate_bar_front_back->sizePolicy().hasHeightForWidth());
        rotate_bar_front_back->setSizePolicy(sizePolicy2);
        rotate_bar_front_back->setCursor(QCursor(Qt::OpenHandCursor));
        rotate_bar_front_back->setMouseTracking(true);
        rotate_bar_front_back->setTabletTracking(true);
        rotate_bar_front_back->setStyleSheet(QString::fromUtf8("background-color: rgb(97, 53, 131);"));
        rotate_bar_front_back->setOrientation(Qt::Horizontal);

        horizontalLayout_13->addWidget(rotate_bar_front_back);

        layoutWidget2 = new QWidget(groupBox);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(10, 190, 291, 41));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        reset_up_down = new QPushButton(layoutWidget2);
        reset_up_down->setObjectName(QString::fromUtf8("reset_up_down"));
        sizePolicy1.setHeightForWidth(reset_up_down->sizePolicy().hasHeightForWidth());
        reset_up_down->setSizePolicy(sizePolicy1);

        horizontalLayout_5->addWidget(reset_up_down);

        up_down_bar = new QScrollBar(layoutWidget2);
        up_down_bar->setObjectName(QString::fromUtf8("up_down_bar"));
        sizePolicy2.setHeightForWidth(up_down_bar->sizePolicy().hasHeightForWidth());
        up_down_bar->setSizePolicy(sizePolicy2);
        up_down_bar->setCursor(QCursor(Qt::OpenHandCursor));
        up_down_bar->setMouseTracking(true);
        up_down_bar->setTabletTracking(true);
        up_down_bar->setStyleSheet(QString::fromUtf8("background-color: rgb(97, 53, 131);"));
        up_down_bar->setOrientation(Qt::Horizontal);

        horizontalLayout_5->addWidget(up_down_bar);

        layoutWidget3 = new QWidget(groupBox);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(11, 230, 291, 41));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        reset_left_r = new QPushButton(layoutWidget3);
        reset_left_r->setObjectName(QString::fromUtf8("reset_left_r"));
        sizePolicy1.setHeightForWidth(reset_left_r->sizePolicy().hasHeightForWidth());
        reset_left_r->setSizePolicy(sizePolicy1);

        horizontalLayout_6->addWidget(reset_left_r);

        left_right_bar = new QScrollBar(layoutWidget3);
        left_right_bar->setObjectName(QString::fromUtf8("left_right_bar"));
        left_right_bar->setEnabled(true);
        sizePolicy2.setHeightForWidth(left_right_bar->sizePolicy().hasHeightForWidth());
        left_right_bar->setSizePolicy(sizePolicy2);
        left_right_bar->setCursor(QCursor(Qt::OpenHandCursor));
        left_right_bar->setMouseTracking(true);
        left_right_bar->setTabletTracking(true);
        left_right_bar->setStyleSheet(QString::fromUtf8("background-color: rgb(97, 53, 131);"));
        left_right_bar->setOrientation(Qt::Horizontal);

        horizontalLayout_6->addWidget(left_right_bar);

        layoutWidget4 = new QWidget(groupBox);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(11, 270, 291, 41));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget4);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        reset_front_back = new QPushButton(layoutWidget4);
        reset_front_back->setObjectName(QString::fromUtf8("reset_front_back"));
        reset_front_back->setEnabled(true);
        sizePolicy1.setHeightForWidth(reset_front_back->sizePolicy().hasHeightForWidth());
        reset_front_back->setSizePolicy(sizePolicy1);

        horizontalLayout_7->addWidget(reset_front_back);

        front_back_bar = new QScrollBar(layoutWidget4);
        front_back_bar->setObjectName(QString::fromUtf8("front_back_bar"));
        sizePolicy2.setHeightForWidth(front_back_bar->sizePolicy().hasHeightForWidth());
        front_back_bar->setSizePolicy(sizePolicy2);
        front_back_bar->setCursor(QCursor(Qt::OpenHandCursor));
        front_back_bar->setMouseTracking(true);
        front_back_bar->setTabletTracking(true);
        front_back_bar->setStyleSheet(QString::fromUtf8("background-color: rgb(97, 53, 131);"));
        front_back_bar->setOrientation(Qt::Horizontal);

        horizontalLayout_7->addWidget(front_back_bar);

        open_file = new QPushButton(centralwidget);
        open_file->setObjectName(QString::fromUtf8("open_file"));
        open_file->setGeometry(QRect(20, 20, 161, 25));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(open_file->sizePolicy().hasHeightForWidth());
        open_file->setSizePolicy(sizePolicy3);
        open_file->setCursor(QCursor(Qt::UpArrowCursor));
        Parallel_radioButton = new QRadioButton(centralwidget);
        Parallel_radioButton->setObjectName(QString::fromUtf8("Parallel_radioButton"));
        Parallel_radioButton->setGeometry(QRect(290, 20, 112, 23));
        Central_radioButton = new QRadioButton(centralwidget);
        Central_radioButton->setObjectName(QString::fromUtf8("Central_radioButton"));
        Central_radioButton->setGeometry(QRect(180, 20, 112, 23));
        background = new QPushButton(centralwidget);
        background->setObjectName(QString::fromUtf8("background"));
        background->setGeometry(QRect(830, 200, 281, 25));
        line_setting = new QGroupBox(centralwidget);
        line_setting->setObjectName(QString::fromUtf8("line_setting"));
        line_setting->setGeometry(QRect(30, 420, 491, 141));
        line_setting->setStyleSheet(QString::fromUtf8("background-color: rgba(150, 133, 192, 22);\n"
"color:rgb(0, 0, 0)"));
        reset_widthline = new QPushButton(line_setting);
        reset_widthline->setObjectName(QString::fromUtf8("reset_widthline"));
        reset_widthline->setGeometry(QRect(20, 90, 80, 25));
        sizePolicy1.setHeightForWidth(reset_widthline->sizePolicy().hasHeightForWidth());
        reset_widthline->setSizePolicy(sizePolicy1);
        wigth_line = new QScrollBar(line_setting);
        wigth_line->setObjectName(QString::fromUtf8("wigth_line"));
        wigth_line->setGeometry(QRect(108, 90, 201, 27));
        sizePolicy2.setHeightForWidth(wigth_line->sizePolicy().hasHeightForWidth());
        wigth_line->setSizePolicy(sizePolicy2);
        wigth_line->setCursor(QCursor(Qt::OpenHandCursor));
        wigth_line->setMouseTracking(true);
        wigth_line->setTabletTracking(true);
        wigth_line->setStyleSheet(QString::fromUtf8("background-color: rgb(97, 53, 131);"));
        wigth_line->setOrientation(Qt::Horizontal);
        wigthline_int = new QLineEdit(line_setting);
        wigthline_int->setObjectName(QString::fromUtf8("wigthline_int"));
        wigthline_int->setGeometry(QRect(320, 90, 71, 31));
        label_5 = new QLabel(line_setting);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(400, 100, 67, 17));
        layoutWidget5 = new QWidget(line_setting);
        layoutWidget5->setObjectName(QString::fromUtf8("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(20, 40, 451, 38));
        horizontalLayout_8 = new QHBoxLayout(layoutWidget5);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        comboBox_lines = new QComboBox(layoutWidget5);
        comboBox_lines->addItem(QString());
        comboBox_lines->addItem(QString());
        comboBox_lines->setObjectName(QString::fromUtf8("comboBox_lines"));

        horizontalLayout_8->addWidget(comboBox_lines);

        line_setting_2 = new QGroupBox(centralwidget);
        line_setting_2->setObjectName(QString::fromUtf8("line_setting_2"));
        line_setting_2->setGeometry(QRect(30, 570, 491, 151));
        line_setting_2->setStyleSheet(QString::fromUtf8("background-color: rgba(150, 133, 192, 22);\n"
"color:rgb(0, 0, 0)"));
        sizevertice_int = new QLineEdit(line_setting_2);
        sizevertice_int->setObjectName(QString::fromUtf8("sizevertice_int"));
        sizevertice_int->setGeometry(QRect(320, 90, 71, 31));
        label_6 = new QLabel(line_setting_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(400, 100, 67, 17));
        layoutWidget_3 = new QWidget(line_setting_2);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(20, 40, 451, 38));
        horizontalLayout_9 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        comboBox_vertice = new QComboBox(layoutWidget_3);
        comboBox_vertice->addItem(QString());
        comboBox_vertice->addItem(QString());
        comboBox_vertice->addItem(QString());
        comboBox_vertice->setObjectName(QString::fromUtf8("comboBox_vertice"));

        horizontalLayout_9->addWidget(comboBox_vertice);

        layoutWidget6 = new QWidget(line_setting_2);
        layoutWidget6->setObjectName(QString::fromUtf8("layoutWidget6"));
        layoutWidget6->setGeometry(QRect(20, 90, 291, 41));
        horizontalLayout_10 = new QHBoxLayout(layoutWidget6);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        reset_sizevertice = new QPushButton(layoutWidget6);
        reset_sizevertice->setObjectName(QString::fromUtf8("reset_sizevertice"));
        sizePolicy1.setHeightForWidth(reset_sizevertice->sizePolicy().hasHeightForWidth());
        reset_sizevertice->setSizePolicy(sizePolicy1);

        horizontalLayout_10->addWidget(reset_sizevertice);

        size_vertice = new QScrollBar(layoutWidget6);
        size_vertice->setObjectName(QString::fromUtf8("size_vertice"));
        sizePolicy2.setHeightForWidth(size_vertice->sizePolicy().hasHeightForWidth());
        size_vertice->setSizePolicy(sizePolicy2);
        size_vertice->setCursor(QCursor(Qt::OpenHandCursor));
        size_vertice->setMouseTracking(true);
        size_vertice->setTabletTracking(true);
        size_vertice->setStyleSheet(QString::fromUtf8("background-color: rgb(97, 53, 131);"));
        size_vertice->setOrientation(Qt::Horizontal);

        horizontalLayout_10->addWidget(size_vertice);

        openGLWidget = new glwidget(centralwidget);
        openGLWidget->setObjectName(QString::fromUtf8("openGLWidget"));
        openGLWidget->setGeometry(QRect(550, 10, 900, 821));
        line_setting_3 = new QGroupBox(centralwidget);
        line_setting_3->setObjectName(QString::fromUtf8("line_setting_3"));
        line_setting_3->setGeometry(QRect(30, 850, 1131, 141));
        line_setting_3->setStyleSheet(QString::fromUtf8("background-color: rgba(150, 133, 192, 22);\n"
"color:rgb(0, 0, 0)"));
        label_10 = new QLabel(line_setting_3);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(50, 20, 300, 16));
        background_R_bar = new QScrollBar(line_setting_3);
        background_R_bar->setObjectName(QString::fromUtf8("background_R_bar"));
        background_R_bar->setEnabled(true);
        background_R_bar->setGeometry(QRect(50, 40, 300, 20));
        sizePolicy2.setHeightForWidth(background_R_bar->sizePolicy().hasHeightForWidth());
        background_R_bar->setSizePolicy(sizePolicy2);
        background_R_bar->setCursor(QCursor(Qt::OpenHandCursor));
        background_R_bar->setMouseTracking(true);
        background_R_bar->setTabletTracking(true);
        background_R_bar->setStyleSheet(QString::fromUtf8("background-color: rgb(97, 53, 131);"));
        background_R_bar->setOrientation(Qt::Horizontal);
        background_G_bar = new QScrollBar(line_setting_3);
        background_G_bar->setObjectName(QString::fromUtf8("background_G_bar"));
        background_G_bar->setEnabled(true);
        background_G_bar->setGeometry(QRect(50, 70, 300, 20));
        sizePolicy2.setHeightForWidth(background_G_bar->sizePolicy().hasHeightForWidth());
        background_G_bar->setSizePolicy(sizePolicy2);
        background_G_bar->setCursor(QCursor(Qt::OpenHandCursor));
        background_G_bar->setMouseTracking(true);
        background_G_bar->setTabletTracking(true);
        background_G_bar->setStyleSheet(QString::fromUtf8("background-color: rgb(97, 53, 131);"));
        background_G_bar->setOrientation(Qt::Horizontal);
        background_B_bar = new QScrollBar(line_setting_3);
        background_B_bar->setObjectName(QString::fromUtf8("background_B_bar"));
        background_B_bar->setEnabled(true);
        background_B_bar->setGeometry(QRect(50, 100, 300, 20));
        sizePolicy2.setHeightForWidth(background_B_bar->sizePolicy().hasHeightForWidth());
        background_B_bar->setSizePolicy(sizePolicy2);
        background_B_bar->setCursor(QCursor(Qt::OpenHandCursor));
        background_B_bar->setMouseTracking(true);
        background_B_bar->setTabletTracking(true);
        background_B_bar->setStyleSheet(QString::fromUtf8("background-color: rgb(97, 53, 131);"));
        background_B_bar->setOrientation(Qt::Horizontal);
        label_14 = new QLabel(line_setting_3);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(430, 20, 300, 16));
        line_R_bar = new QScrollBar(line_setting_3);
        line_R_bar->setObjectName(QString::fromUtf8("line_R_bar"));
        line_R_bar->setEnabled(true);
        line_R_bar->setGeometry(QRect(430, 40, 300, 20));
        sizePolicy2.setHeightForWidth(line_R_bar->sizePolicy().hasHeightForWidth());
        line_R_bar->setSizePolicy(sizePolicy2);
        line_R_bar->setCursor(QCursor(Qt::OpenHandCursor));
        line_R_bar->setMouseTracking(true);
        line_R_bar->setTabletTracking(true);
        line_R_bar->setStyleSheet(QString::fromUtf8("background-color: rgb(97, 53, 131);"));
        line_R_bar->setOrientation(Qt::Horizontal);
        line_G_bar = new QScrollBar(line_setting_3);
        line_G_bar->setObjectName(QString::fromUtf8("line_G_bar"));
        line_G_bar->setEnabled(true);
        line_G_bar->setGeometry(QRect(430, 70, 300, 20));
        sizePolicy2.setHeightForWidth(line_G_bar->sizePolicy().hasHeightForWidth());
        line_G_bar->setSizePolicy(sizePolicy2);
        line_G_bar->setCursor(QCursor(Qt::OpenHandCursor));
        line_G_bar->setMouseTracking(true);
        line_G_bar->setTabletTracking(true);
        line_G_bar->setStyleSheet(QString::fromUtf8("background-color: rgb(97, 53, 131);"));
        line_G_bar->setOrientation(Qt::Horizontal);
        line_B_bar = new QScrollBar(line_setting_3);
        line_B_bar->setObjectName(QString::fromUtf8("line_B_bar"));
        line_B_bar->setEnabled(true);
        line_B_bar->setGeometry(QRect(430, 100, 300, 20));
        sizePolicy2.setHeightForWidth(line_B_bar->sizePolicy().hasHeightForWidth());
        line_B_bar->setSizePolicy(sizePolicy2);
        line_B_bar->setCursor(QCursor(Qt::OpenHandCursor));
        line_B_bar->setMouseTracking(true);
        line_B_bar->setTabletTracking(true);
        line_B_bar->setStyleSheet(QString::fromUtf8("background-color: rgb(97, 53, 131);"));
        line_B_bar->setOrientation(Qt::Horizontal);
        point_R_bar = new QScrollBar(line_setting_3);
        point_R_bar->setObjectName(QString::fromUtf8("point_R_bar"));
        point_R_bar->setEnabled(true);
        point_R_bar->setGeometry(QRect(810, 40, 300, 20));
        sizePolicy2.setHeightForWidth(point_R_bar->sizePolicy().hasHeightForWidth());
        point_R_bar->setSizePolicy(sizePolicy2);
        point_R_bar->setCursor(QCursor(Qt::OpenHandCursor));
        point_R_bar->setMouseTracking(true);
        point_R_bar->setTabletTracking(true);
        point_R_bar->setStyleSheet(QString::fromUtf8("background-color: rgb(97, 53, 131);"));
        point_R_bar->setOrientation(Qt::Horizontal);
        point_G_bar = new QScrollBar(line_setting_3);
        point_G_bar->setObjectName(QString::fromUtf8("point_G_bar"));
        point_G_bar->setEnabled(true);
        point_G_bar->setGeometry(QRect(810, 70, 300, 20));
        sizePolicy2.setHeightForWidth(point_G_bar->sizePolicy().hasHeightForWidth());
        point_G_bar->setSizePolicy(sizePolicy2);
        point_G_bar->setCursor(QCursor(Qt::OpenHandCursor));
        point_G_bar->setMouseTracking(true);
        point_G_bar->setTabletTracking(true);
        point_G_bar->setStyleSheet(QString::fromUtf8("background-color: rgb(97, 53, 131);"));
        point_G_bar->setOrientation(Qt::Horizontal);
        point_B_bar = new QScrollBar(line_setting_3);
        point_B_bar->setObjectName(QString::fromUtf8("point_B_bar"));
        point_B_bar->setEnabled(true);
        point_B_bar->setGeometry(QRect(810, 100, 300, 20));
        sizePolicy2.setHeightForWidth(point_B_bar->sizePolicy().hasHeightForWidth());
        point_B_bar->setSizePolicy(sizePolicy2);
        point_B_bar->setCursor(QCursor(Qt::OpenHandCursor));
        point_B_bar->setMouseTracking(true);
        point_B_bar->setTabletTracking(true);
        point_B_bar->setStyleSheet(QString::fromUtf8("background-color: rgb(97, 53, 131);"));
        point_B_bar->setOrientation(Qt::Horizontal);
        label_15 = new QLabel(line_setting_3);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(810, 20, 300, 16));
        label_16 = new QLabel(line_setting_3);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(780, 40, 20, 20));
        label_16->setStyleSheet(QString::fromUtf8("background-color: rgb(97, 53, 131);"));
        label_17 = new QLabel(line_setting_3);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(780, 70, 20, 20));
        label_17->setStyleSheet(QString::fromUtf8("background-color: rgb(97, 53, 131);"));
        label_18 = new QLabel(line_setting_3);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(780, 100, 20, 20));
        label_18->setStyleSheet(QString::fromUtf8("background-color: rgb(97, 53, 131);"));
        label_19 = new QLabel(line_setting_3);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(20, 40, 20, 20));
        QFont font;
        font.setFamilies({QString::fromUtf8("Academy Engraved LET")});
        label_19->setFont(font);
        label_19->setStyleSheet(QString::fromUtf8("background-color: rgb(97, 53, 131);"));
        label_20 = new QLabel(line_setting_3);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(20, 70, 20, 20));
        label_20->setFont(font);
        label_20->setStyleSheet(QString::fromUtf8("background-color: rgb(97, 53, 131);"));
        label_21 = new QLabel(line_setting_3);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(20, 100, 20, 20));
        label_21->setStyleSheet(QString::fromUtf8("background-color: rgb(97, 53, 131);"));
        label_22 = new QLabel(line_setting_3);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(400, 100, 20, 20));
        label_22->setStyleSheet(QString::fromUtf8("background-color: rgb(97, 53, 131);"));
        label_23 = new QLabel(line_setting_3);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setGeometry(QRect(400, 70, 20, 20));
        label_23->setStyleSheet(QString::fromUtf8("background-color: rgb(97, 53, 131);"));
        label_24 = new QLabel(line_setting_3);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setGeometry(QRect(400, 40, 20, 20));
        label_24->setStyleSheet(QString::fromUtf8("background-color: rgb(97, 53, 131);"));
        line_setting_5 = new QGroupBox(centralwidget);
        line_setting_5->setObjectName(QString::fromUtf8("line_setting_5"));
        line_setting_5->setGeometry(QRect(1180, 850, 281, 141));
        line_setting_5->setStyleSheet(QString::fromUtf8("background-color: rgba(150, 133, 192, 22);\n"
"color:rgb(0, 0, 0)"));
        JPEG = new QPushButton(line_setting_5);
        JPEG->setObjectName(QString::fromUtf8("JPEG"));
        JPEG->setGeometry(QRect(10, 30, 70, 30));
        JPEG->setStyleSheet(QString::fromUtf8(" QPushButton {\n"
"     border: 1px solid #8f8f91;\n"
"     border-radius: 1px;\n"
"     background-color:rgb(97, 53, 131);\n"
"\n"
" }\n"
"\n"
" QPushButton:pressed {\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
" }"));
        BMP = new QPushButton(line_setting_5);
        BMP->setObjectName(QString::fromUtf8("BMP"));
        BMP->setGeometry(QRect(110, 30, 70, 30));
        BMP->setStyleSheet(QString::fromUtf8(" QPushButton {\n"
"     border: 1px solid #8f8f91;\n"
"     border-radius: 1px;\n"
"     background-color:rgb(97, 53, 131);\n"
"\n"
" }\n"
"\n"
" QPushButton:pressed {\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
" }"));
        GIF = new QPushButton(line_setting_5);
        GIF->setObjectName(QString::fromUtf8("GIF"));
        GIF->setGeometry(QRect(200, 30, 70, 30));
        GIF->setStyleSheet(QString::fromUtf8("  QPushButton {\n"
"     border: 1px solid #8f8f91;\n"
"     border-radius: 1px;\n"
"     background-color:rgb(97, 53, 131);\n"
"\n"
" }\n"
"\n"
" QPushButton:pressed {\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
" }"));
        Save_settings = new QPushButton(line_setting_5);
        Save_settings->setObjectName(QString::fromUtf8("Save_settings"));
        Save_settings->setGeometry(QRect(10, 70, 131, 31));
        Save_settings->setStyleSheet(QString::fromUtf8(" QPushButton {\n"
"     border: 1px solid #8f8f91;\n"
"     border-radius: 1px;\n"
"     background-color:rgb(97, 53, 131);\n"
"\n"
" }\n"
"\n"
" QPushButton:pressed {\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
" }"));
        load = new QPushButton(line_setting_5);
        load->setObjectName(QString::fromUtf8("load"));
        load->setGeometry(QRect(150, 70, 121, 31));
        load->setStyleSheet(QString::fromUtf8(" QPushButton {\n"
"     border: 1px solid #8f8f91;\n"
"     border-radius: 1px;\n"
"     background-color:rgb(97, 53, 131);\n"
"\n"
" }\n"
"\n"
" QPushButton:pressed {\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
" }"));
        Reset_settings = new QPushButton(line_setting_5);
        Reset_settings->setObjectName(QString::fromUtf8("Reset_settings"));
        Reset_settings->setGeometry(QRect(10, 110, 261, 31));
        Reset_settings->setStyleSheet(QString::fromUtf8(" QPushButton {\n"
"     border: 1px solid #8f8f91;\n"
"     border-radius: 1px;\n"
"     background-color:rgb(97, 53, 131);\n"
"\n"
" }\n"
"\n"
" QPushButton:pressed {\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
" }"));
        line_setting_6 = new QGroupBox(centralwidget);
        line_setting_6->setObjectName(QString::fromUtf8("line_setting_6"));
        line_setting_6->setGeometry(QRect(30, 730, 201, 91));
        line_setting_6->setStyleSheet(QString::fromUtf8("background-color: rgba(150, 133, 192, 22);\n"
"color:rgb(0, 0, 0)"));
        label_12 = new QLabel(line_setting_6);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(10, 40, 21, 25));
        label_12->setFont(font);
        label_12->setStyleSheet(QString::fromUtf8("background-color: rgb(97, 53, 131);"));
        label_vert_num = new QLabel(line_setting_6);
        label_vert_num->setObjectName(QString::fromUtf8("label_vert_num"));
        label_vert_num->setGeometry(QRect(40, 40, 50, 25));
        label_13 = new QLabel(line_setting_6);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(100, 40, 21, 25));
        label_13->setStyleSheet(QString::fromUtf8("background-color: rgb(97, 53, 131);"));
        label_vert_num_2 = new QLabel(line_setting_6);
        label_vert_num_2->setObjectName(QString::fromUtf8("label_vert_num_2"));
        label_vert_num_2->setGeometry(QRect(130, 40, 50, 25));
        line_setting_7 = new QGroupBox(centralwidget);
        line_setting_7->setObjectName(QString::fromUtf8("line_setting_7"));
        line_setting_7->setGeometry(QRect(240, 730, 271, 91));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush6);
        QBrush brush7(QColor(223, 210, 255, 23));
        brush7.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Light, brush7);
        QBrush brush8(QColor(186, 171, 223, 23));
        brush8.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Midlight, brush8);
        QBrush brush9(QColor(75, 67, 96, 23));
        brush9.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Dark, brush9);
        QBrush brush10(QColor(100, 89, 128, 23));
        brush10.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Mid, brush10);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush);
        palette2.setBrush(QPalette::Active, QPalette::BrightText, brush1);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush6);
        QBrush brush11(QColor(202, 194, 223, 139));
        brush11.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::AlternateBase, brush11);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipBase, brush4);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        QBrush brush12(QColor(0, 0, 0, 127));
        brush12.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Active, QPalette::PlaceholderText, brush12);
#endif
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        QBrush brush13(QColor(245, 245, 245, 255));
        brush13.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Inactive, QPalette::Midlight, brush13);
        QBrush brush14(QColor(191, 191, 191, 255));
        brush14.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Inactive, QPalette::Dark, brush14);
        QBrush brush15(QColor(169, 169, 169, 255));
        brush15.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Inactive, QPalette::Mid, brush15);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::BrightText, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush13);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        QBrush brush16(QColor(0, 0, 0, 63));
        brush16.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush16);
#endif
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush9);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::Light, brush7);
        palette2.setBrush(QPalette::Disabled, QPalette::Midlight, brush8);
        palette2.setBrush(QPalette::Disabled, QPalette::Dark, brush9);
        palette2.setBrush(QPalette::Disabled, QPalette::Mid, brush10);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush9);
        palette2.setBrush(QPalette::Disabled, QPalette::BrightText, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush9);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush13);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush16);
#endif
        line_setting_7->setPalette(palette2);
        line_setting_7->setStyleSheet(QString::fromUtf8("background-color: rgba(150, 133, 192, 22);"));
        label_path_to_file = new QLabel(line_setting_7);
        label_path_to_file->setObjectName(QString::fromUtf8("label_path_to_file"));
        label_path_to_file->setGeometry(QRect(10, 40, 250, 25));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1498, 24));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        QWidget::setTabOrder(zoom_int, resetzoom);
        QWidget::setTabOrder(resetzoom, reset_rotate_right_left);
        QWidget::setTabOrder(reset_rotate_right_left, reset_up_down);
        QWidget::setTabOrder(reset_up_down, reset_left_r);
        QWidget::setTabOrder(reset_left_r, rotate_right_left_int);
        QWidget::setTabOrder(rotate_right_left_int, up_down_int);
        QWidget::setTabOrder(up_down_int, left_right_int);
        QWidget::setTabOrder(left_right_int, back_front_int);
        QWidget::setTabOrder(back_front_int, reset_front_back);
        QWidget::setTabOrder(reset_front_back, reset_rotate_2);
        QWidget::setTabOrder(reset_rotate_2, rotate_up_down_int);
        QWidget::setTabOrder(rotate_up_down_int, rotate_back_front_int);
        QWidget::setTabOrder(rotate_back_front_int, reset_rotate_3);
        QWidget::setTabOrder(reset_rotate_3, open_file);
        QWidget::setTabOrder(open_file, Parallel_radioButton);
        QWidget::setTabOrder(Parallel_radioButton, Central_radioButton);
        QWidget::setTabOrder(Central_radioButton, background);
        QWidget::setTabOrder(background, reset_widthline);
        QWidget::setTabOrder(reset_widthline, wigthline_int);
        QWidget::setTabOrder(wigthline_int, comboBox_lines);
        QWidget::setTabOrder(comboBox_lines, reset_sizevertice);
        QWidget::setTabOrder(reset_sizevertice, sizevertice_int);
        QWidget::setTabOrder(sizevertice_int, comboBox_vertice);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Settings", nullptr));
        reset_rotate_right_left->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Zoom", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Rotate  X", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Up/Down", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Left/Right", nullptr));
        resetzoom->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Forth/Back", nullptr));
        reset_rotate_2->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Rotate  Y", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Rotate  Z", nullptr));
        reset_rotate_3->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
        reset_up_down->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
        reset_left_r->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
        reset_front_back->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
        open_file->setText(QCoreApplication::translate("MainWindow", "Open file \342\206\223", nullptr));
        Parallel_radioButton->setText(QCoreApplication::translate("MainWindow", "Parallel", nullptr));
        Central_radioButton->setText(QCoreApplication::translate("MainWindow", "Central", nullptr));
        background->setText(QCoreApplication::translate("MainWindow", "\320\241hange background color", nullptr));
        line_setting->setTitle(QCoreApplication::translate("MainWindow", "Line settings", nullptr));
        reset_widthline->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Width", nullptr));
        comboBox_lines->setItemText(0, QCoreApplication::translate("MainWindow", "\342\200\225\342\200\225\342\200\225\342\200\225\342\200\225\342\200\225\342\200\225\342\200\225\342\200\225", nullptr));
        comboBox_lines->setItemText(1, QCoreApplication::translate("MainWindow", "- - - - - - - - - - - - - - - - - -", nullptr));

        line_setting_2->setTitle(QCoreApplication::translate("MainWindow", "Vertice settings", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Size", nullptr));
        comboBox_vertice->setItemText(0, QCoreApplication::translate("MainWindow", "None", nullptr));
        comboBox_vertice->setItemText(1, QCoreApplication::translate("MainWindow", "\342\227\217", nullptr));
        comboBox_vertice->setItemText(2, QCoreApplication::translate("MainWindow", "\342\226\240", nullptr));

        reset_sizevertice->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
        line_setting_3->setTitle(QCoreApplication::translate("MainWindow", "Color settings", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Background Color", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "Line Color", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "Vert Color", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", " R", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", " G", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", " B", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", " R", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", " G", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", " B", nullptr));
        label_22->setText(QCoreApplication::translate("MainWindow", " B", nullptr));
        label_23->setText(QCoreApplication::translate("MainWindow", " G", nullptr));
        label_24->setText(QCoreApplication::translate("MainWindow", " R", nullptr));
        line_setting_5->setTitle(QCoreApplication::translate("MainWindow", "Save picture and settings", nullptr));
        JPEG->setText(QCoreApplication::translate("MainWindow", "JPEG", nullptr));
        BMP->setText(QCoreApplication::translate("MainWindow", "BMP", nullptr));
        GIF->setText(QCoreApplication::translate("MainWindow", "GIF", nullptr));
        Save_settings->setText(QCoreApplication::translate("MainWindow", "Save settings", nullptr));
        load->setText(QCoreApplication::translate("MainWindow", "Load_settings", nullptr));
        Reset_settings->setText(QCoreApplication::translate("MainWindow", "Reset settings", nullptr));
        line_setting_6->setTitle(QCoreApplication::translate("MainWindow", "Number of vertices and facets", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "  V", nullptr));
        label_vert_num->setText(QString());
        label_13->setText(QCoreApplication::translate("MainWindow", "  F  ", nullptr));
        label_vert_num_2->setText(QString());
        line_setting_7->setTitle(QCoreApplication::translate("MainWindow", "Filename", nullptr));
        label_path_to_file->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
