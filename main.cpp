#include "mainwindow.h"
#include <QApplication>

// needed for CrashRpt
//#include <stdio.h>
//#include <conio.h>
//#include <tchar.h>
#include <assert.h>
//#include <process.h>
#include <windows.h>
//#include <dbghelp.h>
#include "CrashRpt.h" // Include CrashRpt header

////for the shortest crashing program :)
//int main()
//{
//    main();
//}

int main(int argc, char *argv[])
{
    // Install crash reporting: taken from the ConsoleDemo.cpp of CrashRpt
    CR_INSTALL_INFO info;
    memset(&info, 0, sizeof(CR_INSTALL_INFO));
    info.cb = sizeof(CR_INSTALL_INFO);             // Size of the structure
    info.pszAppName = reinterpret_cast<LPCWSTR>("CrashRpt crashReportExampleProject Test"); // App name
    info.pszAppVersion = reinterpret_cast<LPCWSTR>("1.0.0");              // App version
    info.pszEmailSubject = reinterpret_cast<LPCWSTR>("CrashRpt crashReportExampleProject Test 1.0.0 Error Report"); // Email subject
    info.pszEmailTo = reinterpret_cast<LPCWSTR>("mail@marcelpetrick.it");      // Email recipient address

    // Install crash handlers
    int nInstResult = crInstall(&info);
    //assert(nInstResult==0);

//    // Check result
//    if(nInstResult!=0)
//    {
//        TCHAR buff[256];
//        crGetLastErrorMsg(buff, 256); // Get last error
//        _tprintf(_T("%s\n"), buff); // and output it to the screen
//        return FALSE;
//    }
    // end of copy-pasted code


    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
