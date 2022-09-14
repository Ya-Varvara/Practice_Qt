/********************************************************************************
** Form generated from reading UI file 'graphics.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRAPHICS_H
#define UI_GRAPHICS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Graphics
{
public:
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QPushButton *exit_button;

    void setupUi(QDialog *Graphics)
    {
        if (Graphics->objectName().isEmpty())
            Graphics->setObjectName(QString::fromUtf8("Graphics"));
        Graphics->resize(400, 300);
        verticalLayout = new QVBoxLayout(Graphics);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        exit_button = new QPushButton(Graphics);
        exit_button->setObjectName(QString::fromUtf8("exit_button"));

        verticalLayout->addWidget(exit_button);


        retranslateUi(Graphics);

        QMetaObject::connectSlotsByName(Graphics);
    } // setupUi

    void retranslateUi(QDialog *Graphics)
    {
        Graphics->setWindowTitle(QCoreApplication::translate("Graphics", "\320\223\321\200\320\260\321\204\320\270\320\272", nullptr));
        exit_button->setText(QCoreApplication::translate("Graphics", "\320\222\321\213\321\205\320\276\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Graphics: public Ui_Graphics {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAPHICS_H
