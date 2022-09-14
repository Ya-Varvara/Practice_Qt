/********************************************************************************
** Form generated from reading UI file 'lines_by_year.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LINES_BY_YEAR_H
#define UI_LINES_BY_YEAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_lines_by_year
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label;
    QLineEdit *year_line;
    QPushButton *Find_button;
    QSpacerItem *horizontalSpacer_2;
    QTableWidget *table_of_lines;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *Exit_button;

    void setupUi(QDialog *lines_by_year)
    {
        if (lines_by_year->objectName().isEmpty())
            lines_by_year->setObjectName(QString::fromUtf8("lines_by_year"));
        lines_by_year->resize(815, 350);
        lines_by_year->setMinimumSize(QSize(815, 350));
        verticalLayout = new QVBoxLayout(lines_by_year);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        label = new QLabel(lines_by_year);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        year_line = new QLineEdit(lines_by_year);
        year_line->setObjectName(QString::fromUtf8("year_line"));

        horizontalLayout->addWidget(year_line);

        Find_button = new QPushButton(lines_by_year);
        Find_button->setObjectName(QString::fromUtf8("Find_button"));

        horizontalLayout->addWidget(Find_button);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        table_of_lines = new QTableWidget(lines_by_year);
        if (table_of_lines->columnCount() < 5)
            table_of_lines->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        table_of_lines->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        table_of_lines->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        table_of_lines->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        table_of_lines->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        table_of_lines->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        table_of_lines->setObjectName(QString::fromUtf8("table_of_lines"));
        table_of_lines->setMinimumSize(QSize(550, 200));
        table_of_lines->setAutoScroll(true);
        table_of_lines->setEditTriggers(QAbstractItemView::NoEditTriggers);
        table_of_lines->verticalHeader()->setVisible(false);

        verticalLayout->addWidget(table_of_lines);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_4 = new QSpacerItem(358, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        Exit_button = new QPushButton(lines_by_year);
        Exit_button->setObjectName(QString::fromUtf8("Exit_button"));

        horizontalLayout_2->addWidget(Exit_button);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(lines_by_year);

        QMetaObject::connectSlotsByName(lines_by_year);
    } // setupUi

    void retranslateUi(QDialog *lines_by_year)
    {
        lines_by_year->setWindowTitle(QCoreApplication::translate("lines_by_year", "\320\233\320\270\320\275\320\270\320\270, \320\276\321\202\320\272\321\200\321\213\321\202\321\213\320\265 \321\200\320\260\320\275\320\265\320\265 \321\203\320\272\320\260\320\267\320\260\320\275\320\275\320\276\320\263\320\276 \320\263\320\276\320\264\320\260", nullptr));
        label->setText(QCoreApplication::translate("lines_by_year", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\263\320\276\320\264", nullptr));
        Find_button->setText(QCoreApplication::translate("lines_by_year", "\320\235\320\260\320\271\321\202\320\270", nullptr));
        QTableWidgetItem *___qtablewidgetitem = table_of_lines->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("lines_by_year", "\320\235\320\276\320\274\320\265\321\200", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = table_of_lines->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("lines_by_year", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \320\273\320\270\320\275\320\270\320\270", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = table_of_lines->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("lines_by_year", "\320\224\320\273\320\270\320\275\320\260 \320\273\320\270\320\275\320\270\320\270", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = table_of_lines->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("lines_by_year", "\320\232\320\276\320\273-\320\262\320\276 \321\201\321\202\320\260\320\275\321\206\320\270\320\271", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = table_of_lines->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("lines_by_year", "\320\223\320\276\320\264 \320\276\321\201\320\275\320\276\320\262\320\260\320\275\320\270\321\217", nullptr));
        Exit_button->setText(QCoreApplication::translate("lines_by_year", "\320\222\321\213\321\205\320\276\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class lines_by_year: public Ui_lines_by_year {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LINES_BY_YEAR_H
