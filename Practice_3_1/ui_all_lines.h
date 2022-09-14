/********************************************************************************
** Form generated from reading UI file 'all_lines.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALL_LINES_H
#define UI_ALL_LINES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_All_lines
{
public:
    QVBoxLayout *verticalLayout;
    QTableWidget *Table_of_lines;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *Exit_button;

    void setupUi(QDialog *All_lines)
    {
        if (All_lines->objectName().isEmpty())
            All_lines->setObjectName(QString::fromUtf8("All_lines"));
        All_lines->resize(815, 320);
        All_lines->setMinimumSize(QSize(815, 320));
        verticalLayout = new QVBoxLayout(All_lines);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        Table_of_lines = new QTableWidget(All_lines);
        if (Table_of_lines->columnCount() < 5)
            Table_of_lines->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        Table_of_lines->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        Table_of_lines->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        Table_of_lines->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        Table_of_lines->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        Table_of_lines->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        Table_of_lines->setObjectName(QString::fromUtf8("Table_of_lines"));
        Table_of_lines->setEnabled(true);
        Table_of_lines->setMinimumSize(QSize(550, 250));
        Table_of_lines->setColumnCount(5);
        Table_of_lines->horizontalHeader()->setCascadingSectionResizes(false);
        Table_of_lines->verticalHeader()->setVisible(false);

        verticalLayout->addWidget(Table_of_lines);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(408, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        Exit_button = new QPushButton(All_lines);
        Exit_button->setObjectName(QString::fromUtf8("Exit_button"));

        horizontalLayout->addWidget(Exit_button);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(All_lines);

        QMetaObject::connectSlotsByName(All_lines);
    } // setupUi

    void retranslateUi(QDialog *All_lines)
    {
        All_lines->setWindowTitle(QCoreApplication::translate("All_lines", "\320\222\321\201\320\265 \320\273\320\270\320\275\320\270\320\270, \320\276\321\202\321\201\320\276\321\200\321\202\320\270\321\200\320\276\320\262\320\260\320\275\320\275\321\213\320\265 \320\277\320\276 \320\264\320\273\320\270\320\275\320\265", nullptr));
        QTableWidgetItem *___qtablewidgetitem = Table_of_lines->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("All_lines", "\320\235\320\276\320\274\320\265\321\200", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = Table_of_lines->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("All_lines", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \320\273\320\270\320\275\320\270\320\270", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = Table_of_lines->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("All_lines", "\320\224\320\273\320\270\320\275\320\260 \320\273\320\270\320\275\320\270\320\270", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = Table_of_lines->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("All_lines", "\320\232\320\276\320\273-\320\262\320\276 \321\201\321\202\320\260\320\275\321\206\320\270\320\271", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = Table_of_lines->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("All_lines", "\320\223\320\276\320\264 \320\276\321\202\320\272\321\200\321\213\321\202\320\270\321\217", nullptr));
        Exit_button->setText(QCoreApplication::translate("All_lines", "\320\222\321\213\321\205\320\276\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class All_lines: public Ui_All_lines {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALL_LINES_H
