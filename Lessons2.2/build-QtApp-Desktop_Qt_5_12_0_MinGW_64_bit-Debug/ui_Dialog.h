/********************************************************************************
** Form generated from reading UI file 'Dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *chkBoxUnder;
    QCheckBox *chkBoxItalic;
    QCheckBox *chkBoxBold;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *radioBlack;
    QRadioButton *radioRed;
    QRadioButton *radioBlue;
    QPlainTextEdit *textEdit;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnClear;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btnOK;
    QPushButton *btnClose;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(438, 339);
        verticalLayout = new QVBoxLayout(Dialog);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        chkBoxUnder = new QCheckBox(Dialog);
        chkBoxUnder->setObjectName(QString::fromUtf8("chkBoxUnder"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        chkBoxUnder->setFont(font);

        horizontalLayout_2->addWidget(chkBoxUnder);

        chkBoxItalic = new QCheckBox(Dialog);
        chkBoxItalic->setObjectName(QString::fromUtf8("chkBoxItalic"));
        chkBoxItalic->setFont(font);

        horizontalLayout_2->addWidget(chkBoxItalic);

        chkBoxBold = new QCheckBox(Dialog);
        chkBoxBold->setObjectName(QString::fromUtf8("chkBoxBold"));
        chkBoxBold->setFont(font);

        horizontalLayout_2->addWidget(chkBoxBold);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        radioBlack = new QRadioButton(Dialog);
        radioBlack->setObjectName(QString::fromUtf8("radioBlack"));
        radioBlack->setFont(font);

        horizontalLayout_3->addWidget(radioBlack);

        radioRed = new QRadioButton(Dialog);
        radioRed->setObjectName(QString::fromUtf8("radioRed"));
        radioRed->setFont(font);

        horizontalLayout_3->addWidget(radioRed);

        radioBlue = new QRadioButton(Dialog);
        radioBlue->setObjectName(QString::fromUtf8("radioBlue"));
        radioBlue->setFont(font);

        horizontalLayout_3->addWidget(radioBlue);


        verticalLayout->addLayout(horizontalLayout_3);

        textEdit = new QPlainTextEdit(Dialog);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setFont(font);

        verticalLayout->addWidget(textEdit);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnClear = new QPushButton(Dialog);
        btnClear->setObjectName(QString::fromUtf8("btnClear"));
        btnClear->setFont(font);

        horizontalLayout->addWidget(btnClear);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        btnOK = new QPushButton(Dialog);
        btnOK->setObjectName(QString::fromUtf8("btnOK"));
        btnOK->setFont(font);

        horizontalLayout->addWidget(btnOK);

        btnClose = new QPushButton(Dialog);
        btnClose->setObjectName(QString::fromUtf8("btnClose"));
        btnClose->setFont(font);

        horizontalLayout->addWidget(btnClose);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(Dialog);
        QObject::connect(btnOK, SIGNAL(clicked()), Dialog, SLOT(accept()));
        QObject::connect(btnClose, SIGNAL(clicked()), Dialog, SLOT(close()));

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Demo2-3\344\277\241\345\217\267\344\270\216\346\247\275", nullptr));
        chkBoxUnder->setText(QApplication::translate("Dialog", "Underline", nullptr));
        chkBoxItalic->setText(QApplication::translate("Dialog", "Italic", nullptr));
        chkBoxBold->setText(QApplication::translate("Dialog", "Bold", nullptr));
        radioBlack->setText(QApplication::translate("Dialog", "Black", nullptr));
        radioRed->setText(QApplication::translate("Dialog", "Red", nullptr));
        radioBlue->setText(QApplication::translate("Dialog", "Blue", nullptr));
        btnClear->setText(QApplication::translate("Dialog", "\346\270\205\347\251\272", nullptr));
        btnOK->setText(QApplication::translate("Dialog", "\347\241\256\345\256\232", nullptr));
        btnClose->setText(QApplication::translate("Dialog", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
