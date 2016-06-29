/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindowClass
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_13;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLabel *label_2;
    QDoubleSpinBox *m_maxRho;
    QLabel *label_8;
    QDoubleSpinBox *m_uS0;
    QDoubleSpinBox *m_deltaRho;
    QDoubleSpinBox *m_amplitude;
    QLabel *label_10;
    QDoubleSpinBox *m_chi0;
    QLabel *label_9;
    QDoubleSpinBox *m_alpha;
    QLabel *label_4;
    QCheckBox *m_dSigdTauFlag;
    QLabel *label_11;
    QLabel *label_5;
    QSpinBox *m_saveInterval;
    QSpinBox *m_steps;
    QLabel *label_6;
    QLabel *label;
    QSpacerItem *verticalSpacer_13;
    QSpacerItem *verticalSpacer_12;
    QSpacerItem *verticalSpacer_10;
    QSpacerItem *verticalSpacer_8;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *verticalSpacer_3;
    QDoubleSpinBox *m_minRho;
    QSpacerItem *verticalSpacer_6;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer_11;
    QSpacerItem *verticalSpacer_9;
    QSpacerItem *verticalSpacer;
    QDoubleSpinBox *m_epsilon;
    QLabel *label_7;
    QDoubleSpinBox *m_rho0;
    QSpacerItem *verticalSpacer_7;
    QHBoxLayout *horizontalLayout_14;
    QCustomPlot *m_inputPlot;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindowClass)
    {
        if (MainWindowClass->objectName().isEmpty())
            MainWindowClass->setObjectName(QStringLiteral("MainWindowClass"));
        MainWindowClass->resize(929, 714);
        centralWidget = new QWidget(MainWindowClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout_13 = new QHBoxLayout(centralWidget);
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(12);
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 5, 0, 1, 1);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 3, 0, 1, 1);

        m_maxRho = new QDoubleSpinBox(centralWidget);
        m_maxRho->setObjectName(QStringLiteral("m_maxRho"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(m_maxRho->sizePolicy().hasHeightForWidth());
        m_maxRho->setSizePolicy(sizePolicy1);
        m_maxRho->setMaximum(100);
        m_maxRho->setSingleStep(0.01);
        m_maxRho->setValue(100);

        gridLayout->addWidget(m_maxRho, 3, 1, 1, 1);

        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        sizePolicy.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy);
        label_8->setFont(font);

        gridLayout->addWidget(label_8, 7, 0, 1, 1);

        m_uS0 = new QDoubleSpinBox(centralWidget);
        m_uS0->setObjectName(QStringLiteral("m_uS0"));
        sizePolicy1.setHeightForWidth(m_uS0->sizePolicy().hasHeightForWidth());
        m_uS0->setSizePolicy(sizePolicy1);
        m_uS0->setDecimals(4);
        m_uS0->setSingleStep(0.05);
        m_uS0->setValue(0.45);

        gridLayout->addWidget(m_uS0, 5, 1, 1, 1);

        m_deltaRho = new QDoubleSpinBox(centralWidget);
        m_deltaRho->setObjectName(QStringLiteral("m_deltaRho"));
        sizePolicy1.setHeightForWidth(m_deltaRho->sizePolicy().hasHeightForWidth());
        m_deltaRho->setSizePolicy(sizePolicy1);
        m_deltaRho->setDecimals(4);
        m_deltaRho->setSingleStep(0.01);
        m_deltaRho->setValue(1);

        gridLayout->addWidget(m_deltaRho, 7, 1, 1, 1);

        m_amplitude = new QDoubleSpinBox(centralWidget);
        m_amplitude->setObjectName(QStringLiteral("m_amplitude"));
        sizePolicy1.setHeightForWidth(m_amplitude->sizePolicy().hasHeightForWidth());
        m_amplitude->setSizePolicy(sizePolicy1);
        m_amplitude->setDecimals(4);
        m_amplitude->setSingleStep(0.01);
        m_amplitude->setValue(0.2);

        gridLayout->addWidget(m_amplitude, 9, 1, 1, 1);

        label_10 = new QLabel(centralWidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        sizePolicy.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy);
        label_10->setFont(font);

        gridLayout->addWidget(label_10, 11, 0, 1, 1);

        m_chi0 = new QDoubleSpinBox(centralWidget);
        m_chi0->setObjectName(QStringLiteral("m_chi0"));
        sizePolicy1.setHeightForWidth(m_chi0->sizePolicy().hasHeightForWidth());
        m_chi0->setSizePolicy(sizePolicy1);
        m_chi0->setDecimals(4);

        gridLayout->addWidget(m_chi0, 11, 1, 1, 1);

        label_9 = new QLabel(centralWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        sizePolicy.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy);
        label_9->setFont(font);

        gridLayout->addWidget(label_9, 13, 0, 1, 1);

        m_alpha = new QDoubleSpinBox(centralWidget);
        m_alpha->setObjectName(QStringLiteral("m_alpha"));
        sizePolicy1.setHeightForWidth(m_alpha->sizePolicy().hasHeightForWidth());
        m_alpha->setSizePolicy(sizePolicy1);
        m_alpha->setDecimals(10);
        m_alpha->setMinimum(-2);
        m_alpha->setValue(1);

        gridLayout->addWidget(m_alpha, 13, 1, 1, 1);

        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        label_4->setFont(font);

        gridLayout->addWidget(label_4, 15, 0, 1, 1);

        m_dSigdTauFlag = new QCheckBox(centralWidget);
        m_dSigdTauFlag->setObjectName(QStringLiteral("m_dSigdTauFlag"));
        m_dSigdTauFlag->setFont(font);

        gridLayout->addWidget(m_dSigdTauFlag, 20, 1, 1, 1);

        label_11 = new QLabel(centralWidget);
        label_11->setObjectName(QStringLiteral("label_11"));
        sizePolicy.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy);
        label_11->setFont(font);

        gridLayout->addWidget(label_11, 9, 0, 1, 1);

        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);
        label_5->setFont(font);

        gridLayout->addWidget(label_5, 22, 0, 1, 1);

        m_saveInterval = new QSpinBox(centralWidget);
        m_saveInterval->setObjectName(QStringLiteral("m_saveInterval"));
        sizePolicy1.setHeightForWidth(m_saveInterval->sizePolicy().hasHeightForWidth());
        m_saveInterval->setSizePolicy(sizePolicy1);
        m_saveInterval->setMaximum(50000);
        m_saveInterval->setValue(180);

        gridLayout->addWidget(m_saveInterval, 22, 1, 1, 1);

        m_steps = new QSpinBox(centralWidget);
        m_steps->setObjectName(QStringLiteral("m_steps"));
        sizePolicy1.setHeightForWidth(m_steps->sizePolicy().hasHeightForWidth());
        m_steps->setSizePolicy(sizePolicy1);
        m_steps->setMaximum(50000000);
        m_steps->setValue(30000);

        gridLayout->addWidget(m_steps, 24, 1, 1, 1);

        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);
        label_6->setFont(font);

        gridLayout->addWidget(label_6, 24, 0, 1, 1);

        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setFont(font);

        gridLayout->addWidget(label, 1, 0, 1, 1);

        verticalSpacer_13 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_13, 23, 0, 1, 1);

        verticalSpacer_12 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_12, 19, 0, 1, 1);

        verticalSpacer_10 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_10, 16, 0, 1, 1);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_8, 12, 0, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_4, 4, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 6, 0, 1, 1);

        m_minRho = new QDoubleSpinBox(centralWidget);
        m_minRho->setObjectName(QStringLiteral("m_minRho"));
        sizePolicy1.setHeightForWidth(m_minRho->sizePolicy().hasHeightForWidth());
        m_minRho->setSizePolicy(sizePolicy1);
        m_minRho->setMinimum(0);
        m_minRho->setSingleStep(0.01);
        m_minRho->setValue(0);

        gridLayout->addWidget(m_minRho, 1, 1, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_6, 0, 0, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_5, 2, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 8, 0, 1, 1);

        verticalSpacer_11 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_11, 25, 0, 1, 1);

        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_9, 14, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 10, 0, 1, 1);

        m_epsilon = new QDoubleSpinBox(centralWidget);
        m_epsilon->setObjectName(QStringLiteral("m_epsilon"));
        sizePolicy1.setHeightForWidth(m_epsilon->sizePolicy().hasHeightForWidth());
        m_epsilon->setSizePolicy(sizePolicy1);
        m_epsilon->setDecimals(6);
        m_epsilon->setSingleStep(1e-05);
        m_epsilon->setValue(1e-05);

        gridLayout->addWidget(m_epsilon, 18, 1, 1, 1);

        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        sizePolicy.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy);
        label_7->setFont(font);

        gridLayout->addWidget(label_7, 18, 0, 1, 1);

        m_rho0 = new QDoubleSpinBox(centralWidget);
        m_rho0->setObjectName(QStringLiteral("m_rho0"));
        sizePolicy1.setHeightForWidth(m_rho0->sizePolicy().hasHeightForWidth());
        m_rho0->setSizePolicy(sizePolicy1);
        m_rho0->setDecimals(4);
        m_rho0->setSingleStep(0.01);
        m_rho0->setValue(50);

        gridLayout->addWidget(m_rho0, 15, 1, 1, 1);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_7, 21, 0, 1, 1);


        verticalLayout->addLayout(gridLayout);


        horizontalLayout_13->addLayout(verticalLayout);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        m_inputPlot = new QCustomPlot(centralWidget);
        m_inputPlot->setObjectName(QStringLiteral("m_inputPlot"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(m_inputPlot->sizePolicy().hasHeightForWidth());
        m_inputPlot->setSizePolicy(sizePolicy2);

        horizontalLayout_14->addWidget(m_inputPlot);


        horizontalLayout_13->addLayout(horizontalLayout_14);

        MainWindowClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindowClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindowClass->setStatusBar(statusBar);

        retranslateUi(MainWindowClass);
        QObject::connect(m_minRho, SIGNAL(valueChanged(double)), MainWindowClass, SLOT(UpdateGraph()));
        QObject::connect(m_maxRho, SIGNAL(valueChanged(double)), MainWindowClass, SLOT(UpdateGraph()));
        QObject::connect(m_uS0, SIGNAL(valueChanged(double)), MainWindowClass, SLOT(UpdateGraph()));
        QObject::connect(m_deltaRho, SIGNAL(valueChanged(double)), MainWindowClass, SLOT(UpdateGraph()));
        QObject::connect(m_amplitude, SIGNAL(valueChanged(double)), MainWindowClass, SLOT(UpdateGraph()));
        QObject::connect(m_chi0, SIGNAL(valueChanged(QString)), MainWindowClass, SLOT(UpdateGraph()));
        QObject::connect(m_alpha, SIGNAL(valueChanged(double)), MainWindowClass, SLOT(UpdateGraph()));
        QObject::connect(m_rho0, SIGNAL(valueChanged(double)), MainWindowClass, SLOT(UpdateGraph()));
        QObject::connect(m_epsilon, SIGNAL(valueChanged(double)), MainWindowClass, SLOT(UpdateGraph()));
        QObject::connect(m_dSigdTauFlag, SIGNAL(toggled(bool)), MainWindowClass, SLOT(UpdateGraph()));

        QMetaObject::connectSlotsByName(MainWindowClass);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowClass)
    {
        MainWindowClass->setWindowTitle(QApplication::translate("MainWindowClass", "MainWindow", 0));
        label_3->setText(QApplication::translate("MainWindowClass", "<html><head/><body><p>U<span style=\" vertical-align:sub;\">s0</span></p></body></html>", 0));
        label_2->setText(QApplication::translate("MainWindowClass", "Max \317\201", 0));
        label_8->setText(QApplication::translate("MainWindowClass", "\316\224\317\201", 0));
        label_10->setText(QApplication::translate("MainWindowClass", "<html><head/><body><p>\317\207<span style=\" vertical-align:sub;\">0</span></p></body></html>", 0));
        label_9->setText(QApplication::translate("MainWindowClass", "\316\261", 0));
        label_4->setText(QApplication::translate("MainWindowClass", "<html><head/><body><p>\317\201<span style=\" vertical-align:sub;\">0</span></p></body></html>", 0));
        m_dSigdTauFlag->setText(QApplication::translate("MainWindowClass", "Use d\317\203/d\317\201 for d\317\203/d\317\204", 0));
        label_11->setText(QApplication::translate("MainWindowClass", "Amplitutde", 0));
        label_5->setText(QApplication::translate("MainWindowClass", "Save Interval(Steps)", 0));
        label_6->setText(QApplication::translate("MainWindowClass", "Steps", 0));
        label->setText(QApplication::translate("MainWindowClass", "Min \317\201", 0));
        label_7->setText(QApplication::translate("MainWindowClass", "\316\265", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindowClass: public Ui_MainWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
