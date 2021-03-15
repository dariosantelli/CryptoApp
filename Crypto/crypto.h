#ifndef CRYPTO_H
#define CRYPTO_H

#include <QMainWindow>
#include <QJsonDocument>
#include <QJsonObject>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <iostream>

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
    void on_pushButtonUpdate_clicked();
    void updateLabels();
    std::map<std::string, QString> get24HourInfo();
    void parse24HourInfo(QNetworkReply* reply, std::map<std::string, QString> &parsedData);

private:
    Ui::Crypto *ui;
    QNetworkAccessManager *manager;
    QNetworkRequest request;
};
#endif // CRYPTO_H
