/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label_trilho1_3;
    QLabel *label_trilho3_3;
    QLabel *label_trilho3_2;
    QLabel *label_trilho2_3;
    QLabel *label_trilho3_4;
    QLabel *label_trilho4_3;
    QLabel *label_trilho2_4;
    QLabel *label_trilho2_5;
    QLabel *label_trilho1_4;
    QLabel *label_trilho4_4;
    QLabel *label_trilho1_5;
    QLabel *label_trilho2_6;
    QLabel *label_trilho4_5;
    QLabel *label_trilho4_6;
    QLabel *label_trilho2_7;
    QLabel *label_trem1;
    QLabel *label_trem2;
    QLabel *label_trem3;
    QLabel *label_trem4;
    QLabel *label_trem5;
    QSlider *horizontalSlider_2;
    QSlider *horizontalSlider_5;
    QSlider *horizontalSlider_3;
    QSlider *horizontalSlider_4;
    QSlider *horizontalSlider;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(968, 494);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(250, 250, 250, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(255, 255, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(252, 252, 252, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(125, 125, 125, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(167, 167, 167, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush3);
        QBrush brush6(QColor(255, 255, 220, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        QBrush brush7(QColor(0, 0, 0, 128));
        brush7.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush7);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush7);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush7);
#endif
        MainWindow->setPalette(palette);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        label_trilho1_3 = new QLabel(centralWidget);
        label_trilho1_3->setObjectName(QString::fromUtf8("label_trilho1_3"));
        label_trilho1_3->setGeometry(QRect(81, 30, 250, 17));
        QPalette palette1;
        QBrush brush8(QColor(255, 255, 0, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush8);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush8);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush8);
        label_trilho1_3->setPalette(palette1);
        label_trilho1_3->setStyleSheet(QString::fromUtf8("QLabel { background: yellow}"));
        label_trilho3_3 = new QLabel(centralWidget);
        label_trilho3_3->setObjectName(QString::fromUtf8("label_trilho3_3"));
        label_trilho3_3->setGeometry(QRect(736, 150, 21, 137));
        label_trilho3_3->setStyleSheet(QString::fromUtf8("QLabel { background: yellow}"));
        label_trilho3_2 = new QLabel(centralWidget);
        label_trilho3_2->setObjectName(QString::fromUtf8("label_trilho3_2"));
        label_trilho3_2->setGeometry(QRect(331, 30, 21, 137));
        label_trilho3_2->setStyleSheet(QString::fromUtf8("QLabel { background: yellow}"));
        label_trilho2_3 = new QLabel(centralWidget);
        label_trilho2_3->setObjectName(QString::fromUtf8("label_trilho2_3"));
        label_trilho2_3->setGeometry(QRect(621, 150, 250, 17));
        label_trilho2_3->setStyleSheet(QString::fromUtf8("QLabel { background: yellow}"));
        label_trilho3_4 = new QLabel(centralWidget);
        label_trilho3_4->setObjectName(QString::fromUtf8("label_trilho3_4"));
        label_trilho3_4->setGeometry(QRect(466, 150, 21, 137));
        label_trilho3_4->setStyleSheet(QString::fromUtf8("QLabel { background: yellow}"));
        label_trilho4_3 = new QLabel(centralWidget);
        label_trilho4_3->setObjectName(QString::fromUtf8("label_trilho4_3"));
        label_trilho4_3->setGeometry(QRect(871, 30, 21, 137));
        label_trilho4_3->setStyleSheet(QString::fromUtf8("QLabel { background: yellow}"));
        label_trilho2_4 = new QLabel(centralWidget);
        label_trilho2_4->setObjectName(QString::fromUtf8("label_trilho2_4"));
        label_trilho2_4->setGeometry(QRect(217, 270, 250, 17));
        label_trilho2_4->setStyleSheet(QString::fromUtf8("QLabel { background: yellow}"));
        label_trilho2_5 = new QLabel(centralWidget);
        label_trilho2_5->setObjectName(QString::fromUtf8("label_trilho2_5"));
        label_trilho2_5->setGeometry(QRect(351, 150, 250, 17));
        label_trilho2_5->setStyleSheet(QString::fromUtf8("QLabel { background: yellow}"));
        label_trilho1_4 = new QLabel(centralWidget);
        label_trilho1_4->setObjectName(QString::fromUtf8("label_trilho1_4"));
        label_trilho1_4->setGeometry(QRect(621, 30, 250, 17));
        label_trilho1_4->setStyleSheet(QString::fromUtf8("QLabel { background: yellow}"));
        label_trilho4_4 = new QLabel(centralWidget);
        label_trilho4_4->setObjectName(QString::fromUtf8("label_trilho4_4"));
        label_trilho4_4->setGeometry(QRect(601, 30, 21, 137));
        label_trilho4_4->setStyleSheet(QString::fromUtf8("QLabel { background: yellow}"));
        label_trilho1_5 = new QLabel(centralWidget);
        label_trilho1_5->setObjectName(QString::fromUtf8("label_trilho1_5"));
        label_trilho1_5->setGeometry(QRect(351, 30, 250, 17));
        label_trilho1_5->setStyleSheet(QString::fromUtf8("QLabel { background: yellow}"));
        label_trilho2_6 = new QLabel(centralWidget);
        label_trilho2_6->setObjectName(QString::fromUtf8("label_trilho2_6"));
        label_trilho2_6->setGeometry(QRect(487, 270, 250, 17));
        label_trilho2_6->setStyleSheet(QString::fromUtf8("QLabel { background: yellow}"));
        label_trilho4_5 = new QLabel(centralWidget);
        label_trilho4_5->setObjectName(QString::fromUtf8("label_trilho4_5"));
        label_trilho4_5->setGeometry(QRect(60, 30, 21, 137));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::Button, brush8);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush8);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush8);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush8);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush8);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush8);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush8);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush8);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush8);
        label_trilho4_5->setPalette(palette2);
        label_trilho4_5->setStyleSheet(QString::fromUtf8("QLabel { background: yellow}"));
        label_trilho4_6 = new QLabel(centralWidget);
        label_trilho4_6->setObjectName(QString::fromUtf8("label_trilho4_6"));
        label_trilho4_6->setGeometry(QRect(196, 150, 21, 137));
        label_trilho4_6->setStyleSheet(QString::fromUtf8("QLabel { background: yellow}"));
        label_trilho2_7 = new QLabel(centralWidget);
        label_trilho2_7->setObjectName(QString::fromUtf8("label_trilho2_7"));
        label_trilho2_7->setGeometry(QRect(81, 150, 250, 17));
        label_trilho2_7->setStyleSheet(QString::fromUtf8("QLabel { background: yellow}"));
        label_trem1 = new QLabel(centralWidget);
        label_trem1->setObjectName(QString::fromUtf8("label_trem1"));
        label_trem1->setEnabled(true);
        label_trem1->setGeometry(QRect(60, 90, 21, 17));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush9(QColor(255, 0, 0, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush9);
        QBrush brush10(QColor(255, 183, 112, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Light, brush10);
        QBrush brush11(QColor(250, 152, 56, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Midlight, brush11);
        QBrush brush12(QColor(122, 60, 0, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Dark, brush12);
        QBrush brush13(QColor(163, 81, 0, 255));
        brush13.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Mid, brush13);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush);
        palette3.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush9);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush9);
        palette3.setBrush(QPalette::Active, QPalette::Shadow, brush);
        QBrush brush14(QColor(250, 188, 127, 255));
        brush14.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::AlternateBase, brush14);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Active, QPalette::PlaceholderText, brush7);
#endif
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush9);
        palette3.setBrush(QPalette::Inactive, QPalette::Light, brush10);
        palette3.setBrush(QPalette::Inactive, QPalette::Midlight, brush11);
        palette3.setBrush(QPalette::Inactive, QPalette::Dark, brush12);
        palette3.setBrush(QPalette::Inactive, QPalette::Mid, brush13);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush9);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush9);
        palette3.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush14);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush7);
#endif
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush9);
        palette3.setBrush(QPalette::Disabled, QPalette::Light, brush10);
        palette3.setBrush(QPalette::Disabled, QPalette::Midlight, brush11);
        palette3.setBrush(QPalette::Disabled, QPalette::Dark, brush12);
        palette3.setBrush(QPalette::Disabled, QPalette::Mid, brush13);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette3.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        palette3.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        QBrush brush15(QColor(245, 121, 0, 255));
        brush15.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush15);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush7);
#endif
        label_trem1->setPalette(palette3);
        label_trem1->setAutoFillBackground(false);
        label_trem1->setStyleSheet(QString::fromUtf8("QLabel { background:red}"));
        label_trem2 = new QLabel(centralWidget);
        label_trem2->setObjectName(QString::fromUtf8("label_trem2"));
        label_trem2->setGeometry(QRect(460, 30, 21, 17));
        label_trem2->setStyleSheet(QString::fromUtf8("QLabel { background: red}"));
        label_trem3 = new QLabel(centralWidget);
        label_trem3->setObjectName(QString::fromUtf8("label_trem3"));
        label_trem3->setGeometry(QRect(871, 90, 21, 17));
        label_trem3->setStyleSheet(QString::fromUtf8("QLabel { background: red}"));
        label_trem4 = new QLabel(centralWidget);
        label_trem4->setObjectName(QString::fromUtf8("label_trem4"));
        label_trem4->setGeometry(QRect(335, 270, 21, 17));
        label_trem4->setStyleSheet(QString::fromUtf8("QLabel { background: red}"));
        label_trem5 = new QLabel(centralWidget);
        label_trem5->setObjectName(QString::fromUtf8("label_trem5"));
        label_trem5->setGeometry(QRect(736, 220, 21, 17));
        label_trem5->setStyleSheet(QString::fromUtf8("QLabel { background: red}"));
        horizontalSlider_2 = new QSlider(centralWidget);
        horizontalSlider_2->setObjectName(QString::fromUtf8("horizontalSlider_2"));
        horizontalSlider_2->setGeometry(QRect(400, 350, 160, 16));
        horizontalSlider_2->setStyleSheet(QString::fromUtf8("QSlider::handle:horizontal {background-color: red}"));
        horizontalSlider_2->setMaximum(200);
        horizontalSlider_2->setValue(100);
        horizontalSlider_2->setOrientation(Qt::Horizontal);
        horizontalSlider_2->setInvertedAppearance(true);
        horizontalSlider_5 = new QSlider(centralWidget);
        horizontalSlider_5->setObjectName(QString::fromUtf8("horizontalSlider_5"));
        horizontalSlider_5->setGeometry(QRect(400, 410, 160, 16));
        horizontalSlider_5->setStyleSheet(QString::fromUtf8("QSlider::handle:horizontal {background-color: red}"));
        horizontalSlider_5->setMaximum(200);
        horizontalSlider_5->setValue(100);
        horizontalSlider_5->setOrientation(Qt::Horizontal);
        horizontalSlider_5->setInvertedAppearance(true);
        horizontalSlider_3 = new QSlider(centralWidget);
        horizontalSlider_3->setObjectName(QString::fromUtf8("horizontalSlider_3"));
        horizontalSlider_3->setGeometry(QRect(400, 370, 160, 16));
        horizontalSlider_3->setStyleSheet(QString::fromUtf8("QSlider::handle:horizontal {background-color: red}"));
        horizontalSlider_3->setMaximum(200);
        horizontalSlider_3->setValue(100);
        horizontalSlider_3->setOrientation(Qt::Horizontal);
        horizontalSlider_3->setInvertedAppearance(true);
        horizontalSlider_4 = new QSlider(centralWidget);
        horizontalSlider_4->setObjectName(QString::fromUtf8("horizontalSlider_4"));
        horizontalSlider_4->setGeometry(QRect(400, 390, 160, 16));
        horizontalSlider_4->setStyleSheet(QString::fromUtf8("QSlider::handle:horizontal {background-color: red}"));
        horizontalSlider_4->setMaximum(200);
        horizontalSlider_4->setValue(100);
        horizontalSlider_4->setOrientation(Qt::Horizontal);
        horizontalSlider_4->setInvertedAppearance(true);
        horizontalSlider = new QSlider(centralWidget);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(400, 330, 160, 16));
        horizontalSlider->setStyleSheet(QString::fromUtf8("QSlider::handle:horizontal {background-color: red}"));
        horizontalSlider->setMinimum(0);
        horizontalSlider->setMaximum(200);
        horizontalSlider->setValue(100);
        horizontalSlider->setOrientation(Qt::Horizontal);
        horizontalSlider->setInvertedAppearance(true);
        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label_trilho1_3->setText(QString());
        label_trilho3_3->setText(QString());
        label_trilho3_2->setText(QString());
        label_trilho2_3->setText(QString());
        label_trilho3_4->setText(QString());
        label_trilho4_3->setText(QString());
        label_trilho2_4->setText(QString());
        label_trilho2_5->setText(QString());
        label_trilho1_4->setText(QString());
        label_trilho4_4->setText(QString());
        label_trilho1_5->setText(QString());
        label_trilho2_6->setText(QString());
        label_trilho4_5->setText(QString());
        label_trilho4_6->setText(QString());
        label_trilho2_7->setText(QString());
        label_trem1->setText(QApplication::translate("MainWindow", "T1", nullptr));
        label_trem2->setText(QApplication::translate("MainWindow", "T2", nullptr));
        label_trem3->setText(QApplication::translate("MainWindow", "T3", nullptr));
        label_trem4->setText(QApplication::translate("MainWindow", "T4", nullptr));
        label_trem5->setText(QApplication::translate("MainWindow", "T5", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
