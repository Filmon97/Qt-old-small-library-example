#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "rubrica.h"

namespace Ui {
class Rubrica;
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_actionOpen_triggered();

    void on_actionInfo_triggered();

    void on_nomeEdit_returnPressed();

    void on_cognomeEdit_returnPressed();

    void on_actionSave_triggered();

    void on_actionRead_triggered();

    void on_actionNew_triggered();

private:
    Ui::MainWindow *ui;
    QString fileName;
    Rubrica agenda;
};

#endif // MAINWINDOW_H
