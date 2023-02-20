#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <cstdint>
#include <iostream>
#include <string>
#include <vector>
#include <QMouseEvent>

extern "C" {
#include "../../../main.h"
}

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QString filename = NULL;
    dataStruct DataStr;
    double move_arr[3] = {0,0,0};
    double rotate_arr[3] = {0,0,0};
    double move_arr_buff[3] = {0,0,0};
    double rotate_arr_buff[3] = {0,0,0};
    double zoom = 0.955;
    double zoom_buff = 0.0;
    int res_move[3] = {0,0,0};

private slots:
    void on_open_file_clicked();
    // сдвиги
    void on_up_down_bar_valueChanged(int value);
    void on_up_down_int_textChanged(const QString &arg1);
    void on_reset_up_down_clicked();
    void on_left_right_bar_valueChanged(int value);
    void on_left_right_int_textChanged(const QString &arg1);
    void on_reset_left_r_clicked();
    void on_front_back_bar_valueChanged(int value);
    void on_back_front_int_textChanged(const QString &arg1);
    void on_reset_front_back_clicked();
    void moving_form();

    // повороты
    void on_rotate_bar_right_left_valueChanged(int value);
    void on_rotate_right_left_int_textChanged(const QString &arg1);
    void on_reset_rotate_right_left_clicked();
    void on_rotate_bar_up_down_valueChanged(int value);
    void on_rotate_up_down_int_textChanged(const QString &arg1);
    void on_reset_rotate_2_clicked();
    void on_rotate_bar_front_back_valueChanged(int value);
    void on_rotate_back_front_int_textChanged(const QString &arg1);
    void on_reset_rotate_3_clicked();
    void rotating_form();

    // увеличение/уменьшение
    void on_zoom_bar_valueChanged(int value);
    void on_zoom_int_textChanged(const QString &arg1);
    void on_resetzoom_clicked();
    void zoom_form(double buff);

    void on_background_clicked();
    void on_wigth_line_valueChanged(int value);
    void on_reset_widthline_clicked();

    //    void on_size_vertice_valueChanged(int value);
    //    void on_sizevertice_int_textChanged(const QString &arg1);
    //    void on_reset_sizevertice_clicked();

    void on_wigthline_int_textChanged(const QString &arg1);

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
