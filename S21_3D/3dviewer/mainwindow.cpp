#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>
#include <QPixmap>
#include <QFileDialog>
#include <QColorDialog>
#include <QColor>
#include <QPalette>
#include <QDebug>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->zoom_bar->setMinimum(-100);
    ui->zoom_bar->setMaximum(100);
    ui->up_down_bar->setMinimum(-100);
    ui->up_down_bar->setMaximum(100);
    ui->left_right_bar->setMinimum(-100);
    ui->left_right_bar->setMaximum(100);
    ui->front_back_bar->setMaximum(100);
    ui->front_back_bar->setMinimum(-100);
    ui->rotate_bar_front_back->setMinimum(-100);
    ui->rotate_bar_front_back->setMaximum(100);
    ui->rotate_bar_right_left->setMinimum(-100);
    ui->rotate_bar_right_left->setMaximum(100);
    ui->rotate_bar_up_down->setMaximum(100);
    ui->rotate_bar_up_down->setMinimum(-100);
    ui->wigth_line->setMinimum(0);
    ui->wigth_line->setMaximum(50);
    ui->size_vertice->setMinimum(0);
    ui->size_vertice->setMaximum(50);
}

MainWindow::~MainWindow()
{
    delete ui;
}

//void MainWindow::on_reset_rotate_clicked()
//{
//    ui->rotate_bar->setValue(0);
//}

void MainWindow::on_open_file_clicked()
{
    filename = QFileDialog::getOpenFileName(this, tr("Open file"), "../../../../Exzample_obj", tr("OBJ Files (*.obj)"));
    if(filename.isEmpty()) {
        QMessageBox::warning(this, "ERRROR", "OOOOOOPSSS🙀");
        return;
    }

    std::string str = filename.toStdString();
    char *cstr = new char[str.length() + 1];
    strcpy(cstr, str.c_str());

    DataStr = parser(cstr);

    ui->openGLWidget->vertex_len= DataStr.countVertexes;
    ui->openGLWidget->facets_len = DataStr.countFacets * 2;
    ui->openGLWidget->vertex_arr = DataStr.dataVertexes;
    ui->openGLWidget->facets_arr = DataStr.dataFacets;
    ui->openGLWidget->minVerX = DataStr.minVertexesX;
    ui->openGLWidget->maxVerX = DataStr.maxVertexesX;
    ui->openGLWidget->minVerY = DataStr.minVertexesY;
    ui->openGLWidget->maxVerY = DataStr.maxVertexesY;
    ui->openGLWidget->minVerZ = DataStr.minVertexesZ;
    ui->openGLWidget->maxVerZ = DataStr.maxVertexesZ;
}

// сдвиги
void MainWindow::on_up_down_bar_valueChanged(int value)
{
    ui->up_down_int->setText(QString::number(value));
}

void MainWindow::on_up_down_int_textChanged(const QString &arg1)
{
    int c = arg1.toInt();
    ui->up_down_bar->setValue(c);
    double i = arg1.toDouble();
    move_arr[1] = i - move_arr_buff[1];
    moving_form();
    move_arr_buff[1] = i;
}

void MainWindow::on_reset_up_down_clicked()
{
    ui->up_down_bar->setValue(0);
    res_move[1] = 1;
    reset_move_by_axis(&DataStr, res_move);
}

void MainWindow::on_left_right_bar_valueChanged(int value)
{
    ui->left_right_int->setText(QString::number(value));
}

void MainWindow::on_left_right_int_textChanged(const QString &arg1)
{
    int d = arg1.toInt();
    ui->left_right_bar->setValue(d);
    double i = arg1.toDouble();
    move_arr[0] = i - move_arr_buff[0];
    moving_form();
    move_arr_buff[0] = i;
}

void MainWindow::on_reset_left_r_clicked()
{
    ui->left_right_bar->setValue(0);
    res_move[0] = 1;
    reset_move_by_axis(&DataStr, res_move);
}

void MainWindow::on_front_back_bar_valueChanged(int value)
{
   ui->back_front_int->setText(QString::number(value));
}

void MainWindow::on_back_front_int_textChanged(const QString &arg1)
{
    int d = arg1.toInt();
    ui->front_back_bar->setValue(d);
    double i = arg1.toDouble();
    move_arr[2] = i - move_arr_buff[2];
    moving_form();
    move_arr_buff[2] = i;
}

void MainWindow::on_reset_front_back_clicked()
{
    ui->front_back_bar->setValue(0);
    res_move[2] = 1;
    reset_move_by_axis(&DataStr, res_move);
}

void MainWindow::moving_form()
{
    move_arr[0] =  move_arr[0] / 100;
    move_arr[1] =  move_arr[1] / 100;
    move_arr[2] =  move_arr[2] / 100;

    move_form(&DataStr, move_arr);

    ui->openGLWidget->update();
}

// rotate bar
void MainWindow::on_rotate_bar_right_left_valueChanged(int value)
{
    ui->rotate_right_left_int->setText(QString::number(value));
}

void MainWindow::on_rotate_right_left_int_textChanged(const QString &arg1)
{
    int d = arg1.toInt();
    ui->rotate_bar_right_left->setValue(d);
    double i = arg1.toDouble();
    rotate_arr[0] = i - rotate_arr_buff[0];
    rotating_form();
    rotate_arr_buff[0] = i;
}

void MainWindow::on_reset_rotate_right_left_clicked()
{
    ui->rotate_bar_right_left->setValue(0);
}

void MainWindow::on_rotate_bar_up_down_valueChanged(int value)
{
    ui->rotate_up_down_int->setText(QString::number(value));
}

void MainWindow::on_rotate_up_down_int_textChanged(const QString &arg1)
{
    int d = arg1.toInt();
    ui->rotate_bar_up_down->setValue(d);
    double i = arg1.toDouble();
    rotate_arr[1] = i - rotate_arr_buff[1];
    rotating_form();
    rotate_arr_buff[1] = i;
}

void MainWindow::on_reset_rotate_2_clicked()
{
    ui->rotate_bar_up_down->setValue(0);
}

void MainWindow::on_rotate_bar_front_back_valueChanged(int value)
{
    ui->rotate_back_front_int->setText(QString::number(value));
}

void MainWindow::on_rotate_back_front_int_textChanged(const QString &arg1)
{
    int d = arg1.toInt();
    ui->rotate_bar_front_back->setValue(d);
    rotate_arr[2] = d - rotate_arr_buff[2];
    rotating_form();
    rotate_arr_buff[2] = d;
}

void MainWindow::on_reset_rotate_3_clicked()
{
    ui->rotate_bar_front_back->setValue(0);
}

void MainWindow::rotating_form()
{
    rotate_arr[0] =  rotate_arr[0] / 10;
    rotate_arr[1] =  rotate_arr[1] / 10;
    rotate_arr[2] =  rotate_arr[2] / 10;

    rotate_form(&DataStr, rotate_arr);

    ui->openGLWidget->update();
}

void MainWindow::on_zoom_bar_valueChanged(int value)
{
    ui->zoom_int->setText(QString::number(value));
}

void MainWindow::on_zoom_int_textChanged(const QString &arg1)
{
    int a = arg1.toInt();
    ui->zoom_bar->setValue(a);
    double z = arg1.toDouble();
    zoom_form(z);
    zoom_buff = z;
}

void MainWindow::on_resetzoom_clicked()
{
    ui->zoom_bar->setValue(0);
}

void MainWindow::zoom_form(double c)
{
    if (c > zoom_buff) {
        resize_form_less(&DataStr, zoom);
    } else {
        resize_form_more(&DataStr, zoom);
    }
    ui->openGLWidget->update();
}

void MainWindow::on_background_clicked()
{
    QColor ColorValue = QColorDialog::getColor(Qt::gray,this, tr("Select color"));
    qDebug() << ColorValue;
    QPalette p = ui->openGLWidget->palette();
    p.setColor(QPalette::Base,ColorValue);
    ui->openGLWidget->setAutoFillBackground(true);
    ui->openGLWidget->setPalette(p);
    ui->openGLWidget->show();
}

void MainWindow::on_wigth_line_valueChanged(int value)
{
    ui->wigthline_int->setText(QString::number(value));
}

void MainWindow::on_reset_widthline_clicked()
{
    ui->wigth_line->setValue(0);
}

void MainWindow::on_wigthline_int_textChanged(const QString &arg1)
{
    int e = arg1.toInt();
    ui->wigth_line->setValue(e);
}
