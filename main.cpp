#include "mainwindow.h"
#include <QApplication>

////for the shortest crashing program :)
//int main()
//{
//    main();
//}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
