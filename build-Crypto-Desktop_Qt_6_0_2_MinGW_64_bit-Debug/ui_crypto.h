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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Crypto
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButtonUpdate;
    QLineEdit *lineEditPairEntry;
    QLabel *labelLow;
    QLabel *label_4;
    QLabel *label_3;
    QLabel *labelHigh;
    QLabel *labelMessage;
    QLabel *label_2;
    QLabel *labelOpen;
    QLabel *labelCurrent;
    QLabel *label;
    QWidget *tab_2;
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
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayoutWidget = new QWidget(tab);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(0, 50, 401, 131));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButtonUpdate = new QPushButton(gridLayoutWidget);
        pushButtonUpdate->setObjectName(QString::fromUtf8("pushButtonUpdate"));

        gridLayout->addWidget(pushButtonUpdate, 2, 0, 1, 1);

        lineEditPairEntry = new QLineEdit(gridLayoutWidget);
        lineEditPairEntry->setObjectName(QString::fromUtf8("lineEditPairEntry"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEditPairEntry->sizePolicy().hasHeightForWidth());
        lineEditPairEntry->setSizePolicy(sizePolicy);

        gridLayout->addWidget(lineEditPairEntry, 1, 0, 1, 1);

        labelLow = new QLabel(gridLayoutWidget);
        labelLow->setObjectName(QString::fromUtf8("labelLow"));
        QFont font;
        font.setFamily(QString::fromUtf8("8514oem"));
        labelLow->setFont(font);

        gridLayout->addWidget(labelLow, 2, 2, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Ebrima"));
        font1.setPointSize(11);
        font1.setBold(true);
        label_4->setFont(font1);
        label_4->setLayoutDirection(Qt::LeftToRight);

        gridLayout->addWidget(label_4, 2, 1, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font1);
        label_3->setLayoutDirection(Qt::LeftToRight);

        gridLayout->addWidget(label_3, 3, 1, 1, 1);

        labelHigh = new QLabel(gridLayoutWidget);
        labelHigh->setObjectName(QString::fromUtf8("labelHigh"));
        labelHigh->setFont(font);

        gridLayout->addWidget(labelHigh, 3, 2, 1, 1);

        labelMessage = new QLabel(gridLayoutWidget);
        labelMessage->setObjectName(QString::fromUtf8("labelMessage"));
        labelMessage->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(labelMessage, 3, 0, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font1);
        label_2->setLayoutDirection(Qt::LeftToRight);

        gridLayout->addWidget(label_2, 0, 1, 1, 1);

        labelOpen = new QLabel(gridLayoutWidget);
        labelOpen->setObjectName(QString::fromUtf8("labelOpen"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("8514oem"));
        font2.setPointSize(12);
        labelOpen->setFont(font2);

        gridLayout->addWidget(labelOpen, 1, 2, 1, 1);

        labelCurrent = new QLabel(gridLayoutWidget);
        labelCurrent->setObjectName(QString::fromUtf8("labelCurrent"));
        labelCurrent->setFont(font);

        gridLayout->addWidget(labelCurrent, 0, 2, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font1);
        label->setLayoutDirection(Qt::LeftToRight);

        gridLayout->addWidget(label, 1, 1, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
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

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Crypto);
    } // setupUi

    void retranslateUi(QMainWindow *Crypto)
    {
        Crypto->setWindowTitle(QCoreApplication::translate("Crypto", "Crypto", nullptr));
        pushButtonUpdate->setText(QCoreApplication::translate("Crypto", "Update", nullptr));
        lineEditPairEntry->setText(QCoreApplication::translate("Crypto", "BTC-USD", nullptr));
        labelLow->setText(QString());
        label_4->setText(QCoreApplication::translate("Crypto", "24 Hour Low:", nullptr));
        label_3->setText(QCoreApplication::translate("Crypto", "24 Hour High:", nullptr));
        labelHigh->setText(QString());
        labelMessage->setText(QString());
        label_2->setText(QCoreApplication::translate("Crypto", "Current Price:", nullptr));
        labelOpen->setText(QString());
        labelCurrent->setText(QString());
        label->setText(QCoreApplication::translate("Crypto", "24 Hour Open:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("Crypto", "Lookup", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("Crypto", "Tab 2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Crypto: public Ui_Crypto {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CRYPTO_H
