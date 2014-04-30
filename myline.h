#ifndef MYLINE_H
#define MYLINE_H

#include <QDialog>
#include <QGraphicsScene>

namespace Ui {
class MyLine;
}

class MyLine : public QDialog
{
    Q_OBJECT

public:
    explicit MyLine(QWidget *parent = 0);
    ~MyLine();
    //mousePressEvent(QMouseEvent);

private slots:
    void on_draw_line_clicked();
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);

private:
    Ui::MyLine *ui;
    QGraphicsScene *scene;
    int lastPointx;
    int lastPointy;
    bool scribbling;
    void drawLineTo(int x, int y);
};

#endif // MYLINE_H
