#include "crypto.h"
#include "ui_crypto.h"

Crypto::Crypto(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Crypto)
{
    ui->setupUi(this);

    manager = new QNetworkAccessManager();
    updateLabels();
    getCoinbaseProducts();
    getCoinbaseProducts();
}

Crypto::~Crypto()
{
    delete ui;
    delete manager;
}

void Crypto::getCoinbaseProducts()
{
    request.setUrl(QUrl("https://api.pro.coinbase.com/products"));
    QNetworkReply *reply = manager->get(request);
    connect(reply, SIGNAL(finished()), this, SLOT(parseCoinbaseProducts()));
}

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

void Crypto::get24HourInfo()
{
    //take string in from line edit as parameter
    QString pair;
    pair = ui->lineEditPairEntry->text();

    auto search = products.find(pair);
    std::cout << search;

    //if (products.find(pair))
    //qDebug() << products.find(pair)
    //assemble url from that pair
    //check if request is valid
        //if not display error of some sort, don't crash

    request.setUrl(QUrl("https://api.pro.coinbase.com/products/BTC-USD/stats"));
    QNetworkReply *reply = manager->get(request);

    connect(reply, SIGNAL(finished()), this, SLOT(parse24HourInfo()));
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
}

void Crypto::updateLabels()
{
    get24HourInfo();
    ui->labelLow->setText(Data24Hour["low"]);
    ui->labelHigh->setText(Data24Hour["high"]);
    ui->labelOpen->setText(Data24Hour["open"]);
    ui->labelClose->setText(Data24Hour["last"]);
}


void Crypto::on_pushButtonUpdate_clicked()
{
    updateLabels();
    getCoinbaseProducts();
    qDebug() << products.size();
}
