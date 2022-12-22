#include "mainwindow.h"

#include <QApplication>
/**
 * @brief main
 * @param argc
 * @param argv
 * @return
 * @details Essa é a Função principal do programa, onde é criado o objeto da classe QApplication
*/
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
