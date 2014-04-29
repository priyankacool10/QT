#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "myline.h"
#include "mycircle.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_draw_line_clicked();

    void on_draw_circle_clicked();

private:
    Ui::MainWindow *ui;
    MyLine *line;
    MyCircle *circle;
};

#endif // MAINWINDOW_H
