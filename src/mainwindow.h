#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include <QTime>
#include <QMessageBox>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QTimer *timer=new QTimer();
    QTime time;
    int ptosEquipo1;
    int ptosEquipo2;
    QMessageBox msgBox;

private slots:
    void actualizarCronometro();
    void actualizarEstado();
    void iniciar();
    void detener();
    void on_equipo1_clicked();
    void on_equipo2_clicked();
    void on_empezar_clicked();
    void on_incE1_clicked();
    void on_decE1_clicked();
    void on_incE2_clicked();
    void on_decE2_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
