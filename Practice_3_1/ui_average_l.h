/********************************************************************************
** Form generated from reading UI file 'average_l.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AVERAGE_L_H
#define UI_AVERAGE_L_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
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

class Ui_average_l
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLineEdit *id_line;
    QLineEdit *name_line;
    QLabel *label;
    QLabel *label_3;
    QLineEdit *len_line;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *count_button;
    QSpacerItem *horizontalSpacer_2;
    QTableWidget *table_of_lines;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *Exit_button;

    void setupUi(QDialog *average_l)
    {
        if (average_l->objectName().isEmpty())
            average_l->setObjectName(QString::fromUtf8("average_l"));
        average_l->resize(815, 450);
        average_l->setMinimumSize(QSize(815, 450));
        verticalLayout = new QVBoxLayout(average_l);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(average_l);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        id_line = new QLineEdit(average_l);
        id_line->setObjectName(QString::fromUtf8("id_line"));
        id_line->setMinimumSize(QSize(120, 0));

        gridLayout->addWidget(id_line, 0, 1, 1, 1);

        name_line = new QLineEdit(average_l);
        name_line->setObjectName(QString::fromUtf8("name_line"));
        name_line->setMinimumSize(QSize(120, 0));

        gridLayout->addWidget(name_line, 1, 1, 1, 1);

        label = new QLabel(average_l);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        label_3 = new QLabel(average_l);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        len_line = new QLineEdit(average_l);
        len_line->setObjectName(QString::fromUtf8("len_line"));

        gridLayout->addWidget(len_line, 2, 1, 1, 1);


        horizontalLayout->addLayout(gridLayout);

        horizontalSpacer_3 = new QSpacerItem(30, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        count_button = new QPushButton(average_l);
        count_button->setObjectName(QString::fromUtf8("count_button"));

        horizontalLayout->addWidget(count_button);

        horizontalSpacer_2 = new QSpacerItem(30, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        table_of_lines = new QTableWidget(average_l);
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
        table_of_lines->setMinimumSize(QSize(550, 250));
        table_of_lines->setRowCount(0);
        table_of_lines->verticalHeader()->setVisible(false);

        verticalLayout->addWidget(table_of_lines);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_4 = new QSpacerItem(308, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        Exit_button = new QPushButton(average_l);
        Exit_button->setObjectName(QString::fromUtf8("Exit_button"));

        horizontalLayout_2->addWidget(Exit_button);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(average_l);

        QMetaObject::connectSlotsByName(average_l);
    } // setupUi

    void retranslateUi(QDialog *average_l)
    {
        average_l->setWindowTitle(QCoreApplication::translate("average_l", "\320\241\321\200\320\265\320\264\320\275\321\217\321\217 \320\264\320\273\320\270\320\275\320\260 \320\277\320\265\321\200\320\265\320\263\320\276\320\275\320\260", nullptr));
        label_2->setText(QCoreApplication::translate("average_l", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\275\320\276\320\274\320\265\321\200 \320\273\320\270\320\275\320\270\320\270", nullptr));
        label->setText(QCoreApplication::translate("average_l", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\275\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \320\273\320\270\320\275\320\270\320\270", nullptr));
        label_3->setText(QCoreApplication::translate("average_l", "\320\241\321\200\320\265\320\264\320\275\321\217\321\217 \320\264\320\273\320\270\320\275\320\260 \320\277\320\265\321\200\320\265\320\263\320\276\320\275\320\260", nullptr));
        count_button->setText(QCoreApplication::translate("average_l", "\320\222\321\213\321\207\320\270\321\201\320\273\320\270\321\202\321\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem = table_of_lines->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("average_l", "\320\235\320\276\320\274\320\265\321\200", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = table_of_lines->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("average_l", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \320\273\320\270\320\275\320\270\320\270", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = table_of_lines->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("average_l", "\320\224\320\273\320\270\320\275\320\260 \320\273\320\270\320\275\320\270\320\270", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = table_of_lines->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("average_l", "\320\232\320\276\320\273-\320\262\320\276 \321\201\321\202\320\260\320\275\321\206\320\270\320\271", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = table_of_lines->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("average_l", "\320\223\320\276\320\264 \320\276\321\201\320\275\320\276\320\262\320\260\320\275\320\270\321\217", nullptr));
        Exit_button->setText(QCoreApplication::translate("average_l", "\320\222\321\213\321\205\320\276\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class average_l: public Ui_average_l {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AVERAGE_L_H
