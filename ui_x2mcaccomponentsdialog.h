/********************************************************************************
** Form generated from reading UI file 'x2mcaccomponentsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_X2MCACCOMPONENTSDIALOG_H
#define UI_X2MCACCOMPONENTSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_X2mCacComponentsDialog
{
public:
    QDialogButtonBox *buttonBox;
    QCheckBox *basicCheck;
    QCheckBox *compCheck;
    QCheckBox *clothesCheck;
    QCheckBox *skillsCheck;
    QCheckBox *statsCheck;
    QCheckBox *keepRaceCheck;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *X2mCacComponentsDialog)
    {
        if (X2mCacComponentsDialog->objectName().isEmpty())
            X2mCacComponentsDialog->setObjectName(QStringLiteral("X2mCacComponentsDialog"));
        X2mCacComponentsDialog->resize(450, 357);
        buttonBox = new QDialogButtonBox(X2mCacComponentsDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(0, 310, 441, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(true);
        basicCheck = new QCheckBox(X2mCacComponentsDialog);
        basicCheck->setObjectName(QStringLiteral("basicCheck"));
        basicCheck->setGeometry(QRect(20, 30, 361, 17));
        basicCheck->setChecked(true);
        compCheck = new QCheckBox(X2mCacComponentsDialog);
        compCheck->setObjectName(QStringLiteral("compCheck"));
        compCheck->setGeometry(QRect(20, 70, 161, 17));
        compCheck->setChecked(true);
        clothesCheck = new QCheckBox(X2mCacComponentsDialog);
        clothesCheck->setObjectName(QStringLiteral("clothesCheck"));
        clothesCheck->setGeometry(QRect(20, 110, 361, 17));
        clothesCheck->setChecked(true);
        skillsCheck = new QCheckBox(X2mCacComponentsDialog);
        skillsCheck->setObjectName(QStringLiteral("skillsCheck"));
        skillsCheck->setGeometry(QRect(20, 150, 70, 17));
        skillsCheck->setChecked(true);
        statsCheck = new QCheckBox(X2mCacComponentsDialog);
        statsCheck->setObjectName(QStringLiteral("statsCheck"));
        statsCheck->setGeometry(QRect(20, 190, 70, 17));
        keepRaceCheck = new QCheckBox(X2mCacComponentsDialog);
        keepRaceCheck->setObjectName(QStringLiteral("keepRaceCheck"));
        keepRaceCheck->setGeometry(QRect(230, 70, 211, 17));
        label = new QLabel(X2mCacComponentsDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 230, 201, 16));
        label_2 = new QLabel(X2mCacComponentsDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 260, 361, 16));

        retranslateUi(X2mCacComponentsDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), X2mCacComponentsDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), X2mCacComponentsDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(X2mCacComponentsDialog);
    } // setupUi

    void retranslateUi(QDialog *X2mCacComponentsDialog)
    {
        X2mCacComponentsDialog->setWindowTitle(QApplication::translate("X2mCacComponentsDialog", "Dialog", 0));
        basicCheck->setText(QApplication::translate("X2mCacComponentsDialog", "Name, voice, body shape", 0));
        compCheck->setText(QApplication::translate("X2mCacComponentsDialog", "Race, body components", 0));
        clothesCheck->setText(QApplication::translate("X2mCacComponentsDialog", "Clothes", 0));
        skillsCheck->setText(QApplication::translate("X2mCacComponentsDialog", "Skills", 0));
        statsCheck->setText(QApplication::translate("X2mCacComponentsDialog", "Stats", 0));
        keepRaceCheck->setText(QApplication::translate("X2mCacComponentsDialog", "Keep race", 0));
        label->setText(QApplication::translate("X2mCacComponentsDialog", "<html><head/><body><p><span style=\" font-weight:600;\">Items in bold affect all presets.</span></p></body></html>", 0));
        label_2->setText(QApplication::translate("X2mCacComponentsDialog", "<html><head/><body><p><span style=\" font-weight:600; color:#ff0000;\">Items in red are totally discouraged (also affect all presets)</span></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class X2mCacComponentsDialog: public Ui_X2mCacComponentsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_X2MCACCOMPONENTSDIALOG_H
