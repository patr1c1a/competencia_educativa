#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ptosEquipo1=0;
    ptosEquipo2=0;
    connect(timer, SIGNAL(timeout()), this, SLOT(actualizarEstado()));
    time.setHMS(0,1,0);
    ui->cronometro->setText(time.toString("m:ss"));
}


void MainWindow::actualizarCronometro(){
    time=time.addSecs(-1);
    ui->cronometro->setText(time.toString("m:ss"));
}


void MainWindow::actualizarEstado(){
    actualizarCronometro();
    msgBox.setStyleSheet(
    "msgBox {"
    " background-color: red;"
    " border-style: outset;"
    " border-width: 2px;"
    " border-radius: 10px;"
    " border-color: beige;"
    " font: bold 14px;"
    " min-width: 10em;"
    " padding: 6px;"
    "}");
    msgBox.setWindowTitle("¡SE TERMINÓ EL TIEMPO!");
    msgBox.setBaseSize(QSize(600, 120));
    msgBox.setIcon(QMessageBox::Critical);
    msgBox.setStandardButtons(QMessageBox::Ok);
    msgBox.setDefaultButton(QMessageBox::Ok);
    msgBox.setText("¡FIN DE LA RONDA!");
    if (time.toString()=="00:00:00"){
        detener();
        msgBox.exec();
    }
}


void MainWindow::on_equipo1_clicked()
{
    centralWidget()->setStyleSheet("#centralWidget {background-color: darkorange;}");
}


void MainWindow::on_equipo2_clicked()
{
    centralWidget()->setStyleSheet("#centralWidget {background-color: royalblue;}");
}

void MainWindow::on_empezar_clicked()
{
    if (!(timer->isActive())){
        iniciar();
    }
    else{
        detener();
    }
}


void MainWindow::iniciar(){
    time.setHMS(0,1,0);
    timer->start(1000);
    ui->empezar->setText("Detener");
}


void MainWindow::detener(){
    timer->stop();
    ui->empezar->setText("Empezar");
}

void MainWindow::on_incE1_clicked()
{
    ptosEquipo1++;
    ui->puntosE1->setText("puntos: " + QString::number(ptosEquipo1));
}

void MainWindow::on_decE1_clicked()
{
    ptosEquipo1--;
    ui->puntosE1->setText("puntos: " + QString::number(ptosEquipo1));
}

void MainWindow::on_incE2_clicked()
{
    ptosEquipo2++;
    ui->puntosE2->setText("puntos: " + QString::number(ptosEquipo2));
}

void MainWindow::on_decE2_clicked()
{
    ptosEquipo2--;
    ui->puntosE2->setText("puntos: " + QString::number(ptosEquipo2));
}


MainWindow::~MainWindow()
{
    delete ui;
}
