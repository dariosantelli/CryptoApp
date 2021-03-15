/********************************************************************************
** Form generated from reading UI file 'crypto.ui'
**
** Created by: Qt User Interface Compiler version 6.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CRYPTO_H
#define UI_CRYPTO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Crypto
{
public:
    QWidget *centralwidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *label;
    QPushButton *pushButtonUpdate;
    QLabel *label_4;
    QLabel *label_3;
    QLabel *labelOpen;
    QLabel *labelClose;
    QLabel *labelHigh;
    QLabel *labelLow;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Crypto)
    {
        if (Crypto->objectName().isEmpty())
            Crypto->setObjectName(QString::fromUtf8("Crypto"));
        Crypto->resize(332, 206);
        centralwidget = new QWidget(Crypto);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(9, -1, 321, 161));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 1, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 1, 1, 1);

        pushButtonUpdate = new QPushButton(gridLayoutWidget);
        pushButtonUpdate->setObjectName(QString::fromUtf8("pushButtonUpdate"));

        gridLayout->addWidget(pushButtonUpdate, 1, 0, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 1, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 1, 1, 1);

        labelOpen = new QLabel(gridLayoutWidget);
        labelOpen->setObjectName(QString::fromUtf8("labelOpen"));

        gridLayout->addWidget(labelOpen, 0, 2, 1, 1);

        labelClose = new QLabel(gridLayoutWidget);
        labelClose->setObjectName(QString::fromUtf8("labelClose"));

        gridLayout->addWidget(labelClose, 1, 2, 1, 1);

        labelHigh = new QLabel(gridLayoutWidget);
        labelHigh->setObjectName(QString::fromUtf8("labelHigh"));

        gridLayout->addWidget(labelHigh, 2, 2, 1, 1);

        labelLow = new QLabel(gridLayoutWidget);
        labelLow->setObjectName(QString::fromUtf8("labelLow"));

        gridLayout->addWidget(labelLow, 3, 2, 1, 1);

        Crypto->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Crypto);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 332, 21));
        Crypto->setMenuBar(menubar);
        statusbar = new QStatusBar(Crypto);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Crypto->setStatusBar(statusbar);

        retranslateUi(Crypto);

        QMetaObject::connectSlotsByName(Crypto);
    } // setupUi

    void retranslateUi(QMainWindow *Crypto)
    {
        Crypto->setWindowTitle(QCoreApplication::translate("Crypto", "Crypto", nullptr));
        label_2->setText(QCoreApplication::translate("Crypto", "Close:", nullptr));
        label->setText(QCoreApplication::translate("Crypto", "Open:", nullptr));
        pushButtonUpdate->setText(QCoreApplication::translate("Crypto", "Update", nullptr));
        label_4->setText(QCoreApplication::translate("Crypto", "Low:", nullptr));
        label_3->setText(QCoreApplication::translate("Crypto", "High:", nullptr));
        labelOpen->setText(QCoreApplication::translate("Crypto", "TextLabel", nullptr));
        labelClose->setText(QCoreApplication::translate("Crypto", "TextLabel", nullptr));
        labelHigh->setText(QCoreApplication::translate("Crypto", "TextLabel", nullptr));
        labelLow->setText(QCoreApplication::translate("Crypto", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Crypto: public Ui_Crypto {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CRYPTO_H
