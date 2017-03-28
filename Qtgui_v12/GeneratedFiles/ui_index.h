/********************************************************************************
** Form generated from reading UI file 'index.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INDEX_H
#define UI_INDEX_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_index
{
public:
    QAction *actionLogout;
    QAction *actionClose_Alt_F4;
    QAction *actionLogout_2;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLineEdit *usernameLineEdit;
    QLabel *passwordLabel;
    QLineEdit *passwordLineEdit;
    QPushButton *loginBtn;
    QLabel *usernameLabel;
    QLabel *titleLabel;

    void setupUi(QMainWindow *index)
    {
        if (index->objectName().isEmpty())
            index->setObjectName(QStringLiteral("index"));
        index->resize(976, 691);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(index->sizePolicy().hasHeightForWidth());
        index->setSizePolicy(sizePolicy);
        index->setMinimumSize(QSize(800, 600));
        QIcon icon;
        icon.addFile(QStringLiteral("../../../../../Desktop/javaicon.png"), QSize(), QIcon::Normal, QIcon::Off);
        index->setWindowIcon(icon);
        index->setStyleSheet(QStringLiteral(""));
        actionLogout = new QAction(index);
        actionLogout->setObjectName(QStringLiteral("actionLogout"));
        actionClose_Alt_F4 = new QAction(index);
        actionClose_Alt_F4->setObjectName(QStringLiteral("actionClose_Alt_F4"));
        actionLogout_2 = new QAction(index);
        actionLogout_2->setObjectName(QStringLiteral("actionLogout_2"));
        centralWidget = new QWidget(index);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setStyleSheet(QLatin1String("QWidget#centralWidget\n"
"{\n"
"border-image: url(Image/bg.jpg) 0 0 0 0 stretch stretch;\n"
"border-width: 0px;\n"
"}"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setRowWrapPolicy(QFormLayout::WrapAllRows);
        formLayout->setLabelAlignment(Qt::AlignCenter);
        formLayout->setFormAlignment(Qt::AlignCenter);
        formLayout->setHorizontalSpacing(0);
        formLayout->setVerticalSpacing(5);
        formLayout->setContentsMargins(400, -1, -1, -1);
        usernameLineEdit = new QLineEdit(centralWidget);
        usernameLineEdit->setObjectName(QStringLiteral("usernameLineEdit"));
        usernameLineEdit->setMaximumSize(QSize(250, 16777215));

        formLayout->setWidget(2, QFormLayout::FieldRole, usernameLineEdit);

        passwordLabel = new QLabel(centralWidget);
        passwordLabel->setObjectName(QStringLiteral("passwordLabel"));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(10);
        passwordLabel->setFont(font);

        formLayout->setWidget(4, QFormLayout::LabelRole, passwordLabel);

        passwordLineEdit = new QLineEdit(centralWidget);
        passwordLineEdit->setObjectName(QStringLiteral("passwordLineEdit"));
        passwordLineEdit->setMaximumSize(QSize(250, 16777215));

        formLayout->setWidget(4, QFormLayout::FieldRole, passwordLineEdit);

        loginBtn = new QPushButton(centralWidget);
        loginBtn->setObjectName(QStringLiteral("loginBtn"));
        loginBtn->setFont(font);
        loginBtn->setStyleSheet(QStringLiteral(""));

        formLayout->setWidget(5, QFormLayout::LabelRole, loginBtn);

        usernameLabel = new QLabel(centralWidget);
        usernameLabel->setObjectName(QStringLiteral("usernameLabel"));
        usernameLabel->setFont(font);

        formLayout->setWidget(2, QFormLayout::LabelRole, usernameLabel);

        titleLabel = new QLabel(centralWidget);
        titleLabel->setObjectName(QStringLiteral("titleLabel"));
        QFont font1;
        font1.setFamily(QStringLiteral("Arial"));
        font1.setPointSize(16);
        titleLabel->setFont(font1);

        formLayout->setWidget(0, QFormLayout::LabelRole, titleLabel);


        verticalLayout->addLayout(formLayout);

        index->setCentralWidget(centralWidget);

        retranslateUi(index);

        QMetaObject::connectSlotsByName(index);
    } // setupUi

    void retranslateUi(QMainWindow *index)
    {
        index->setWindowTitle(QApplication::translate("index", "Login", 0));
        actionLogout->setText(QApplication::translate("index", "Change Password", 0));
        actionClose_Alt_F4->setText(QApplication::translate("index", "Close (Alt + F4)", 0));
        actionLogout_2->setText(QApplication::translate("index", "Logout", 0));
        passwordLabel->setText(QApplication::translate("index", "Password:", 0));
        loginBtn->setText(QApplication::translate("index", "Login", 0));
        usernameLabel->setText(QApplication::translate("index", "Username:", 0));
        titleLabel->setText(QApplication::translate("index", "Learn Java / C++", 0));
    } // retranslateUi

};

namespace Ui {
    class index: public Ui_index {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INDEX_H
