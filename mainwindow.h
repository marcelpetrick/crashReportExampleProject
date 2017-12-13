#pragma once

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

public slots:
    //! used to preapre a crash
    void slotCrashButtonClicked();

private:
    Ui::MainWindow *ui;
};
