#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QSqlDatabase>
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

    void on_action_triggered();

    void on_action_2_triggered();

    void on_action_3_triggered();

    void on_action_4_triggered();

    void on_pushButton_clicked();

    void on_delBpt_clicked();

    void on_about_triggered();

    void on_help_triggered();


    void on_exit_triggered();

private:
    Ui::MainWindow *ui;
    QSqlDatabase db;
    int operation;
    void display_ISBN();
};

#endif // MAINWINDOW_H
