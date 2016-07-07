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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindowClass
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_13;
    QTabWidget *tabWidget;
    QWidget *m_inputTab;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout;
    QDoubleSpinBox *m_alpha;
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
    QPushButton *pushButton_2;
    QHBoxLayout *horizontalLayout_14;
    QCustomPlot *m_inputPlot;
    QWidget *m_viewerTab;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QLabel *label_12;
    QGridLayout *m_timeframeSliderLayout;
    QCustomPlot *m_viewerPlot;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindowClass)
    {
        if (MainWindowClass->objectName().isEmpty())
            MainWindowClass->setObjectName(QStringLiteral("MainWindowClass"));
        MainWindowClass->resize(1122, 714);
        centralWidget = new QWidget(MainWindowClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout_13 = new QHBoxLayout(centralWidget);
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        m_inputTab = new QWidget();
        m_inputTab->setObjectName(QStringLiteral("m_inputTab"));
        horizontalLayout = new QHBoxLayout(m_inputTab);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        m_alpha = new QDoubleSpinBox(m_inputTab);
        m_alpha->setObjectName(QStringLiteral("m_alpha"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(m_alpha->sizePolicy().hasHeightForWidth());
        m_alpha->setSizePolicy(sizePolicy);
        m_alpha->setDecimals(10);
        m_alpha->setMinimum(-2);
        m_alpha->setSingleStep(0.01);
        m_alpha->setValue(1);

        gridLayout->addWidget(m_alpha, 13, 1, 1, 1);

        label_3 = new QLabel(m_inputTab);
        label_3->setObjectName(QStringLiteral("label_3"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);
        QFont font;
        font.setPointSize(12);
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 5, 0, 1, 1);

        label_2 = new QLabel(m_inputTab);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 3, 0, 1, 1);

        m_maxRho = new QDoubleSpinBox(m_inputTab);
        m_maxRho->setObjectName(QStringLiteral("m_maxRho"));
        sizePolicy.setHeightForWidth(m_maxRho->sizePolicy().hasHeightForWidth());
        m_maxRho->setSizePolicy(sizePolicy);
        m_maxRho->setMaximum(100);
        m_maxRho->setSingleStep(0.01);
        m_maxRho->setValue(100);

        gridLayout->addWidget(m_maxRho, 3, 1, 1, 1);

        label_8 = new QLabel(m_inputTab);
        label_8->setObjectName(QStringLiteral("label_8"));
        sizePolicy1.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy1);
        label_8->setFont(font);

        gridLayout->addWidget(label_8, 7, 0, 1, 1);

        m_uS0 = new QDoubleSpinBox(m_inputTab);
        m_uS0->setObjectName(QStringLiteral("m_uS0"));
        sizePolicy.setHeightForWidth(m_uS0->sizePolicy().hasHeightForWidth());
        m_uS0->setSizePolicy(sizePolicy);
        m_uS0->setDecimals(4);
        m_uS0->setSingleStep(0.05);
        m_uS0->setValue(0.45);

        gridLayout->addWidget(m_uS0, 5, 1, 1, 1);

        m_deltaRho = new QDoubleSpinBox(m_inputTab);
        m_deltaRho->setObjectName(QStringLiteral("m_deltaRho"));
        sizePolicy.setHeightForWidth(m_deltaRho->sizePolicy().hasHeightForWidth());
        m_deltaRho->setSizePolicy(sizePolicy);
        m_deltaRho->setDecimals(4);
        m_deltaRho->setSingleStep(0.01);
        m_deltaRho->setValue(1);

        gridLayout->addWidget(m_deltaRho, 7, 1, 1, 1);

        m_amplitude = new QDoubleSpinBox(m_inputTab);
        m_amplitude->setObjectName(QStringLiteral("m_amplitude"));
        sizePolicy.setHeightForWidth(m_amplitude->sizePolicy().hasHeightForWidth());
        m_amplitude->setSizePolicy(sizePolicy);
        m_amplitude->setDecimals(4);
        m_amplitude->setSingleStep(0.01);
        m_amplitude->setValue(0.2);

        gridLayout->addWidget(m_amplitude, 9, 1, 1, 1);

        label_10 = new QLabel(m_inputTab);
        label_10->setObjectName(QStringLiteral("label_10"));
        sizePolicy1.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy1);
        label_10->setFont(font);

        gridLayout->addWidget(label_10, 11, 0, 1, 1);

        m_chi0 = new QDoubleSpinBox(m_inputTab);
        m_chi0->setObjectName(QStringLiteral("m_chi0"));
        sizePolicy.setHeightForWidth(m_chi0->sizePolicy().hasHeightForWidth());
        m_chi0->setSizePolicy(sizePolicy);
        m_chi0->setDecimals(4);

        gridLayout->addWidget(m_chi0, 11, 1, 1, 1);

        label_9 = new QLabel(m_inputTab);
        label_9->setObjectName(QStringLiteral("label_9"));
        sizePolicy1.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy1);
        label_9->setFont(font);

        gridLayout->addWidget(label_9, 13, 0, 1, 1);

        label_4 = new QLabel(m_inputTab);
        label_4->setObjectName(QStringLiteral("label_4"));
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);
        label_4->setFont(font);

        gridLayout->addWidget(label_4, 15, 0, 1, 1);

        m_dSigdTauFlag = new QCheckBox(m_inputTab);
        m_dSigdTauFlag->setObjectName(QStringLiteral("m_dSigdTauFlag"));
        m_dSigdTauFlag->setFont(font);

        gridLayout->addWidget(m_dSigdTauFlag, 20, 1, 1, 1);

        label_11 = new QLabel(m_inputTab);
        label_11->setObjectName(QStringLiteral("label_11"));
        sizePolicy1.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy1);
        label_11->setFont(font);

        gridLayout->addWidget(label_11, 9, 0, 1, 1);

        label_5 = new QLabel(m_inputTab);
        label_5->setObjectName(QStringLiteral("label_5"));
        sizePolicy1.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy1);
        label_5->setFont(font);

        gridLayout->addWidget(label_5, 22, 0, 1, 1);

        m_saveInterval = new QSpinBox(m_inputTab);
        m_saveInterval->setObjectName(QStringLiteral("m_saveInterval"));
        sizePolicy.setHeightForWidth(m_saveInterval->sizePolicy().hasHeightForWidth());
        m_saveInterval->setSizePolicy(sizePolicy);
        m_saveInterval->setMaximum(50000);
        m_saveInterval->setValue(180);

        gridLayout->addWidget(m_saveInterval, 22, 1, 1, 1);

        m_steps = new QSpinBox(m_inputTab);
        m_steps->setObjectName(QStringLiteral("m_steps"));
        sizePolicy.setHeightForWidth(m_steps->sizePolicy().hasHeightForWidth());
        m_steps->setSizePolicy(sizePolicy);
        m_steps->setMaximum(50000000);
        m_steps->setValue(30000);

        gridLayout->addWidget(m_steps, 24, 1, 1, 1);

        label_6 = new QLabel(m_inputTab);
        label_6->setObjectName(QStringLiteral("label_6"));
        sizePolicy1.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy1);
        label_6->setFont(font);

        gridLayout->addWidget(label_6, 24, 0, 1, 1);

        label = new QLabel(m_inputTab);
        label->setObjectName(QStringLiteral("label"));
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
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

        m_minRho = new QDoubleSpinBox(m_inputTab);
        m_minRho->setObjectName(QStringLiteral("m_minRho"));
        sizePolicy.setHeightForWidth(m_minRho->sizePolicy().hasHeightForWidth());
        m_minRho->setSizePolicy(sizePolicy);
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

        m_epsilon = new QDoubleSpinBox(m_inputTab);
        m_epsilon->setObjectName(QStringLiteral("m_epsilon"));
        sizePolicy.setHeightForWidth(m_epsilon->sizePolicy().hasHeightForWidth());
        m_epsilon->setSizePolicy(sizePolicy);
        m_epsilon->setDecimals(6);
        m_epsilon->setSingleStep(1e-05);
        m_epsilon->setValue(1e-05);

        gridLayout->addWidget(m_epsilon, 18, 1, 1, 1);

        label_7 = new QLabel(m_inputTab);
        label_7->setObjectName(QStringLiteral("label_7"));
        sizePolicy1.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy1);
        label_7->setFont(font);

        gridLayout->addWidget(label_7, 18, 0, 1, 1);

        m_rho0 = new QDoubleSpinBox(m_inputTab);
        m_rho0->setObjectName(QStringLiteral("m_rho0"));
        sizePolicy.setHeightForWidth(m_rho0->sizePolicy().hasHeightForWidth());
        m_rho0->setSizePolicy(sizePolicy);
        m_rho0->setDecimals(4);
        m_rho0->setSingleStep(0.01);
        m_rho0->setValue(50);

        gridLayout->addWidget(m_rho0, 15, 1, 1, 1);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_7, 21, 0, 1, 1);

        pushButton_2 = new QPushButton(m_inputTab);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 26, 0, 1, 1);


        horizontalLayout->addLayout(gridLayout);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        m_inputPlot = new QCustomPlot(m_inputTab);
        m_inputPlot->setObjectName(QStringLiteral("m_inputPlot"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(m_inputPlot->sizePolicy().hasHeightForWidth());
        m_inputPlot->setSizePolicy(sizePolicy2);

        horizontalLayout_14->addWidget(m_inputPlot);


        horizontalLayout->addLayout(horizontalLayout_14);

        tabWidget->addTab(m_inputTab, QString());
        m_viewerTab = new QWidget();
        m_viewerTab->setObjectName(QStringLiteral("m_viewerTab"));
        horizontalLayout_3 = new QHBoxLayout(m_viewerTab);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        lineEdit = new QLineEdit(m_viewerTab);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        sizePolicy.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy);
        lineEdit->setMinimumSize(QSize(40, 0));
        lineEdit->setMaximumSize(QSize(200, 16777215));

        horizontalLayout_2->addWidget(lineEdit);

        pushButton = new QPushButton(m_viewerTab);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout_2);

        label_12 = new QLabel(m_viewerTab);
        label_12->setObjectName(QStringLiteral("label_12"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy3);

        verticalLayout->addWidget(label_12);

        m_timeframeSliderLayout = new QGridLayout();
        m_timeframeSliderLayout->setSpacing(6);
        m_timeframeSliderLayout->setObjectName(QStringLiteral("m_timeframeSliderLayout"));
        m_timeframeSliderLayout->setVerticalSpacing(0);

        verticalLayout->addLayout(m_timeframeSliderLayout);


        horizontalLayout_3->addLayout(verticalLayout);

        m_viewerPlot = new QCustomPlot(m_viewerTab);
        m_viewerPlot->setObjectName(QStringLiteral("m_viewerPlot"));
        sizePolicy2.setHeightForWidth(m_viewerPlot->sizePolicy().hasHeightForWidth());
        m_viewerPlot->setSizePolicy(sizePolicy2);

        horizontalLayout_3->addWidget(m_viewerPlot);

        tabWidget->addTab(m_viewerTab, QString());

        horizontalLayout_13->addWidget(tabWidget);

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
        QObject::connect(pushButton_2, SIGNAL(clicked()), MainWindowClass, SLOT(Solve()));
        QObject::connect(pushButton, SIGNAL(clicked()), MainWindowClass, SLOT(SelectFile()));

        tabWidget->setCurrentIndex(1);


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
        pushButton_2->setText(QApplication::translate("MainWindowClass", "Solve", 0));
        tabWidget->setTabText(tabWidget->indexOf(m_inputTab), QApplication::translate("MainWindowClass", "Input", 0));
        pushButton->setText(QApplication::translate("MainWindowClass", "Select File", 0));
        label_12->setText(QApplication::translate("MainWindowClass", "Timeframe", 0));
        tabWidget->setTabText(tabWidget->indexOf(m_viewerTab), QApplication::translate("MainWindowClass", "Viewer", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindowClass: public Ui_MainWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
