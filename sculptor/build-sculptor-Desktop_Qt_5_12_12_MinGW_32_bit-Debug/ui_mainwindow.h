/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "visaoxy.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionSair;
    QAction *actionsave;
    QAction *actionNew;
    QAction *actionPutV;
    QAction *actionCutV;
    QAction *actionPutBox;
    QAction *actionCutB;
    QAction *actionPutE;
    QAction *actionCutE;
    QAction *actionPutEs;
    QAction *actionCutEs;
    QWidget *centralwidget;
    VisaoXY *widget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_2;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout_9;
    QSlider *horizontalSliderDimYGrid;
    QSlider *horizontalSliderDimXGrid;
    QLCDNumber *lcdNumber_9;
    QLabel *label_3;
    QLCDNumber *lcdNumber_8;
    QLabel *label;
    QLabel *label_2;
    QLCDNumber *lcdNumber_7;
    QSlider *horizontalSliderDimZGrid;
    QGroupBox *groupBoxRaio;
    QWidget *layoutWidget2;
    QGridLayout *gridLayout_6;
    QLCDNumber *lcdNumberRaio;
    QSlider *horizontalSliderRaio;
    QGroupBox *groupBoxElipse;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout;
    QLabel *labelRz;
    QSlider *horizontalSliderRX;
    QSlider *horizontalSliderRY;
    QLCDNumber *lcdNumber_6;
    QSlider *horizontalSliderRZ;
    QLabel *labelRx;
    QLCDNumber *lcdNumber_5;
    QLabel *labelRy;
    QLCDNumber *lcdNumber_4;
    QGroupBox *groupBoxCaixa;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout_5;
    QLCDNumber *lcdNumber_3;
    QLabel *labelDimY;
    QLabel *labelDimZ;
    QSlider *horizontalSliderDimZ;
    QLCDNumber *lcdNumber_2;
    QSlider *horizontalSliderDimY;
    QLCDNumber *lcdNumber;
    QLabel *labelDimx;
    QSlider *horizontalSliderDimX;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *groupBoxCoordenadas;
    QWidget *layoutWidget4;
    QGridLayout *gridLayout_7;
    QSlider *horizontalSliderZ;
    QLabel *labelZ;
    QLCDNumber *lcdNumberZ;
    QGroupBox *groupBox;
    QWidget *layoutWidget5;
    QGridLayout *gridLayout_8;
    QSlider *horizontalSliderG;
    QLCDNumber *lcdNumberB;
    QLabel *labelB;
    QLCDNumber *lcdNumberG;
    QSlider *horizontalSliderB;
    QLabel *labelG;
    QLCDNumber *lcdNumberR;
    QLabel *labelR;
    QSlider *horizontalSliderR;
    QWidget *layoutWidget6;
    QGridLayout *gridLayout_4;
    QPushButton *pushButtonNew;
    QPushButton *pushButtonSave;
    QPushButton *pushButtonPutSphere;
    QPushButton *pushButtonPutVoxel;
    QPushButton *pushButtonCutBox;
    QPushButton *pushButtonCutEllipsoid;
    QPushButton *pushButtonCutSphere;
    QPushButton *pushButtonCutVoxel;
    QPushButton *pushButtonPutEllipsoid;
    QPushButton *pushButtonPutBox;
    QWidget *layoutWidget7;
    QHBoxLayout *horizontalLayout_3;
    QWidget *layoutWidget8;
    QHBoxLayout *horizontalLayout_4;
    QLabel *LT;
    QMenuBar *menubar;
    QMenu *menuArquivo;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(845, 666);
        MainWindow->setStyleSheet(QString::fromUtf8("MainWindow{\n"
"	background-color:#808080;\n"
"}\n"
"\n"
"\n"
"#pushButtonNew{\n"
"	background-color:#008;\n"
"	color:#fff;\n"
"	border-radius:10px;\n"
"	width: ;\n"
"	border:#fff;\n"
"}"));
        actionSair = new QAction(MainWindow);
        actionSair->setObjectName(QString::fromUtf8("actionSair"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icones/recursos/voxel.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSair->setIcon(icon);
        actionsave = new QAction(MainWindow);
        actionsave->setObjectName(QString::fromUtf8("actionsave"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icones/recursos/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionsave->setIcon(icon1);
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icones/recursos/new.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon2);
        actionPutV = new QAction(MainWindow);
        actionPutV->setObjectName(QString::fromUtf8("actionPutV"));
        actionPutV->setIcon(icon);
        actionCutV = new QAction(MainWindow);
        actionCutV->setObjectName(QString::fromUtf8("actionCutV"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icones/recursos/cutvoxel.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCutV->setIcon(icon3);
        actionPutBox = new QAction(MainWindow);
        actionPutBox->setObjectName(QString::fromUtf8("actionPutBox"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icones/recursos/putbox.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPutBox->setIcon(icon4);
        actionCutB = new QAction(MainWindow);
        actionCutB->setObjectName(QString::fromUtf8("actionCutB"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icones/recursos/cutbox.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCutB->setIcon(icon5);
        actionPutE = new QAction(MainWindow);
        actionPutE->setObjectName(QString::fromUtf8("actionPutE"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/icones/recursos/putEllipse.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPutE->setIcon(icon6);
        actionCutE = new QAction(MainWindow);
        actionCutE->setObjectName(QString::fromUtf8("actionCutE"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/icones/recursos/cutEllipse.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCutE->setIcon(icon7);
        actionPutEs = new QAction(MainWindow);
        actionPutEs->setObjectName(QString::fromUtf8("actionPutEs"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/icones/recursos/putcircle.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPutEs->setIcon(icon8);
        actionCutEs = new QAction(MainWindow);
        actionCutEs->setObjectName(QString::fromUtf8("actionCutEs"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/icones/recursos/cutcircle.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCutEs->setIcon(icon9);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        widget = new VisaoXY(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(100, 140, 331, 331));
        widget->setStyleSheet(QString::fromUtf8("#pushButtonSave{\n"
"	background-color:144;\n"
"	color:#fff;\n"
"	border-radius:10px;\n"
"	border:#fff;\n"
"}"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(530, 30, 261, 471));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        groupBox_2 = new QGroupBox(layoutWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        layoutWidget1 = new QWidget(groupBox_2);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 20, 241, 85));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout_9 = new QGridLayout();
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        horizontalSliderDimYGrid = new QSlider(layoutWidget1);
        horizontalSliderDimYGrid->setObjectName(QString::fromUtf8("horizontalSliderDimYGrid"));
        horizontalSliderDimYGrid->setMinimum(5);
        horizontalSliderDimYGrid->setMaximum(30);
        horizontalSliderDimYGrid->setOrientation(Qt::Horizontal);

        gridLayout_9->addWidget(horizontalSliderDimYGrid, 1, 1, 1, 1);

        horizontalSliderDimXGrid = new QSlider(layoutWidget1);
        horizontalSliderDimXGrid->setObjectName(QString::fromUtf8("horizontalSliderDimXGrid"));
        horizontalSliderDimXGrid->setMinimum(5);
        horizontalSliderDimXGrid->setMaximum(30);
        horizontalSliderDimXGrid->setOrientation(Qt::Horizontal);

        gridLayout_9->addWidget(horizontalSliderDimXGrid, 0, 1, 1, 1);

        lcdNumber_9 = new QLCDNumber(layoutWidget1);
        lcdNumber_9->setObjectName(QString::fromUtf8("lcdNumber_9"));

        gridLayout_9->addWidget(lcdNumber_9, 2, 2, 1, 1);

        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_9->addWidget(label_3, 2, 0, 1, 1);

        lcdNumber_8 = new QLCDNumber(layoutWidget1);
        lcdNumber_8->setObjectName(QString::fromUtf8("lcdNumber_8"));

        gridLayout_9->addWidget(lcdNumber_8, 1, 2, 1, 1);

        label = new QLabel(layoutWidget1);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_9->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_9->addWidget(label_2, 1, 0, 1, 1);

        lcdNumber_7 = new QLCDNumber(layoutWidget1);
        lcdNumber_7->setObjectName(QString::fromUtf8("lcdNumber_7"));

        gridLayout_9->addWidget(lcdNumber_7, 0, 2, 1, 1);

        horizontalSliderDimZGrid = new QSlider(layoutWidget1);
        horizontalSliderDimZGrid->setObjectName(QString::fromUtf8("horizontalSliderDimZGrid"));
        horizontalSliderDimZGrid->setMinimum(5);
        horizontalSliderDimZGrid->setMaximum(30);
        horizontalSliderDimZGrid->setOrientation(Qt::Horizontal);

        gridLayout_9->addWidget(horizontalSliderDimZGrid, 2, 1, 1, 1);


        horizontalLayout->addLayout(gridLayout_9);


        verticalLayout_2->addWidget(groupBox_2);

        groupBoxRaio = new QGroupBox(layoutWidget);
        groupBoxRaio->setObjectName(QString::fromUtf8("groupBoxRaio"));
        groupBoxRaio->setLayoutDirection(Qt::RightToLeft);
        groupBoxRaio->setAlignment(Qt::AlignCenter);
        layoutWidget2 = new QWidget(groupBoxRaio);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(10, 20, 241, 25));
        gridLayout_6 = new QGridLayout(layoutWidget2);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        lcdNumberRaio = new QLCDNumber(layoutWidget2);
        lcdNumberRaio->setObjectName(QString::fromUtf8("lcdNumberRaio"));

        gridLayout_6->addWidget(lcdNumberRaio, 0, 1, 1, 1);

        horizontalSliderRaio = new QSlider(layoutWidget2);
        horizontalSliderRaio->setObjectName(QString::fromUtf8("horizontalSliderRaio"));
        horizontalSliderRaio->setMaximum(15);
        horizontalSliderRaio->setOrientation(Qt::Horizontal);

        gridLayout_6->addWidget(horizontalSliderRaio, 0, 2, 1, 1);


        verticalLayout_2->addWidget(groupBoxRaio);

        groupBoxElipse = new QGroupBox(layoutWidget);
        groupBoxElipse->setObjectName(QString::fromUtf8("groupBoxElipse"));
        groupBoxElipse->setAlignment(Qt::AlignCenter);
        gridLayout_3 = new QGridLayout(groupBoxElipse);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        labelRz = new QLabel(groupBoxElipse);
        labelRz->setObjectName(QString::fromUtf8("labelRz"));
        labelRz->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(labelRz, 2, 0, 1, 1);

        horizontalSliderRX = new QSlider(groupBoxElipse);
        horizontalSliderRX->setObjectName(QString::fromUtf8("horizontalSliderRX"));
        horizontalSliderRX->setMaximum(15);
        horizontalSliderRX->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSliderRX, 0, 1, 1, 1);

        horizontalSliderRY = new QSlider(groupBoxElipse);
        horizontalSliderRY->setObjectName(QString::fromUtf8("horizontalSliderRY"));
        horizontalSliderRY->setMaximum(15);
        horizontalSliderRY->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSliderRY, 1, 1, 1, 1);

        lcdNumber_6 = new QLCDNumber(groupBoxElipse);
        lcdNumber_6->setObjectName(QString::fromUtf8("lcdNumber_6"));

        gridLayout->addWidget(lcdNumber_6, 2, 2, 1, 1);

        horizontalSliderRZ = new QSlider(groupBoxElipse);
        horizontalSliderRZ->setObjectName(QString::fromUtf8("horizontalSliderRZ"));
        horizontalSliderRZ->setMaximum(15);
        horizontalSliderRZ->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSliderRZ, 2, 1, 1, 1);

        labelRx = new QLabel(groupBoxElipse);
        labelRx->setObjectName(QString::fromUtf8("labelRx"));
        labelRx->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(labelRx, 0, 0, 1, 1);

        lcdNumber_5 = new QLCDNumber(groupBoxElipse);
        lcdNumber_5->setObjectName(QString::fromUtf8("lcdNumber_5"));

        gridLayout->addWidget(lcdNumber_5, 1, 2, 1, 1);

        labelRy = new QLabel(groupBoxElipse);
        labelRy->setObjectName(QString::fromUtf8("labelRy"));
        labelRy->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(labelRy, 1, 0, 1, 1);

        lcdNumber_4 = new QLCDNumber(groupBoxElipse);
        lcdNumber_4->setObjectName(QString::fromUtf8("lcdNumber_4"));

        gridLayout->addWidget(lcdNumber_4, 0, 2, 1, 1);


        gridLayout_3->addLayout(gridLayout, 0, 0, 1, 1);


        verticalLayout_2->addWidget(groupBoxElipse);

        groupBoxCaixa = new QGroupBox(layoutWidget);
        groupBoxCaixa->setObjectName(QString::fromUtf8("groupBoxCaixa"));
        groupBoxCaixa->setAlignment(Qt::AlignCenter);
        gridLayout_2 = new QGridLayout(groupBoxCaixa);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        lcdNumber_3 = new QLCDNumber(groupBoxCaixa);
        lcdNumber_3->setObjectName(QString::fromUtf8("lcdNumber_3"));

        gridLayout_5->addWidget(lcdNumber_3, 1, 2, 1, 1);

        labelDimY = new QLabel(groupBoxCaixa);
        labelDimY->setObjectName(QString::fromUtf8("labelDimY"));
        labelDimY->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(labelDimY, 1, 0, 1, 1);

        labelDimZ = new QLabel(groupBoxCaixa);
        labelDimZ->setObjectName(QString::fromUtf8("labelDimZ"));
        labelDimZ->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(labelDimZ, 2, 0, 1, 1);

        horizontalSliderDimZ = new QSlider(groupBoxCaixa);
        horizontalSliderDimZ->setObjectName(QString::fromUtf8("horizontalSliderDimZ"));
        horizontalSliderDimZ->setMaximum(30);
        horizontalSliderDimZ->setOrientation(Qt::Horizontal);

        gridLayout_5->addWidget(horizontalSliderDimZ, 2, 1, 1, 1);

        lcdNumber_2 = new QLCDNumber(groupBoxCaixa);
        lcdNumber_2->setObjectName(QString::fromUtf8("lcdNumber_2"));

        gridLayout_5->addWidget(lcdNumber_2, 2, 2, 1, 1);

        horizontalSliderDimY = new QSlider(groupBoxCaixa);
        horizontalSliderDimY->setObjectName(QString::fromUtf8("horizontalSliderDimY"));
        horizontalSliderDimY->setMaximum(30);
        horizontalSliderDimY->setOrientation(Qt::Horizontal);

        gridLayout_5->addWidget(horizontalSliderDimY, 1, 1, 1, 1);

        lcdNumber = new QLCDNumber(groupBoxCaixa);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));

        gridLayout_5->addWidget(lcdNumber, 0, 2, 1, 1);

        labelDimx = new QLabel(groupBoxCaixa);
        labelDimx->setObjectName(QString::fromUtf8("labelDimx"));
        labelDimx->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(labelDimx, 0, 0, 1, 1);

        horizontalSliderDimX = new QSlider(groupBoxCaixa);
        horizontalSliderDimX->setObjectName(QString::fromUtf8("horizontalSliderDimX"));
        horizontalSliderDimX->setMaximum(30);
        horizontalSliderDimX->setOrientation(Qt::Horizontal);

        gridLayout_5->addWidget(horizontalSliderDimX, 0, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout_5, 0, 0, 1, 1);


        verticalLayout_2->addWidget(groupBoxCaixa);

        layoutWidget3 = new QWidget(centralwidget);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(10, 510, 781, 111));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        groupBoxCoordenadas = new QGroupBox(layoutWidget3);
        groupBoxCoordenadas->setObjectName(QString::fromUtf8("groupBoxCoordenadas"));
        groupBoxCoordenadas->setAlignment(Qt::AlignCenter);
        layoutWidget4 = new QWidget(groupBoxCoordenadas);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(30, 20, 341, 81));
        gridLayout_7 = new QGridLayout(layoutWidget4);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_7->setContentsMargins(0, 0, 0, 0);
        horizontalSliderZ = new QSlider(layoutWidget4);
        horizontalSliderZ->setObjectName(QString::fromUtf8("horizontalSliderZ"));
        horizontalSliderZ->setMaximum(29);
        horizontalSliderZ->setOrientation(Qt::Horizontal);

        gridLayout_7->addWidget(horizontalSliderZ, 0, 1, 1, 1);

        labelZ = new QLabel(layoutWidget4);
        labelZ->setObjectName(QString::fromUtf8("labelZ"));
        labelZ->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(labelZ, 0, 0, 1, 1);

        lcdNumberZ = new QLCDNumber(layoutWidget4);
        lcdNumberZ->setObjectName(QString::fromUtf8("lcdNumberZ"));

        gridLayout_7->addWidget(lcdNumberZ, 0, 2, 1, 1);


        horizontalLayout_2->addWidget(groupBoxCoordenadas);

        groupBox = new QGroupBox(layoutWidget3);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setAlignment(Qt::AlignCenter);
        layoutWidget5 = new QWidget(groupBox);
        layoutWidget5->setObjectName(QString::fromUtf8("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(20, 20, 351, 83));
        gridLayout_8 = new QGridLayout(layoutWidget5);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        gridLayout_8->setContentsMargins(0, 0, 0, 0);
        horizontalSliderG = new QSlider(layoutWidget5);
        horizontalSliderG->setObjectName(QString::fromUtf8("horizontalSliderG"));
        horizontalSliderG->setMinimum(1);
        horizontalSliderG->setMaximum(255);
        horizontalSliderG->setOrientation(Qt::Horizontal);

        gridLayout_8->addWidget(horizontalSliderG, 1, 1, 1, 1);

        lcdNumberB = new QLCDNumber(layoutWidget5);
        lcdNumberB->setObjectName(QString::fromUtf8("lcdNumberB"));

        gridLayout_8->addWidget(lcdNumberB, 2, 2, 1, 1);

        labelB = new QLabel(layoutWidget5);
        labelB->setObjectName(QString::fromUtf8("labelB"));
        labelB->setAlignment(Qt::AlignCenter);

        gridLayout_8->addWidget(labelB, 2, 0, 1, 1);

        lcdNumberG = new QLCDNumber(layoutWidget5);
        lcdNumberG->setObjectName(QString::fromUtf8("lcdNumberG"));

        gridLayout_8->addWidget(lcdNumberG, 1, 2, 1, 1);

        horizontalSliderB = new QSlider(layoutWidget5);
        horizontalSliderB->setObjectName(QString::fromUtf8("horizontalSliderB"));
        horizontalSliderB->setMinimum(1);
        horizontalSliderB->setMaximum(255);
        horizontalSliderB->setOrientation(Qt::Horizontal);

        gridLayout_8->addWidget(horizontalSliderB, 2, 1, 1, 1);

        labelG = new QLabel(layoutWidget5);
        labelG->setObjectName(QString::fromUtf8("labelG"));
        labelG->setAlignment(Qt::AlignCenter);

        gridLayout_8->addWidget(labelG, 1, 0, 1, 1);

        lcdNumberR = new QLCDNumber(layoutWidget5);
        lcdNumberR->setObjectName(QString::fromUtf8("lcdNumberR"));

        gridLayout_8->addWidget(lcdNumberR, 0, 2, 1, 1);

        labelR = new QLabel(layoutWidget5);
        labelR->setObjectName(QString::fromUtf8("labelR"));
        labelR->setAlignment(Qt::AlignCenter);

        gridLayout_8->addWidget(labelR, 0, 0, 1, 1);

        horizontalSliderR = new QSlider(layoutWidget5);
        horizontalSliderR->setObjectName(QString::fromUtf8("horizontalSliderR"));
        horizontalSliderR->setMinimum(1);
        horizontalSliderR->setMaximum(255);
        horizontalSliderR->setOrientation(Qt::Horizontal);

        gridLayout_8->addWidget(horizontalSliderR, 0, 1, 1, 1);


        horizontalLayout_2->addWidget(groupBox);

        layoutWidget6 = new QWidget(centralwidget);
        layoutWidget6->setObjectName(QString::fromUtf8("layoutWidget6"));
        layoutWidget6->setGeometry(QRect(10, 50, 501, 71));
        QFont font;
        font.setFamily(QString::fromUtf8("Gill Sans MT"));
        layoutWidget6->setFont(font);
        gridLayout_4 = new QGridLayout(layoutWidget6);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        pushButtonNew = new QPushButton(layoutWidget6);
        pushButtonNew->setObjectName(QString::fromUtf8("pushButtonNew"));
        pushButtonNew->setEnabled(true);
        pushButtonNew->setFont(font);
        pushButtonNew->setStyleSheet(QString::fromUtf8("\n"
"#pushButtonSave{\n"
"	background-color:#008;\n"
"	color:#fff;\n"
"	border-radius:15px;\n"
"}"));
        pushButtonNew->setIconSize(QSize(20, 20));

        gridLayout_4->addWidget(pushButtonNew, 0, 0, 1, 1);

        pushButtonSave = new QPushButton(layoutWidget6);
        pushButtonSave->setObjectName(QString::fromUtf8("pushButtonSave"));
        pushButtonSave->setFont(font);
        pushButtonSave->setStyleSheet(QString::fromUtf8("\n"
"#pushButtonSave{\n"
"	background-color:#008;\n"
"	color:#fff;\n"
"	border-radius:15px;\n"
"}"));

        gridLayout_4->addWidget(pushButtonSave, 1, 0, 1, 1);

        pushButtonPutSphere = new QPushButton(layoutWidget6);
        pushButtonPutSphere->setObjectName(QString::fromUtf8("pushButtonPutSphere"));
        pushButtonPutSphere->setFont(font);
        pushButtonPutSphere->setStyleSheet(QString::fromUtf8("#pushButtonPutSphere{\n"
"	background-color:#008;\n"
"	color:#fff;\n"
"	border-radius:10px;\n"
"	border:#fff;\n"
"}"));

        gridLayout_4->addWidget(pushButtonPutSphere, 0, 4, 1, 1);

        pushButtonPutVoxel = new QPushButton(layoutWidget6);
        pushButtonPutVoxel->setObjectName(QString::fromUtf8("pushButtonPutVoxel"));
        pushButtonPutVoxel->setFont(font);
        pushButtonPutVoxel->setStyleSheet(QString::fromUtf8("#pushButtonPutVoxel{\n"
"	background-color:#008;\n"
"	color:#fff;\n"
"	border-radius:10px;\n"
"	border:#fff;\n"
"}"));

        gridLayout_4->addWidget(pushButtonPutVoxel, 0, 1, 1, 1);

        pushButtonCutBox = new QPushButton(layoutWidget6);
        pushButtonCutBox->setObjectName(QString::fromUtf8("pushButtonCutBox"));
        pushButtonCutBox->setFont(font);
        pushButtonCutBox->setStyleSheet(QString::fromUtf8("\n"
"#pushButtonCutBox{\n"
"	background-color:#008;\n"
"	color:#fff;\n"
"	border-radius:10px;\n"
"	border:#fff;\n"
"}"));

        gridLayout_4->addWidget(pushButtonCutBox, 1, 2, 1, 1);

        pushButtonCutEllipsoid = new QPushButton(layoutWidget6);
        pushButtonCutEllipsoid->setObjectName(QString::fromUtf8("pushButtonCutEllipsoid"));
        pushButtonCutEllipsoid->setFont(font);
        pushButtonCutEllipsoid->setStyleSheet(QString::fromUtf8("#pushButtonCutEllipsoid{\n"
"	background-color:#008;\n"
"	color:#fff;\n"
"	border-radius:10px;\n"
"	border:#fff;\n"
"}"));

        gridLayout_4->addWidget(pushButtonCutEllipsoid, 1, 3, 1, 1);

        pushButtonCutSphere = new QPushButton(layoutWidget6);
        pushButtonCutSphere->setObjectName(QString::fromUtf8("pushButtonCutSphere"));
        pushButtonCutSphere->setFont(font);
        pushButtonCutSphere->setStyleSheet(QString::fromUtf8("#pushButtonCutSphere{\n"
"	background-color:#008;\n"
"	color:#fff;\n"
"	border-radius:10px;\n"
"	border:#fff;\n"
"}"));

        gridLayout_4->addWidget(pushButtonCutSphere, 1, 4, 1, 1);

        pushButtonCutVoxel = new QPushButton(layoutWidget6);
        pushButtonCutVoxel->setObjectName(QString::fromUtf8("pushButtonCutVoxel"));
        pushButtonCutVoxel->setFont(font);
        pushButtonCutVoxel->setStyleSheet(QString::fromUtf8("#pushButtonCutVoxel{\n"
"	background-color:#008;\n"
"	color:#fff;\n"
"	border-radius:10px;\n"
"	border:#fff;\n"
"}"));

        gridLayout_4->addWidget(pushButtonCutVoxel, 1, 1, 1, 1);

        pushButtonPutEllipsoid = new QPushButton(layoutWidget6);
        pushButtonPutEllipsoid->setObjectName(QString::fromUtf8("pushButtonPutEllipsoid"));
        pushButtonPutEllipsoid->setFont(font);
        pushButtonPutEllipsoid->setStyleSheet(QString::fromUtf8("#pushButtonPutEllipsoid{\n"
"	background-color:#008;\n"
"	color:#fff;\n"
"	border-radius:10px;\n"
"	border:#fff;\n"
"}"));

        gridLayout_4->addWidget(pushButtonPutEllipsoid, 0, 3, 1, 1);

        pushButtonPutBox = new QPushButton(layoutWidget6);
        pushButtonPutBox->setObjectName(QString::fromUtf8("pushButtonPutBox"));
        pushButtonPutBox->setFont(font);
        pushButtonPutBox->setStyleSheet(QString::fromUtf8("#pushButtonPutBox{\n"
"	background-color:#008;\n"
"	color:#fff;\n"
"	border-radius:10px;\n"
"	border:#fff;\n"
"}"));

        gridLayout_4->addWidget(pushButtonPutBox, 0, 2, 1, 1);

        layoutWidget7 = new QWidget(centralwidget);
        layoutWidget7->setObjectName(QString::fromUtf8("layoutWidget7"));
        layoutWidget7->setGeometry(QRect(0, 0, 2, 2));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget7);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        layoutWidget8 = new QWidget(centralwidget);
        layoutWidget8->setObjectName(QString::fromUtf8("layoutWidget8"));
        layoutWidget8->setGeometry(QRect(0, 0, 2, 2));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget8);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        LT = new QLabel(centralwidget);
        LT->setObjectName(QString::fromUtf8("LT"));
        LT->setGeometry(QRect(130, 0, 311, 41));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Microsoft YaHei UI Light"));
        LT->setFont(font1);
        LT->setStyleSheet(QString::fromUtf8("#LT{\n"
"	font-size:36px;\n"
"}"));
        LT->setAlignment(Qt::AlignCenter);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 845, 20));
        menuArquivo = new QMenu(menubar);
        menuArquivo->setObjectName(QString::fromUtf8("menuArquivo"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuArquivo->menuAction());
        menuArquivo->addSeparator();
        menuArquivo->addSeparator();
        menuArquivo->addSeparator();
        menuArquivo->addAction(actionSair);

        retranslateUi(MainWindow);
        QObject::connect(horizontalSliderR, SIGNAL(valueChanged(int)), lcdNumberR, SLOT(display(int)));
        QObject::connect(horizontalSliderG, SIGNAL(valueChanged(int)), lcdNumberG, SLOT(display(int)));
        QObject::connect(horizontalSliderB, SIGNAL(valueChanged(int)), lcdNumberB, SLOT(display(int)));
        QObject::connect(actionSair, SIGNAL(triggered()), MainWindow, SLOT(sair()));
        QObject::connect(horizontalSliderZ, SIGNAL(valueChanged(int)), lcdNumberZ, SLOT(display(int)));
        QObject::connect(horizontalSliderRZ, SIGNAL(valueChanged(int)), lcdNumber_6, SLOT(display(int)));
        QObject::connect(horizontalSliderRY, SIGNAL(valueChanged(int)), lcdNumber_5, SLOT(display(int)));
        QObject::connect(horizontalSliderRX, SIGNAL(valueChanged(int)), lcdNumber_4, SLOT(display(int)));
        QObject::connect(horizontalSliderDimY, SIGNAL(valueChanged(int)), lcdNumber_3, SLOT(display(int)));
        QObject::connect(horizontalSliderDimZ, SIGNAL(valueChanged(int)), lcdNumber_2, SLOT(display(int)));
        QObject::connect(horizontalSliderRaio, SIGNAL(valueChanged(int)), lcdNumberRaio, SLOT(display(int)));
        QObject::connect(horizontalSliderDimX, SIGNAL(valueChanged(int)), lcdNumber, SLOT(display(int)));
        QObject::connect(horizontalSliderDimXGrid, SIGNAL(valueChanged(int)), lcdNumber_7, SLOT(display(int)));
        QObject::connect(horizontalSliderDimYGrid, SIGNAL(valueChanged(int)), lcdNumber_8, SLOT(display(int)));
        QObject::connect(horizontalSliderDimZGrid, SIGNAL(valueChanged(int)), lcdNumber_9, SLOT(display(int)));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionSair->setText(QApplication::translate("MainWindow", "Sair", nullptr));
        actionsave->setText(QApplication::translate("MainWindow", "save", nullptr));
        actionNew->setText(QApplication::translate("MainWindow", "New", nullptr));
        actionPutV->setText(QApplication::translate("MainWindow", "PutV", nullptr));
        actionCutV->setText(QApplication::translate("MainWindow", "CutV", nullptr));
        actionPutBox->setText(QApplication::translate("MainWindow", "PutBox", nullptr));
        actionCutB->setText(QApplication::translate("MainWindow", "CutB", nullptr));
        actionPutE->setText(QApplication::translate("MainWindow", "PutE", nullptr));
        actionCutE->setText(QApplication::translate("MainWindow", "CutE", nullptr));
        actionPutEs->setText(QApplication::translate("MainWindow", "PutEs", nullptr));
        actionCutEs->setText(QApplication::translate("MainWindow", "CutEs", nullptr));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Dimen\303\247\303\265es do grid", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "  Z  ", nullptr));
        label->setText(QApplication::translate("MainWindow", "  X ", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "  Y  ", nullptr));
        groupBoxRaio->setTitle(QApplication::translate("MainWindow", "Raio ", nullptr));
        groupBoxElipse->setTitle(QApplication::translate("MainWindow", "Elipse", nullptr));
        labelRz->setText(QApplication::translate("MainWindow", "Rz", nullptr));
        labelRx->setText(QApplication::translate("MainWindow", "   Rx  ", nullptr));
        labelRy->setText(QApplication::translate("MainWindow", " Ry", nullptr));
        groupBoxCaixa->setTitle(QApplication::translate("MainWindow", "Caixa", nullptr));
        labelDimY->setText(QApplication::translate("MainWindow", "DimY", nullptr));
        labelDimZ->setText(QApplication::translate("MainWindow", "DimZ", nullptr));
        labelDimx->setText(QApplication::translate("MainWindow", "DimX", nullptr));
        groupBoxCoordenadas->setTitle(QApplication::translate("MainWindow", "Profundidade", nullptr));
        labelZ->setText(QApplication::translate("MainWindow", "Z", nullptr));
        groupBox->setTitle(QApplication::translate("MainWindow", "Cor", nullptr));
        labelB->setText(QApplication::translate("MainWindow", "B", nullptr));
        labelG->setText(QApplication::translate("MainWindow", "G", nullptr));
        labelR->setText(QApplication::translate("MainWindow", "R", nullptr));
        pushButtonNew->setText(QApplication::translate("MainWindow", "NEW", nullptr));
        pushButtonSave->setText(QApplication::translate("MainWindow", "Save", nullptr));
        pushButtonPutSphere->setText(QApplication::translate("MainWindow", "PutSphere", nullptr));
        pushButtonPutVoxel->setText(QApplication::translate("MainWindow", "PutVoxel", nullptr));
        pushButtonCutBox->setText(QApplication::translate("MainWindow", "CutBox", nullptr));
        pushButtonCutEllipsoid->setText(QApplication::translate("MainWindow", "CutEllipsoid", nullptr));
        pushButtonCutSphere->setText(QApplication::translate("MainWindow", "CutSphere", nullptr));
        pushButtonCutVoxel->setText(QApplication::translate("MainWindow", "CutVoxel", nullptr));
        pushButtonPutEllipsoid->setText(QApplication::translate("MainWindow", "PutEllipsoid", nullptr));
        pushButtonPutBox->setText(QApplication::translate("MainWindow", "PutBox", nullptr));
        LT->setText(QApplication::translate("MainWindow", "SCULPTOR 3D", nullptr));
        menuArquivo->setTitle(QApplication::translate("MainWindow", "Arquivo", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
