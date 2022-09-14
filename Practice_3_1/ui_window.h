/********************************************************************************
** Form generated from reading UI file 'window.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOW_H
#define UI_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Window
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout;
    QPushButton *Add_Line_button;
    QPushButton *Delete_Line_button;
    QPushButton *Show_Lines_button;
    QPushButton *Lines_by_year_button;
    QPushButton *Average_length_button;
    QPushButton *Graphics_button;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *Exit_button;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QMainWindow *Window)
    {
        if (Window->objectName().isEmpty())
            Window->setObjectName(QString::fromUtf8("Window"));
        Window->resize(301, 233);
        centralwidget = new QWidget(Window);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        Add_Line_button = new QPushButton(centralwidget);
        Add_Line_button->setObjectName(QString::fromUtf8("Add_Line_button"));

        verticalLayout->addWidget(Add_Line_button);

        Delete_Line_button = new QPushButton(centralwidget);
        Delete_Line_button->setObjectName(QString::fromUtf8("Delete_Line_button"));

        verticalLayout->addWidget(Delete_Line_button);

        Show_Lines_button = new QPushButton(centralwidget);
        Show_Lines_button->setObjectName(QString::fromUtf8("Show_Lines_button"));

        verticalLayout->addWidget(Show_Lines_button);

        Lines_by_year_button = new QPushButton(centralwidget);
        Lines_by_year_button->setObjectName(QString::fromUtf8("Lines_by_year_button"));

        verticalLayout->addWidget(Lines_by_year_button);

        Average_length_button = new QPushButton(centralwidget);
        Average_length_button->setObjectName(QString::fromUtf8("Average_length_button"));

        verticalLayout->addWidget(Average_length_button);

        Graphics_button = new QPushButton(centralwidget);
        Graphics_button->setObjectName(QString::fromUtf8("Graphics_button"));

        verticalLayout->addWidget(Graphics_button);


        horizontalLayout_2->addLayout(verticalLayout);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout_2->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(60, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        Exit_button = new QPushButton(centralwidget);
        Exit_button->setObjectName(QString::fromUtf8("Exit_button"));

        horizontalLayout->addWidget(Exit_button);

        horizontalSpacer_2 = new QSpacerItem(60, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout);

        Window->setCentralWidget(centralwidget);

        retranslateUi(Window);

        QMetaObject::connectSlotsByName(Window);
    } // setupUi

    void retranslateUi(QMainWindow *Window)
    {
        Window->setWindowTitle(QCoreApplication::translate("Window", "\320\234\320\265\320\275\321\216", nullptr));
        Add_Line_button->setText(QCoreApplication::translate("Window", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\273\320\270\320\275\320\270\321\216", nullptr));
        Delete_Line_button->setText(QCoreApplication::translate("Window", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\273\320\270\320\275\320\270\321\216", nullptr));
        Show_Lines_button->setText(QCoreApplication::translate("Window", "\320\237\320\276\320\272\320\260\320\267\320\260\321\202\321\214 \320\262\321\201\320\265 \321\201\320\262\320\265\320\264\320\265\320\275\320\270\321\217", nullptr));
        Lines_by_year_button->setText(QCoreApplication::translate("Window", "\320\233\320\270\320\275\320\270\320\270, \320\276\321\202\320\272\321\200\321\213\321\202\321\213\320\265 \320\272 n-\320\276\320\274\321\203 \320\263\320\276\320\264\321\203", nullptr));
        Average_length_button->setText(QCoreApplication::translate("Window", "\320\241\321\200\320\265\320\264\320\275\321\217\321\217 \320\264\320\273\320\270\320\275\320\260 \320\277\320\265\321\200\320\265\320\263\320\276\320\275\320\260", nullptr));
        Graphics_button->setText(QCoreApplication::translate("Window", "\320\223\321\200\320\260\321\204\320\270\320\272", nullptr));
        Exit_button->setText(QCoreApplication::translate("Window", "\320\222\321\213\321\205\320\276\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Window: public Ui_Window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW_H
