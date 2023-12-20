/********************************************************************************
** Form generated from reading UI file 'analogclock.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ANALOGCLOCK_H
#define UI_ANALOGCLOCK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AnalogClock
{
public:

    void setupUi(QWidget *AnalogClock)
    {
        if (AnalogClock->objectName().isEmpty())
            AnalogClock->setObjectName("AnalogClock");
        AnalogClock->resize(800, 600);

        retranslateUi(AnalogClock);

        QMetaObject::connectSlotsByName(AnalogClock);
    } // setupUi

    void retranslateUi(QWidget *AnalogClock)
    {
        AnalogClock->setWindowTitle(QCoreApplication::translate("AnalogClock", "AnalogClock", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AnalogClock: public Ui_AnalogClock {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANALOGCLOCK_H
