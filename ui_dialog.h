/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QLabel *label;
    QLineEdit *x2mEdit;
    QLabel *label_2;
    QPushButton *x2mButton;
    QLineEdit *savEdit;
    QPushButton *savButton;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(487, 178);
        label = new QLabel(Dialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 30, 61, 16));
        x2mEdit = new QLineEdit(Dialog);
        x2mEdit->setObjectName(QStringLiteral("x2mEdit"));
        x2mEdit->setGeometry(QRect(80, 28, 340, 20));
        label_2 = new QLabel(Dialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 70, 51, 16));
        x2mButton = new QPushButton(Dialog);
        x2mButton->setObjectName(QStringLiteral("x2mButton"));
        x2mButton->setGeometry(QRect(436, 27, 30, 23));
        savEdit = new QLineEdit(Dialog);
        savEdit->setObjectName(QStringLiteral("savEdit"));
        savEdit->setGeometry(QRect(80, 70, 340, 20));
        savButton = new QPushButton(Dialog);
        savButton->setObjectName(QStringLiteral("savButton"));
        savButton->setGeometry(QRect(436, 69, 30, 23));
        buttonBox = new QDialogButtonBox(Dialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(150, 120, 156, 23));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "X2m2Cac", 0));
        label->setText(QApplication::translate("Dialog", "X2M file:", 0));
        label_2->setText(QApplication::translate("Dialog", "Sav file:", 0));
        x2mButton->setText(QApplication::translate("Dialog", "...", 0));
        savButton->setText(QApplication::translate("Dialog", "...", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
