#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // write connect function
    connect(ui->pushButton, SIGNAL(released()), this, SLOT (doSomething()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

// make a slot
void MainWindow::doSomething() {
    qInfo("HELLO WORLD");
}
