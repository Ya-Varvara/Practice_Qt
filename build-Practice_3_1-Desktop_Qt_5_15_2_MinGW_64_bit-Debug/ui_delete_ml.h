/********************************************************************************
** Form generated from reading UI file 'delete_ml.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETE_ML_H
#define UI_DELETE_ML_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Delete_ml
{
public:
    QVBoxLayout *verticalLayout;
    QTableWidget *table_of_lines;
    QSpacerItem *verticalSpacer_2;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *id_line;
    QLabel *label_2;
    QLineEdit *name_line;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *Exit_button;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *Delete_button;
    QSpacerItem *horizontalSpacer_5;

    void setupUi(QDialog *Delete_ml)
    {
        if (Delete_ml->objectName().isEmpty())
            Delete_ml->setObjectName(QString::fromUtf8("Delete_ml"));
        Delete_ml->resize(353, 253);
        verticalLayout = new QVBoxLayout(Delete_ml);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        table_of_lines = new QTableWidget(Delete_ml);
        table_of_lines->setObjectName(QString::fromUtf8("table_of_lines"));

        verticalLayout->addWidget(table_of_lines);

        verticalSpacer_2 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 2, 1, 1);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(Delete_ml);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        id_line = new QLineEdit(Delete_ml);
        id_line->setObjectName(QString::fromUtf8("id_line"));

        formLayout->setWidget(0, QFormLayout::FieldRole, id_line);

        label_2 = new QLabel(Delete_ml);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_2);

        name_line = new QLineEdit(Delete_ml);
        name_line->setObjectName(QString::fromUtf8("name_line"));
        name_line->setMinimumSize(QSize(120, 0));

        formLayout->setWidget(2, QFormLayout::FieldRole, name_line);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(1, QFormLayout::FieldRole, verticalSpacer);


        gridLayout->addLayout(formLayout, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        verticalSpacer_3 = new QSpacerItem(20, 1, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        Exit_button = new QPushButton(Delete_ml);
        Exit_button->setObjectName(QString::fromUtf8("Exit_button"));
        Exit_button->setMinimumSize(QSize(90, 0));

        horizontalLayout->addWidget(Exit_button);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        Delete_button = new QPushButton(Delete_ml);
        Delete_button->setObjectName(QString::fromUtf8("Delete_button"));
        Delete_button->setMinimumSize(QSize(90, 0));

        horizontalLayout->addWidget(Delete_button);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(Delete_ml);

        QMetaObject::connectSlotsByName(Delete_ml);
    } // setupUi

    void retranslateUi(QDialog *Delete_ml)
    {
        Delete_ml->setWindowTitle(QCoreApplication::translate("Delete_ml", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Delete_ml", "\320\235\320\276\320\274\320\265\321\200 \320\273\320\270\320\275\320\270\320\270", nullptr));
        label_2->setText(QCoreApplication::translate("Delete_ml", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \320\273\320\270\320\275\320\270\320\270", nullptr));
        Exit_button->setText(QCoreApplication::translate("Delete_ml", "\320\222\321\213\321\205\320\276\320\264", nullptr));
        Delete_button->setText(QCoreApplication::translate("Delete_ml", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Delete_ml: public Ui_Delete_ml {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETE_ML_H
