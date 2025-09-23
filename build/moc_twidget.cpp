/****************************************************************************
** Meta object code from reading C++ file 'twidget.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../twidget.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'twidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.9.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN7TWidgetE_t {};
} // unnamed namespace

template <> constexpr inline auto TWidget::qt_create_metaobjectdata<qt_meta_tag_ZN7TWidgetE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "TWidget",
        "Clicked",
        "",
        "pos",
        "rightClicked",
        "doubleClicked",
        "ctrlSelected",
        "resizing",
        "resizingDone",
        "isHiden",
        "isMoving",
        "isShown",
        "previousPressed",
        "nextPressed",
        "focusIn",
        "focusOut",
        "debugPressed"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'Clicked'
        QtMocHelpers::SignalData<void(const QPoint &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QPoint, 3 },
        }}),
        // Signal 'rightClicked'
        QtMocHelpers::SignalData<void(const QPoint &)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QPoint, 3 },
        }}),
        // Signal 'doubleClicked'
        QtMocHelpers::SignalData<void(const QPoint &)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QPoint, 3 },
        }}),
        // Signal 'ctrlSelected'
        QtMocHelpers::SignalData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'resizing'
        QtMocHelpers::SignalData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'resizingDone'
        QtMocHelpers::SignalData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'isHiden'
        QtMocHelpers::SignalData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'isMoving'
        QtMocHelpers::SignalData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'isShown'
        QtMocHelpers::SignalData<void()>(11, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'previousPressed'
        QtMocHelpers::SignalData<void()>(12, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'nextPressed'
        QtMocHelpers::SignalData<void()>(13, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'focusIn'
        QtMocHelpers::SignalData<void()>(14, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'focusOut'
        QtMocHelpers::SignalData<void()>(15, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'debugPressed'
        QtMocHelpers::SignalData<void()>(16, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<TWidget, qt_meta_tag_ZN7TWidgetE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject TWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7TWidgetE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7TWidgetE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN7TWidgetE_t>.metaTypes,
    nullptr
} };

void TWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<TWidget *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->Clicked((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 1: _t->rightClicked((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 2: _t->doubleClicked((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 3: _t->ctrlSelected(); break;
        case 4: _t->resizing(); break;
        case 5: _t->resizingDone(); break;
        case 6: _t->isHiden(); break;
        case 7: _t->isMoving(); break;
        case 8: _t->isShown(); break;
        case 9: _t->previousPressed(); break;
        case 10: _t->nextPressed(); break;
        case 11: _t->focusIn(); break;
        case 12: _t->focusOut(); break;
        case 13: _t->debugPressed(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (TWidget::*)(const QPoint & )>(_a, &TWidget::Clicked, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (TWidget::*)(const QPoint & )>(_a, &TWidget::rightClicked, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (TWidget::*)(const QPoint & )>(_a, &TWidget::doubleClicked, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (TWidget::*)()>(_a, &TWidget::ctrlSelected, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (TWidget::*)()>(_a, &TWidget::resizing, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (TWidget::*)()>(_a, &TWidget::resizingDone, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (TWidget::*)()>(_a, &TWidget::isHiden, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (TWidget::*)()>(_a, &TWidget::isMoving, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (TWidget::*)()>(_a, &TWidget::isShown, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (TWidget::*)()>(_a, &TWidget::previousPressed, 9))
            return;
        if (QtMocHelpers::indexOfMethod<void (TWidget::*)()>(_a, &TWidget::nextPressed, 10))
            return;
        if (QtMocHelpers::indexOfMethod<void (TWidget::*)()>(_a, &TWidget::focusIn, 11))
            return;
        if (QtMocHelpers::indexOfMethod<void (TWidget::*)()>(_a, &TWidget::focusOut, 12))
            return;
        if (QtMocHelpers::indexOfMethod<void (TWidget::*)()>(_a, &TWidget::debugPressed, 13))
            return;
    }
}

const QMetaObject *TWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7TWidgetE_t>.strings))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int TWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void TWidget::Clicked(const QPoint & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void TWidget::rightClicked(const QPoint & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void TWidget::doubleClicked(const QPoint & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void TWidget::ctrlSelected()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void TWidget::resizing()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void TWidget::resizingDone()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void TWidget::isHiden()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void TWidget::isMoving()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void TWidget::isShown()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void TWidget::previousPressed()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void TWidget::nextPressed()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void TWidget::focusIn()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void TWidget::focusOut()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void TWidget::debugPressed()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}
QT_WARNING_POP
