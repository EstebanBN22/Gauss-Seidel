#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    double a1;//declaration of variables
   double a2;
   double a3;
   double a4;
   double b1;
   double b2;
   double b3;
   double b4;
   double c1;
   double c2;
   double c3;
   double c4;
   double d1;
   double d2;
   double d3;
   double d4;
   double A;
   double B;
   double C;
   double D;
   double err;
   double errx1;
   double errx2;
   double errx3;
   double errx4;
   int it;
   double X1;
   double X2;
   double X3;
   double X4;
   double X1a;
   double X2a;
   double X3a;
   double X4a;

private:
    Ui::MainWindow *ui;

public slots://declaration possible actions
    void metodo();
    void borrar();

};

#endif // MAINWINDOW_H
