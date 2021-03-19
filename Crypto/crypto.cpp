#include "crypto.h"
#include "ui_crypto.h"

Crypto::Crypto(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Crypto)
{
    ui->setupUi(this);

    manager = new QNetworkAccessManager();

    getCoinbaseProducts();
}

Crypto::~Crypto()
{
    delete ui;
    delete manager;
}

//Create an unordered set of all valid currency pairs from coinbase
void Crypto::getCoinbaseProducts()
{
    request.setUrl(QUrl("https://api.pro.coinbase.com/products"));
    QNetworkReply *reply = manager->get(request);

    connect(reply, SIGNAL(finished()), this, SLOT(parseCoinbaseProducts()));
}

//Helper function of getCoinbaseProducts
//takes coinbase products reply and inserts
//each currency pair into an unordered set
void Crypto::parseCoinbaseProducts()
{
    QNetworkReply* reply = qobject_cast<QNetworkReply*> (QObject::sender());
    QString answer = reply->readAll();

    QJsonDocument jsonDoc = QJsonDocument::fromJson(answer.toUtf8());
    QJsonArray jsonArr = jsonDoc.array();

    for (auto pair: jsonArr) {
        QJsonObject element = pair.toObject();
        products.insert(element["id"].toString());
    }
}


void Crypto::updateLabels()
{
    //take string in from line edit as parameter
    QString pair;
    pair = ui->lineEditPairEntry->text();

    if (products.find(pair) == products.end()) { //if pair is NOT valid
        ui->labelCurrent->setText("N/A");
        ui->labelOpen->setText("N/A");
        ui->labelLow->setText("N/A");
        ui->labelHigh->setText("N/A");
        ui->labelMessage->setText("Invalid Pair");
    } else { //pair is valid
        ui->labelMessage->setText("");
        QString URL = "https://api.pro.coinbase.com/products/" + pair + "/stats";
        request.setUrl(QUrl(URL));
        QNetworkReply *reply = manager->get(request);

        connect(reply, SIGNAL(finished()), this, SLOT(parse24HourInfo()),  Qt::DirectConnection);
    }
}

void Crypto::parse24HourInfo()
{
    QNetworkReply* reply = qobject_cast<QNetworkReply*> (QObject::sender());
    QString answer = reply->readAll();

    QJsonDocument jsonDoc = QJsonDocument::fromJson(answer.toUtf8());
    QJsonObject jsonObj = jsonDoc.object();

    Data24Hour["low"] = jsonObj["low"].toString();
    Data24Hour["high"] = jsonObj["high"].toString();
    Data24Hour["open"] = jsonObj["open"].toString();
    Data24Hour["last"] = jsonObj["last"].toString();

    ui->labelCurrent->setText(Data24Hour["last"]);
    ui->labelOpen->setText(Data24Hour["open"]);
    ui->labelLow->setText(Data24Hour["low"]);
    ui->labelHigh->setText(Data24Hour["high"]);
}

void Crypto::on_pushButtonUpdate_clicked()
{
    getCoinbaseProducts();
    updateLabels();
}
