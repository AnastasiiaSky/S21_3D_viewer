#include "glwidget.h"

glwidget::glwidget(QWidget *parent)
    : QOpenGLWidget{parent}
{}
void glwidget::initializeGL() {
//    glLoadIdentity();
//    initializeOpenGLFunctions();
//    glMatrixMode(GL_MODELVIEW);
//    glEnable(GL_DEPTH_TEST);
//    glTranslatef(0,0,-3);
    }
void glwidget::resizeGL(int w, int h) {
    glViewport(0,0,w,h);
}
void glwidget::paintGL() {
    glClearColor(0,0,0,0); // цвет и др настройки
    glClear(GL_COLOR_BUFFER_BIT);
    glEnableClientState(GL_VERTEX_ARRAY); // включить состояние OpenGL
    glVertexPointer(3, GL_DOUBLE, 0, vertex_arr); // после создания массива вершин необходимо передать его в функцию, glVertexPointer(3, GL_DOUBLE, 0, vertex_array), где 3 - это количество координат на вершину, GL_DOUBLE - тип данных в массиве, 0 - расстояние между вершинами в массиве, в нашем случае означает, что вершины упакованы в массив без пробелов, и vertex_array - указатель на массив вершин
    glDrawElements(GL_LINES, facets_len, GL_UNSIGNED_INT, facets_arr); // glDrawElements(GL_LINES, edges_counter, GL_UNSIGNED_INT, indexes_array), edges_counter - по-сути размер массива индексов, третий аргумент тип данных который хранится у нас в массиве, и indexes_array - указатель на массив индексов.
    glDisableClientState(GL_VERTEX_ARRAY); // выключить состояние OpenGL всех отрисовок, glDisableClientState(GL_VERTEX_ARRAY)

    //придаем усиленное верчение коровы мышкой
    glRotatef(xRot, 1, 0, 0);
    glRotatef(yRot, 0, 1, 0);


//    m_player = new QMediaPlayer(this);
//    m_playlist = new QMediaPlaylist(m_player);

//    m_player->setPlaylist(m_player);
//    m_playlist->addMedia(QUrl("qrc:/"));
//    m_playlist-
}

void glwidget::mousePressEvent(QMouseEvent *mo) { mPos = mo->pos(); }

void glwidget::mouseMoveEvent(QMouseEvent *mo) {
  xRot = 0.1 / M_PI * (mo->pos().y() - mPos.y());
  yRot = 0.1 / M_PI * (mo->pos().x() - mPos.x());
  update();
}



