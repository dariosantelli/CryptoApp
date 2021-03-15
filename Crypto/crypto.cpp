#include "crypto.h"
#include "ui_crypto.h"

Crypto::Crypto(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Crypto)
{
    ui->setupUi(this);

    manager = new QNetworkAccessManager();
}

Crypto::~Crypto()
{
    delete ui;
    delete manager;
}

std::map<std::string, QString> Crypto::get24HourInfo()
{

    QNetworkReply* reply = qobject_cast<QNetworkReply*> (QObject::sender());

    std::map<std::string, QString> Data24Hour;
    parse24HourInfo(reply, Data24Hour);

    for (auto item: Data24Hour)
    {
        std::cout << item.first << std::endl;
        qDebug() << item.second;
    }

    return Data24Hour;
}

void Crypto::parse24HourInfo(QNetworkReply* reply, std::map<std::string, QString> &parsedData)
{

    QString answer = reply->readAll();

    QJsonDocument jsonDoc = QJsonDocument::fromJson(answer.toUtf8());
    QJsonObject jsonObj = jsonDoc.object();

    parsedData["low"] = jsonObj["low"].toString();
    parsedData["high"] = jsonObj["high"].toString();
    parsedData["open"] = jsonObj["open"].toString();
    parsedData["last"] = jsonObj["last"].toString();

    qDebug() << answer;
}

void Crypto::updateLabels()
{
    request.setUrl(QUrl("https://api.pro.coinbase.com/products/BTC-USD/stats"));
    manager->get(request);

}


void Crypto::on_pushButtonUpdate_clicked()
{
    request.setUrl(QUrl("https://api.pro.coinbase.com/products/BTC-USD/stats"));
    QNetworkReply *reply = manager->get(request);
    connect(reply, SIGNAL(finished()), this, SLOT(get24HourInfo()));
}
