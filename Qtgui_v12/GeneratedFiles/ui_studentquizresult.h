/********************************************************************************
** Form generated from reading UI file 'studentquizresult.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENTQUIZRESULT_H
#define UI_STUDENTQUIZRESULT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_studentQuizResult
{
public:
    QAction *actionLogout;
    QAction *actionClose_Alt_F4;
    QAction *actionLogout_2;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *overallLayout;
    QLabel *bg;
    QFrame *line;
    QHBoxLayout *menu;
    QPushButton *homeBtn;
    QPushButton *viewquizBtn;
    QPushButton *createquizBtn;
    QFrame *line_2;
    QVBoxLayout *Content;
    QLabel *title;
    QLabel *studentresult_Label;
    QMenuBar *menuBar;
    QMenu *menuUsers;
    QMenu *menuExit;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *studentQuizResult)
    {
        if (studentQuizResult->objectName().isEmpty())
            studentQuizResult->setObjectName(QStringLiteral("studentQuizResult"));
        studentQuizResult->resize(1080, 829);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(studentQuizResult->sizePolicy().hasHeightForWidth());
        studentQuizResult->setSizePolicy(sizePolicy);
        studentQuizResult->setMinimumSize(QSize(800, 600));
        QIcon icon;
        icon.addFile(QStringLiteral("Image/javaicon.png"), QSize(), QIcon::Normal, QIcon::Off);
        studentQuizResult->setWindowIcon(icon);
        actionLogout = new QAction(studentQuizResult);
        actionLogout->setObjectName(QStringLiteral("actionLogout"));
        actionClose_Alt_F4 = new QAction(studentQuizResult);
        actionClose_Alt_F4->setObjectName(QStringLiteral("actionClose_Alt_F4"));
        actionLogout_2 = new QAction(studentQuizResult);
        actionLogout_2->setObjectName(QStringLiteral("actionLogout_2"));
        centralWidget = new QWidget(studentQuizResult);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        overallLayout = new QVBoxLayout();
        overallLayout->setSpacing(6);
        overallLayout->setObjectName(QStringLiteral("overallLayout"));
        bg = new QLabel(centralWidget);
        bg->setObjectName(QStringLiteral("bg"));
        bg->setPixmap(QPixmap(QString::fromUtf8("Image/gg2.JPG")));

        overallLayout->addWidget(bg);

        line = new QFrame(centralWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setMinimumSize(QSize(0, 0));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        overallLayout->addWidget(line);

        menu = new QHBoxLayout();
        menu->setSpacing(6);
        menu->setObjectName(QStringLiteral("menu"));
        menu->setContentsMargins(-1, 0, -1, -1);
        homeBtn = new QPushButton(centralWidget);
        homeBtn->setObjectName(QStringLiteral("homeBtn"));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(14);
        homeBtn->setFont(font);
        homeBtn->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	border: None;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	color: rgb(47,79,79);\n"
"	font-size: 34px;\n"
"}\n"
"\n"
""));

        menu->addWidget(homeBtn);

        viewquizBtn = new QPushButton(centralWidget);
        viewquizBtn->setObjectName(QStringLiteral("viewquizBtn"));
        viewquizBtn->setFont(font);
        viewquizBtn->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	border: None;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	color: rgb(47,79,79);\n"
"	font-size: 34px;\n"
"}\n"
"\n"
""));

        menu->addWidget(viewquizBtn);

        createquizBtn = new QPushButton(centralWidget);
        createquizBtn->setObjectName(QStringLiteral("createquizBtn"));
        createquizBtn->setFont(font);
        createquizBtn->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	border: None;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	color: rgb(47,79,79);\n"
"	font-size: 34px;\n"
"}\n"
"\n"
""));

        menu->addWidget(createquizBtn);


        overallLayout->addLayout(menu);


        verticalLayout->addLayout(overallLayout);

        line_2 = new QFrame(centralWidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_2);

        Content = new QVBoxLayout();
        Content->setSpacing(6);
        Content->setObjectName(QStringLiteral("Content"));
        Content->setContentsMargins(50, 5, 50, -1);
        title = new QLabel(centralWidget);
        title->setObjectName(QStringLiteral("title"));
        QFont font1;
        font1.setFamily(QStringLiteral("Arial"));
        font1.setPointSize(16);
        title->setFont(font1);

        Content->addWidget(title);

        studentresult_Label = new QLabel(centralWidget);
        studentresult_Label->setObjectName(QStringLiteral("studentresult_Label"));
        studentresult_Label->setWordWrap(true);

        Content->addWidget(studentresult_Label);

        Content->setStretch(1, 1);

        verticalLayout->addLayout(Content);

        verticalLayout->setStretch(2, 1);
        studentQuizResult->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(studentQuizResult);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1080, 31));
        menuUsers = new QMenu(menuBar);
        menuUsers->setObjectName(QStringLiteral("menuUsers"));
        menuExit = new QMenu(menuBar);
        menuExit->setObjectName(QStringLiteral("menuExit"));
        studentQuizResult->setMenuBar(menuBar);
        mainToolBar = new QToolBar(studentQuizResult);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        studentQuizResult->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(studentQuizResult);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        studentQuizResult->setStatusBar(statusBar);

        menuBar->addAction(menuUsers->menuAction());
        menuBar->addAction(menuExit->menuAction());
        menuUsers->addAction(actionLogout);
        menuUsers->addAction(actionLogout_2);
        menuExit->addAction(actionClose_Alt_F4);

        retranslateUi(studentQuizResult);

        QMetaObject::connectSlotsByName(studentQuizResult);
    } // setupUi

    void retranslateUi(QMainWindow *studentQuizResult)
    {
        studentQuizResult->setWindowTitle(QApplication::translate("studentQuizResult", "Student Quiz Result", 0));
        actionLogout->setText(QApplication::translate("studentQuizResult", "Change Password", 0));
        actionClose_Alt_F4->setText(QApplication::translate("studentQuizResult", "Close (Alt + F4)", 0));
        actionLogout_2->setText(QApplication::translate("studentQuizResult", "Logout", 0));
        bg->setText(QString());
        homeBtn->setText(QApplication::translate("studentQuizResult", "Home", 0));
        viewquizBtn->setText(QApplication::translate("studentQuizResult", "View Quiz", 0));
        createquizBtn->setText(QApplication::translate("studentQuizResult", "View Result", 0));
        title->setText(QApplication::translate("studentQuizResult", "Quiz Result", 0));
        studentresult_Label->setText(QApplication::translate("studentQuizResult", "QUIZRESULTQUIZRESULTQUIZRESULTQUIZRESULTQUIZRESULTQUIZRESULT", 0));
        menuUsers->setTitle(QApplication::translate("studentQuizResult", "Users", 0));
        menuExit->setTitle(QApplication::translate("studentQuizResult", "Exit", 0));
    } // retranslateUi

};

namespace Ui {
    class studentQuizResult: public Ui_studentQuizResult {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTQUIZRESULT_H
