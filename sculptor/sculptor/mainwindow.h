#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    /**
     * @brief Classe MainWindow
     * @details Essa classe é responsável por criar a janela principal do programa, onde é possível desenhar a escultura.
     * @details A classe MainWindow é responsável por criar a janela principal do programa, onde é possível desenhar a escultura.
     * q_object é uma macro que é usada para declarar uma classe como um objeto Qt.
    */
    Q_OBJECT

public:
    /**
     * @brief Construtor da classe MainWindow
     * @param parent
     * @details O construtor da classe MainWindow é responsável por criar a janela principal do programa, onde é possível desenhar a escultura.
     * ~MainWindow é o destrutor da classe MainWindow
    */
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:

/**
 * @details Grid é um método que é responsável por criar a grade da escultura.
 * @details setypePutVoxel() e setTypeCutVoxel() são métodos que definem o tipo de forma a ser desenhada.
 * @details setTypePutSphere() e setTypeCutSphere() são métodos que definem o tipo de forma a ser desenhada.
 * @details setTypePutEllipsoid() e setTypeCutEllipsoid() são métodos que definem o tipo de forma a ser desenhada.
 * @details setTypePutBox() e setTypeCutBox() são métodos que definem o tipo de forma a ser desenhada.
 * @details sair() é um método que é responsável por fechar o programa.
 * 
*/
    void sair();
    void setGrid();

    void setTypePutVoxel();
    void setTypeCutVoxel();
    void setTypePutSphere();
    void setTypeCutSphere();
    void setTypePutEllipsoid();
    void setTypeCutEllipsoid();
    void setTypePutBox();
    void setTypeCutBox();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
