#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QtCore/QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // connect the button with the respective function
    connect(ui->crashButton, &QPushButton::clicked, this, &MainWindow::slotCrashButtonClicked);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::slotCrashButtonClicked()
{
    qDebug() << __FUNCTION__; //todom remove

    //! TODO produce a crash
    //int a = 10 / (int)0;
}
