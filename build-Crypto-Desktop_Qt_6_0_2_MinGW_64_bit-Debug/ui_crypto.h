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
    QLabel *label_2;
    QLabel *label;
    QLabel *labelOpen;
    QLabel *labelClose;
    QLabel *labelHigh;
    QPushButton *pushButtonUpdate;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *labelLow;
    QLineEdit *lineEditPairEntry;
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
        gridLayoutWidget->setGeometry(QRect(0, 0, 401, 221));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 1, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 1, 1, 1);

        labelOpen = new QLabel(gridLayoutWidget);
        labelOpen->setObjectName(QString::fromUtf8("labelOpen"));
        QFont font;
        font.setPointSize(12);
        labelOpen->setFont(font);

        gridLayout->addWidget(labelOpen, 0, 2, 1, 1);

        labelClose = new QLabel(gridLayoutWidget);
        labelClose->setObjectName(QString::fromUtf8("labelClose"));

        gridLayout->addWidget(labelClose, 1, 2, 1, 1);

        labelHigh = new QLabel(gridLayoutWidget);
        labelHigh->setObjectName(QString::fromUtf8("labelHigh"));

        gridLayout->addWidget(labelHigh, 2, 2, 1, 1);

        pushButtonUpdate = new QPushButton(gridLayoutWidget);
        pushButtonUpdate->setObjectName(QString::fromUtf8("pushButtonUpdate"));

        gridLayout->addWidget(pushButtonUpdate, 1, 0, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 1, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 1, 1, 1);

        labelLow = new QLabel(gridLayoutWidget);
        labelLow->setObjectName(QString::fromUtf8("labelLow"));

        gridLayout->addWidget(labelLow, 3, 2, 1, 1);

        lineEditPairEntry = new QLineEdit(gridLayoutWidget);
        lineEditPairEntry->setObjectName(QString::fromUtf8("lineEditPairEntry"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEditPairEntry->sizePolicy().hasHeightForWidth());
        lineEditPairEntry->setSizePolicy(sizePolicy);

        gridLayout->addWidget(lineEditPairEntry, 0, 0, 1, 1);

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
        label_2->setText(QCoreApplication::translate("Crypto", "Close:", nullptr));
        label->setText(QCoreApplication::translate("Crypto", "Open:", nullptr));
        labelOpen->setText(QCoreApplication::translate("Crypto", "TextLabel", nullptr));
        labelClose->setText(QCoreApplication::translate("Crypto", "TextLabel", nullptr));
        labelHigh->setText(QCoreApplication::translate("Crypto", "TextLabel", nullptr));
        pushButtonUpdate->setText(QCoreApplication::translate("Crypto", "Update", nullptr));
        label_3->setText(QCoreApplication::translate("Crypto", "High:", nullptr));
        label_4->setText(QCoreApplication::translate("Crypto", "Low:", nullptr));
        labelLow->setText(QCoreApplication::translate("Crypto", "TextLabel", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("Crypto", "Lookup", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("Crypto", "Tab 2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Crypto: public Ui_Crypto {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CRYPTO_H
