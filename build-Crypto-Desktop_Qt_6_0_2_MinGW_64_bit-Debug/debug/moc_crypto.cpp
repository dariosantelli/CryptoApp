/****************************************************************************
** Meta object code from reading C++ file 'crypto.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.0.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Crypto/crypto.h"
#include <QtNetwork/QSslError>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'crypto.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.0.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Crypto_t {
    const uint offsetsAndSize[22];
    char stringdata0[172];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_Crypto_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_Crypto_t qt_meta_stringdata_Crypto = {
    {
QT_MOC_LITERAL(0, 6), // "Crypto"
QT_MOC_LITERAL(7, 27), // "on_pushButtonUpdate_clicked"
QT_MOC_LITERAL(35, 0), // ""
QT_MOC_LITERAL(36, 12), // "updateLabels"
QT_MOC_LITERAL(49, 13), // "get24HourInfo"
QT_MOC_LITERAL(63, 29), // "std::map<std::string,QString>"
QT_MOC_LITERAL(93, 15), // "parse24HourInfo"
QT_MOC_LITERAL(109, 14), // "QNetworkReply*"
QT_MOC_LITERAL(124, 5), // "reply"
QT_MOC_LITERAL(130, 30), // "std::map<std::string,QString>&"
QT_MOC_LITERAL(161, 10) // "parsedData"

    },
    "Crypto\0on_pushButtonUpdate_clicked\0\0"
    "updateLabels\0get24HourInfo\0"
    "std::map<std::string,QString>\0"
    "parse24HourInfo\0QNetworkReply*\0reply\0"
    "std::map<std::string,QString>&\0"
    "parsedData"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Crypto[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   38,    2, 0x08,    0 /* Private */,
       3,    0,   39,    2, 0x08,    1 /* Private */,
       4,    0,   40,    2, 0x08,    2 /* Private */,
       6,    2,   41,    2, 0x08,    3 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    0x80000000 | 5,
    QMetaType::Void, 0x80000000 | 7, 0x80000000 | 9,    8,   10,

       0        // eod
};

void Crypto::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Crypto *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_pushButtonUpdate_clicked(); break;
        case 1: _t->updateLabels(); break;
        case 2: { std::map<std::string,QString> _r = _t->get24HourInfo();
            if (_a[0]) *reinterpret_cast< std::map<std::string,QString>*>(_a[0]) = std::move(_r); }  break;
        case 3: _t->parse24HourInfo((*reinterpret_cast< QNetworkReply*(*)>(_a[1])),(*reinterpret_cast< std::map<std::string,QString>(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QNetworkReply* >(); break;
            }
            break;
        }
    }
}

const QMetaObject Crypto::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_Crypto.offsetsAndSize,
    qt_meta_data_Crypto,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_Crypto_t

, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<std::map<std::string,QString>, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QNetworkReply *, std::false_type>, QtPrivate::TypeAndForceComplete<std::map<std::string,QString> &, std::false_type>


>,
    nullptr
} };


const QMetaObject *Crypto::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Crypto::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Crypto.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Crypto::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
