#ifndef GLWIDGET_H
#define GLWIDGET_H
#define GL_SILENCE_DEPRECATION // подключили либу для вывода изображения

#include <QWidget>
#include <QOpenGLWidget>
#include <QMouseEvent>

//#include <QMediaPlayer>
//#include <QMediaPlaylist>
//#include <QtMultimedia/QMediaPlaylist>
//#include <QCoreApplication>
//#include <QUrl>

class glwidget : public QOpenGLWidget
{
    Q_OBJECT
public:
    int vertex_len;
    int facets_len;
    double* vertex_arr;
    int* facets_arr;
    double minVerX;
    double maxVerX;
    double minVerY;
    double maxVerY;
    double minVerZ;
    double maxVerZ;
    double MaxVert;
    double MinVert;

    explicit glwidget(QWidget *parent = nullptr);

private:
    float xRot, yRot, zRot;
    QPoint mPos;
    void mousePressEvent(QMouseEvent *) override;
    void mouseMoveEvent(QMouseEvent *) override;

//    QMediaPlayer * m_player;
//    QMediaPlaylist * m_playlist;

signals:
protected:
    void initializeGL();
    void resizeGL(int w, int h);
    void paintGL();
};

#endif // GLWIDGET_H
