/********************************************************************************
** Form generated from reading UI file 'add_ml.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_ML_H
#define UI_ADD_ML_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_add_ml
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *id_line;
    QLabel *label_2;
    QLineEdit *name_line;
    QLabel *label_4;
    QLineEdit *length_line;
    QLabel *label_3;
    QLineEdit *num_of_stations_line;
    QLabel *label_5;
    QLineEdit *year_line;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *verticalSpacer_5;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *Exit_button;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *Add_button;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QDialog *add_ml)
    {
        if (add_ml->objectName().isEmpty())
            add_ml->setObjectName(QString::fromUtf8("add_ml"));
        add_ml->resize(381, 246);
        verticalLayout = new QVBoxLayout(add_ml);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(add_ml);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        id_line = new QLineEdit(add_ml);
        id_line->setObjectName(QString::fromUtf8("id_line"));

        formLayout->setWidget(0, QFormLayout::FieldRole, id_line);

        label_2 = new QLabel(add_ml);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_2);

        name_line = new QLineEdit(add_ml);
        name_line->setObjectName(QString::fromUtf8("name_line"));

        formLayout->setWidget(2, QFormLayout::FieldRole, name_line);

        label_4 = new QLabel(add_ml);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_4);

        length_line = new QLineEdit(add_ml);
        length_line->setObjectName(QString::fromUtf8("length_line"));

        formLayout->setWidget(4, QFormLayout::FieldRole, length_line);

        label_3 = new QLabel(add_ml);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_3);

        num_of_stations_line = new QLineEdit(add_ml);
        num_of_stations_line->setObjectName(QString::fromUtf8("num_of_stations_line"));

        formLayout->setWidget(6, QFormLayout::FieldRole, num_of_stations_line);

        label_5 = new QLabel(add_ml);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(8, QFormLayout::LabelRole, label_5);

        year_line = new QLineEdit(add_ml);
        year_line->setObjectName(QString::fromUtf8("year_line"));

        formLayout->setWidget(8, QFormLayout::FieldRole, year_line);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(5, QFormLayout::FieldRole, verticalSpacer);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(3, QFormLayout::FieldRole, verticalSpacer_2);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(1, QFormLayout::FieldRole, verticalSpacer_3);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(7, QFormLayout::FieldRole, verticalSpacer_4);


        verticalLayout->addLayout(formLayout);

        verticalSpacer_5 = new QSpacerItem(20, 18, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_5);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        Exit_button = new QPushButton(add_ml);
        Exit_button->setObjectName(QString::fromUtf8("Exit_button"));

        horizontalLayout->addWidget(Exit_button);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        Add_button = new QPushButton(add_ml);
        Add_button->setObjectName(QString::fromUtf8("Add_button"));

        horizontalLayout->addWidget(Add_button);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(add_ml);

        QMetaObject::connectSlotsByName(add_ml);
    } // setupUi

    void retranslateUi(QDialog *add_ml)
    {
        add_ml->setWindowTitle(QCoreApplication::translate("add_ml", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("add_ml", "\320\235\320\276\320\274\320\265\321\200 \320\273\320\270\320\275\320\270\320\270", nullptr));
        label_2->setText(QCoreApplication::translate("add_ml", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \320\273\320\270\320\275\320\270\320\270", nullptr));
        label_4->setText(QCoreApplication::translate("add_ml", "\320\224\320\273\320\270\320\275\320\260 \320\273\320\270\320\275\320\270\320\270 (\320\272\320\274)", nullptr));
        label_3->setText(QCoreApplication::translate("add_ml", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \321\201\321\202\320\260\320\275\321\206\320\270\320\271", nullptr));
        label_5->setText(QCoreApplication::translate("add_ml", "\320\223\320\276\320\264 \320\276\321\202\320\272\321\200\321\213\321\202\320\270\321\217", nullptr));
        Exit_button->setText(QCoreApplication::translate("add_ml", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214", nullptr));
        Add_button->setText(QCoreApplication::translate("add_ml", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class add_ml: public Ui_add_ml {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_ML_H
