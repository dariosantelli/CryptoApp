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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Crypto
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEditPairEntry;
    QPushButton *pushButtonUpdate;
    QLabel *labelMessage;
    QGridLayout *gridLayout;
    QLabel *labelLow;
    QLabel *label_3;
    QLabel *labelCurrent;
    QLabel *label_2;
    QLabel *labelOpen;
    QLabel *label_4;
    QLabel *labelHigh;
    QLabel *label;
    QLabel *label_5;
    QLabel *labelVolume;
    QWidget *tab_2;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QLabel *label_6;
    QLineEdit *lineEditQuantity2;
    QLineEdit *lineEditTicker3;
    QLineEdit *lineEditTicker1;
    QLineEdit *lineEditQuantity1;
    QLineEdit *lineEditQuantity3;
    QLineEdit *lineEditTicker2;
    QLabel *labelValueTicker1;
    QLabel *labelValueTotal;
    QLabel *labelValueTicker3;
    QLabel *labelValueTicker2;
    QLabel *label_7;
    QLabel *label_9;
    QPushButton *pushButtonCalculate;
    QStatusBar *statusbar;
    QMenuBar *menubar;

    void setupUi(QMainWindow *Crypto)
    {
        if (Crypto->objectName().isEmpty())
            Crypto->setObjectName(QString::fromUtf8("Crypto"));
        Crypto->resize(413, 292);
        Crypto->setMinimumSize(QSize(413, 292));
        Crypto->setMaximumSize(QSize(413, 292));
        Crypto->setTabShape(QTabWidget::Rounded);
        centralwidget = new QWidget(Crypto);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 411, 251));
        tabWidget->setTabBarAutoHide(false);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        horizontalLayoutWidget = new QWidget(tab);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(0, 0, 401, 221));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(-1, 65, -1, 65);
        lineEditPairEntry = new QLineEdit(horizontalLayoutWidget);
        lineEditPairEntry->setObjectName(QString::fromUtf8("lineEditPairEntry"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEditPairEntry->sizePolicy().hasHeightForWidth());
        lineEditPairEntry->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(lineEditPairEntry);

        pushButtonUpdate = new QPushButton(horizontalLayoutWidget);
        pushButtonUpdate->setObjectName(QString::fromUtf8("pushButtonUpdate"));

        verticalLayout->addWidget(pushButtonUpdate);

        labelMessage = new QLabel(horizontalLayoutWidget);
        labelMessage->setObjectName(QString::fromUtf8("labelMessage"));
        labelMessage->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(labelMessage);


        horizontalLayout->addLayout(verticalLayout);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        labelLow = new QLabel(horizontalLayoutWidget);
        labelLow->setObjectName(QString::fromUtf8("labelLow"));
        QFont font;
        font.setFamily(QString::fromUtf8("8514oem"));
        labelLow->setFont(font);

        gridLayout->addWidget(labelLow, 2, 1, 1, 1);

        label_3 = new QLabel(horizontalLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Ebrima"));
        font1.setPointSize(11);
        font1.setBold(true);
        label_3->setFont(font1);
        label_3->setLayoutDirection(Qt::LeftToRight);

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        labelCurrent = new QLabel(horizontalLayoutWidget);
        labelCurrent->setObjectName(QString::fromUtf8("labelCurrent"));
        labelCurrent->setFont(font);

        gridLayout->addWidget(labelCurrent, 0, 1, 1, 1);

        label_2 = new QLabel(horizontalLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font1);
        label_2->setLayoutDirection(Qt::LeftToRight);

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        labelOpen = new QLabel(horizontalLayoutWidget);
        labelOpen->setObjectName(QString::fromUtf8("labelOpen"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("8514oem"));
        font2.setPointSize(12);
        labelOpen->setFont(font2);

        gridLayout->addWidget(labelOpen, 1, 1, 1, 1);

        label_4 = new QLabel(horizontalLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font1);
        label_4->setLayoutDirection(Qt::LeftToRight);

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        labelHigh = new QLabel(horizontalLayoutWidget);
        labelHigh->setObjectName(QString::fromUtf8("labelHigh"));
        labelHigh->setFont(font);

        gridLayout->addWidget(labelHigh, 3, 1, 1, 1);

        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font1);
        label->setLayoutDirection(Qt::LeftToRight);

        gridLayout->addWidget(label, 1, 0, 1, 1);

        label_5 = new QLabel(horizontalLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font1);
        label_5->setLayoutDirection(Qt::LeftToRight);

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        labelVolume = new QLabel(horizontalLayoutWidget);
        labelVolume->setObjectName(QString::fromUtf8("labelVolume"));
        labelVolume->setFont(font);

        gridLayout->addWidget(labelVolume, 4, 1, 1, 1);


        horizontalLayout->addLayout(gridLayout);

        horizontalLayout->setStretch(0, 3);
        horizontalLayout->setStretch(1, 7);
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        gridLayoutWidget_2 = new QWidget(tab_2);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(9, 9, 391, 211));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(gridLayoutWidget_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_2->addWidget(label_6, 0, 0, 1, 1);

        lineEditQuantity2 = new QLineEdit(gridLayoutWidget_2);
        lineEditQuantity2->setObjectName(QString::fromUtf8("lineEditQuantity2"));

        gridLayout_2->addWidget(lineEditQuantity2, 4, 1, 1, 1);

        lineEditTicker3 = new QLineEdit(gridLayoutWidget_2);
        lineEditTicker3->setObjectName(QString::fromUtf8("lineEditTicker3"));

        gridLayout_2->addWidget(lineEditTicker3, 6, 0, 1, 1);

        lineEditTicker1 = new QLineEdit(gridLayoutWidget_2);
        lineEditTicker1->setObjectName(QString::fromUtf8("lineEditTicker1"));

        gridLayout_2->addWidget(lineEditTicker1, 1, 0, 1, 1);

        lineEditQuantity1 = new QLineEdit(gridLayoutWidget_2);
        lineEditQuantity1->setObjectName(QString::fromUtf8("lineEditQuantity1"));

        gridLayout_2->addWidget(lineEditQuantity1, 1, 1, 1, 1);

        lineEditQuantity3 = new QLineEdit(gridLayoutWidget_2);
        lineEditQuantity3->setObjectName(QString::fromUtf8("lineEditQuantity3"));

        gridLayout_2->addWidget(lineEditQuantity3, 6, 1, 1, 1);

        lineEditTicker2 = new QLineEdit(gridLayoutWidget_2);
        lineEditTicker2->setObjectName(QString::fromUtf8("lineEditTicker2"));

        gridLayout_2->addWidget(lineEditTicker2, 4, 0, 1, 1);

        labelValueTicker1 = new QLabel(gridLayoutWidget_2);
        labelValueTicker1->setObjectName(QString::fromUtf8("labelValueTicker1"));

        gridLayout_2->addWidget(labelValueTicker1, 1, 2, 1, 1);

        labelValueTotal = new QLabel(gridLayoutWidget_2);
        labelValueTotal->setObjectName(QString::fromUtf8("labelValueTotal"));

        gridLayout_2->addWidget(labelValueTotal, 7, 2, 1, 1);

        labelValueTicker3 = new QLabel(gridLayoutWidget_2);
        labelValueTicker3->setObjectName(QString::fromUtf8("labelValueTicker3"));

        gridLayout_2->addWidget(labelValueTicker3, 6, 2, 1, 1);

        labelValueTicker2 = new QLabel(gridLayoutWidget_2);
        labelValueTicker2->setObjectName(QString::fromUtf8("labelValueTicker2"));

        gridLayout_2->addWidget(labelValueTicker2, 4, 2, 1, 1);

        label_7 = new QLabel(gridLayoutWidget_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_2->addWidget(label_7, 0, 1, 1, 1);

        label_9 = new QLabel(gridLayoutWidget_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_2->addWidget(label_9, 0, 2, 1, 1);

        pushButtonCalculate = new QPushButton(gridLayoutWidget_2);
        pushButtonCalculate->setObjectName(QString::fromUtf8("pushButtonCalculate"));

        gridLayout_2->addWidget(pushButtonCalculate, 7, 0, 1, 1);

        gridLayout_2->setRowStretch(0, 1);
        gridLayout_2->setRowStretch(1, 1);
        gridLayout_2->setRowStretch(2, 1);
        gridLayout_2->setRowStretch(3, 1);
        gridLayout_2->setRowStretch(4, 1);
        gridLayout_2->setRowStretch(5, 1);
        gridLayout_2->setRowStretch(6, 1);
        gridLayout_2->setRowStretch(7, 1);
        gridLayout_2->setColumnStretch(0, 2);
        gridLayout_2->setColumnStretch(1, 2);
        gridLayout_2->setColumnStretch(2, 3);
        tabWidget->addTab(tab_2, QString());
        Crypto->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(Crypto);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Crypto->setStatusBar(statusbar);
        menubar = new QMenuBar(Crypto);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 413, 21));
        Crypto->setMenuBar(menubar);

        retranslateUi(Crypto);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Crypto);
    } // setupUi

    void retranslateUi(QMainWindow *Crypto)
    {
        Crypto->setWindowTitle(QCoreApplication::translate("Crypto", "Crypto", nullptr));
        lineEditPairEntry->setText(QCoreApplication::translate("Crypto", "BTC-USD", nullptr));
        pushButtonUpdate->setText(QCoreApplication::translate("Crypto", "Update", nullptr));
        labelMessage->setText(QString());
        labelLow->setText(QString());
        label_3->setText(QCoreApplication::translate("Crypto", "24 Hour High:", nullptr));
        labelCurrent->setText(QString());
        label_2->setText(QCoreApplication::translate("Crypto", "Current Price:", nullptr));
        labelOpen->setText(QString());
        label_4->setText(QCoreApplication::translate("Crypto", "24 Hour Low:", nullptr));
        labelHigh->setText(QString());
        label->setText(QCoreApplication::translate("Crypto", "24 Hour Open:", nullptr));
        label_5->setText(QCoreApplication::translate("Crypto", "24 Hour Volume:", nullptr));
        labelVolume->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("Crypto", "Lookup", nullptr));
        label_6->setText(QCoreApplication::translate("Crypto", "Tickers:", nullptr));
        labelValueTicker1->setText(QString());
        labelValueTotal->setText(QString());
        labelValueTicker3->setText(QString());
        labelValueTicker2->setText(QString());
        label_7->setText(QCoreApplication::translate("Crypto", "Quantities:", nullptr));
        label_9->setText(QCoreApplication::translate("Crypto", "USD Value:", nullptr));
        pushButtonCalculate->setText(QCoreApplication::translate("Crypto", "Calculate", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("Crypto", "Portfolio Calculator", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Crypto: public Ui_Crypto {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CRYPTO_H
