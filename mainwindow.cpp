#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(button()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::button()
{
    QString userName = "Ghazanfar";
    QString password = "12345678";
    int balance = 5000;

    QString enteredUserName = ui->lineEdit->text();
    QString enteredPassword = ui->lineEdit_2->text();
    QString amount = ui->lineEdit_3->text();
    int integerAmount = amount.toInt();

    if (userName == enteredUserName && password == enteredPassword){
        if (integerAmount > balance){
            QMessageBox::information(this, "Success Message", "User: "+userName+
                                               "\n"+"Amount: "+amount);
        }
    }
}

