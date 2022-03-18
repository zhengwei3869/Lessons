/********************************************************************************
** Form generated from reading UI file 'Widget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_Age;
    QWidget *widget1;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QSlider *sliderSetAge;
    QLabel *label;
    QLineEdit *editAgeInt;
    QLabel *label_2;
    QLineEdit *editAgeStr;
    QGroupBox *groupBox_Name;
    QWidget *widget2;
    QGridLayout *gridLayout_2;
    QLabel *label_4;
    QLineEdit *editNameInput;
    QPushButton *btnSetName;
    QLabel *label_5;
    QLineEdit *editNameHello;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btnClose;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(476, 417);
        widget = new QWidget(Widget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 20, 421, 341));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        groupBox_Age = new QGroupBox(widget);
        groupBox_Age->setObjectName(QString::fromUtf8("groupBox_Age"));
        widget1 = new QWidget(groupBox_Age);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(10, 20, 391, 80));
        gridLayout = new QGridLayout(widget1);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(widget1);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        sliderSetAge = new QSlider(widget1);
        sliderSetAge->setObjectName(QString::fromUtf8("sliderSetAge"));
        sliderSetAge->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(sliderSetAge, 0, 1, 1, 1);

        label = new QLabel(widget1);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        editAgeInt = new QLineEdit(widget1);
        editAgeInt->setObjectName(QString::fromUtf8("editAgeInt"));

        gridLayout->addWidget(editAgeInt, 1, 1, 1, 1);

        label_2 = new QLabel(widget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        editAgeStr = new QLineEdit(widget1);
        editAgeStr->setObjectName(QString::fromUtf8("editAgeStr"));

        gridLayout->addWidget(editAgeStr, 2, 1, 1, 1);


        verticalLayout->addWidget(groupBox_Age);

        groupBox_Name = new QGroupBox(widget);
        groupBox_Name->setObjectName(QString::fromUtf8("groupBox_Name"));
        widget2 = new QWidget(groupBox_Name);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setGeometry(QRect(10, 30, 391, 58));
        gridLayout_2 = new QGridLayout(widget2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(widget2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_2->addWidget(label_4, 0, 0, 1, 1);

        editNameInput = new QLineEdit(widget2);
        editNameInput->setObjectName(QString::fromUtf8("editNameInput"));

        gridLayout_2->addWidget(editNameInput, 0, 1, 1, 1);

        btnSetName = new QPushButton(widget2);
        btnSetName->setObjectName(QString::fromUtf8("btnSetName"));

        gridLayout_2->addWidget(btnSetName, 0, 2, 1, 1);

        label_5 = new QLabel(widget2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_2->addWidget(label_5, 1, 0, 1, 1);

        editNameHello = new QLineEdit(widget2);
        editNameHello->setObjectName(QString::fromUtf8("editNameHello"));

        gridLayout_2->addWidget(editNameHello, 1, 1, 1, 2);


        verticalLayout->addWidget(groupBox_Name);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        btnClose = new QPushButton(widget);
        btnClose->setObjectName(QString::fromUtf8("btnClose"));

        horizontalLayout_2->addWidget(btnClose);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        groupBox_Age->setTitle(QApplication::translate("Widget", "\345\271\264\351\276\204\350\256\276\347\275\256", nullptr));
        label_3->setText(QApplication::translate("Widget", "\350\256\276\347\275\256\345\271\264\351\276\204(0~100)", nullptr));
        label->setText(QApplication::translate("Widget", "ageChanges(int)\345\223\215\345\272\224", nullptr));
        label_2->setText(QApplication::translate("Widget", "ageChanges(str)\345\223\215\345\272\224", nullptr));
        groupBox_Name->setTitle(QApplication::translate("Widget", "\345\247\223\345\220\215\350\256\276\347\275\256", nullptr));
        label_4->setText(QApplication::translate("Widget", "\350\276\223\345\205\245\345\247\223\345\220\215", nullptr));
        btnSetName->setText(QApplication::translate("Widget", "\350\256\276\347\275\256\345\247\223\345\220\215", nullptr));
        label_5->setText(QApplication::translate("Widget", "nameChanged(str)\345\223\215\345\272\224", nullptr));
        btnClose->setText(QApplication::translate("Widget", "\345\205\263\351\227\255", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
