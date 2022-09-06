#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QSound>
#include <QMultimedia>
#include <QMediaPlayer>
#include <QMediaPlaylist>
#include <QTimer>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;


}

//megadom a hangokat
QSound C(":/Keys/C3.wav");
QSound D(":/Keys/D3.wav");
QSound E(":/Keys/E3.wav");
QSound F(":/Keys/F3.wav");
QSound G(":/Keys/G3.wav");
QSound A(":/Keys/A3.wav");
QSound B(":/Keys/B3.wav");

QSound C_2(":/Keys/C5.wav");
QSound D_2(":/Keys/D5.wav");
QSound E_2(":/Keys/E5.wav");
QSound F_2(":/Keys/F5.wav");
QSound G_2(":/Keys/G5.wav");

QSound C_fent(":/Keys/C4.wav");
QSound D_fent(":/Keys/D4.wav");

QSound F_fent(":/Keys/F4.wav");
QSound G_fent(":/Keys/G4.wav");
QSound A_fent(":/Keys/A4.wav");

QSound C_2_fent(":/Keys/C5.wav");
QSound D_2_fent(":/Keys/D5.wav");

QSound F_2_fent(":/Keys/F5.wav");

//lejátszás kattintásra
void MainWindow::on_C_clicked()
{
    C.play();
}

void MainWindow::on_D_clicked()
{
    D.play();
}

void MainWindow::on_E_clicked()
{
    E.play();
}

void MainWindow::on_F_clicked()
{
    F.play();
}

void MainWindow::on_G_clicked()
{
    G.play();
}

void MainWindow::on_A_clicked()
{
    A.play();
}

void MainWindow::on_B_clicked()
{
    B.play();
}

void MainWindow::on_C_2_clicked()
{
    C_2.play();
}

void MainWindow::on_D_2_clicked()
{
    D_2.play();
}

void MainWindow::on_E_2_clicked()
{
    E_2.play();
}

void MainWindow::on_F_2_clicked()
{
    F_2.play();
}

void MainWindow::on_G_2_clicked()
{
    G_2.play();
}

void MainWindow::on_Cs_clicked()
{
    C_fent.play();
}

void MainWindow::on_Ds_clicked()
{
    D_fent.play();
}

void MainWindow::on_Fs_clicked()
{
    F_fent.play();
}

void MainWindow::on_Gs_clicked()
{
    G_fent.play();
}

void MainWindow::on_As_clicked()
{
    A_fent.play();
}

void MainWindow::on_Cs_2_clicked()
{
    C_2_fent.play();
}

void MainWindow::on_Ds_2_clicked()
{
    D_2_fent.play();
}

void MainWindow::on_Fs_2_clicked()
{
    F_2_fent.play();
}

//létrehozok egy playert
QMediaPlayer *player;
//és egy playlistet
QMediaPlaylist *playlist;

//kattogás indítása és beállításai
void MainWindow::on_tickerON_clicked()
{

    //létrehozom a playert és a playlistet
    player = new QMediaPlayer(this);
    playlist = new QMediaPlaylist(this);
    //hozzáadom a playlisthez a kattogós hangot
    playlist->addMedia(QUrl("qrc:/Keys/high.mp3"));

    //beálláítom a lejátszási módot
    playlist->setPlaybackMode(QMediaPlaylist::Loop);
    //megadom melyikkel kezdődjön (de nekem csak 1 hang van, ezért 0)
    playlist->setCurrentIndex(0);
    //melyik lejátszási listát indítsa el a lejátszó
    player->setPlaylist(playlist);
    //elindítja a playert
    player->play();

}

//leállítani a kattogást
void MainWindow::on_tickerOFF_clicked()
{
    //leállítja a playert
    player->stop();
}
