#ifndef CRYPTO_H
#define CRYPTO_H

#include <QMainWindow>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <iostream>
#include <typeinfo>
#include <unordered_set>
#include <windows.h>


QT_BEGIN_NAMESPACE
namespace Ui { class Crypto; }
QT_END_NAMESPACE

class Crypto : public QMainWindow
{
    Q_OBJECT

public:
    Crypto(QWidget *parent = nullptr);
    ~Crypto();

private slots:
    void getCoinbaseProducts();
    void parseCoinbaseProducts();
    void on_pushButtonUpdate_clicked();
    void updateLabels();
    void parse24HourInfo();
    //void calculatePortfolio();
    //double getTickerValue(QString ticker);
    //void on_pushButtonCalculate_clicked();

private:
    Ui::Crypto *ui;
    QNetworkAccessManager *manager;
    QNetworkRequest request;
    std::map<std::string, QString> Data24Hour;
    std::unordered_set<QString> products;
};
#endif // CRYPTO_H
