#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QObject>
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void start();
    void stop();
    void setTickingValue(int val);
    void timerEvent();

private slots:
    void on_C_clicked();

    void on_D_clicked();

    void on_E_clicked();

    void on_F_clicked();

    void on_G_clicked();

    void on_A_clicked();

    void on_B_clicked();

    void on_C_2_clicked();

    void on_D_2_clicked();

    void on_E_2_clicked();

    void on_F_2_clicked();

    void on_G_2_clicked();

    void on_Cs_clicked();

    void on_Ds_clicked();

    void on_Fs_clicked();

    void on_Gs_clicked();

    void on_As_clicked();

    void on_Cs_2_clicked();

    void on_Ds_2_clicked();

    void on_Fs_2_clicked();

    void on_tickerON_clicked();

    void on_tickerOFF_clicked();

private:
    Ui::MainWindow *ui;

    QTimer *timer;
    int tickingValue;
    bool buttonClicked;
};
#endif // MAINWINDOW_H
