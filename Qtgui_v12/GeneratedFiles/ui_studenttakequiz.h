/********************************************************************************
** Form generated from reading UI file 'studenttakequiz.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENTTAKEQUIZ_H
#define UI_STUDENTTAKEQUIZ_H

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
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_studentTakeQuiz
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
    QPushButton *viewresultBtn;
    QFrame *line_2;
    QVBoxLayout *Content;
    QLabel *title;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QMenuBar *menuBar;
    QMenu *menuUsers;
    QMenu *menuExit;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *studentTakeQuiz)
    {
        if (studentTakeQuiz->objectName().isEmpty())
            studentTakeQuiz->setObjectName(QStringLiteral("studentTakeQuiz"));
        studentTakeQuiz->resize(1080, 829);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(studentTakeQuiz->sizePolicy().hasHeightForWidth());
        studentTakeQuiz->setSizePolicy(sizePolicy);
        studentTakeQuiz->setMinimumSize(QSize(800, 600));
        QIcon icon;
        icon.addFile(QStringLiteral("Image/javaicon.png"), QSize(), QIcon::Normal, QIcon::Off);
        studentTakeQuiz->setWindowIcon(icon);
        actionLogout = new QAction(studentTakeQuiz);
        actionLogout->setObjectName(QStringLiteral("actionLogout"));
        actionClose_Alt_F4 = new QAction(studentTakeQuiz);
        actionClose_Alt_F4->setObjectName(QStringLiteral("actionClose_Alt_F4"));
        actionLogout_2 = new QAction(studentTakeQuiz);
        actionLogout_2->setObjectName(QStringLiteral("actionLogout_2"));
        centralWidget = new QWidget(studentTakeQuiz);
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

        viewresultBtn = new QPushButton(centralWidget);
        viewresultBtn->setObjectName(QStringLiteral("viewresultBtn"));
        viewresultBtn->setFont(font);
        viewresultBtn->setStyleSheet(QLatin1String("QPushButton\n"
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

        menu->addWidget(viewresultBtn);


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

        scrollArea = new QScrollArea(centralWidget);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 978, 475));
        scrollArea->setWidget(scrollAreaWidgetContents);

        Content->addWidget(scrollArea);


        verticalLayout->addLayout(Content);

        verticalLayout->setStretch(2, 1);
        studentTakeQuiz->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(studentTakeQuiz);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1080, 31));
        menuUsers = new QMenu(menuBar);
        menuUsers->setObjectName(QStringLiteral("menuUsers"));
        menuExit = new QMenu(menuBar);
        menuExit->setObjectName(QStringLiteral("menuExit"));
        studentTakeQuiz->setMenuBar(menuBar);
        mainToolBar = new QToolBar(studentTakeQuiz);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        studentTakeQuiz->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(studentTakeQuiz);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        studentTakeQuiz->setStatusBar(statusBar);

        menuBar->addAction(menuUsers->menuAction());
        menuBar->addAction(menuExit->menuAction());
        menuUsers->addAction(actionLogout);
        menuUsers->addAction(actionLogout_2);
        menuExit->addAction(actionClose_Alt_F4);

        retranslateUi(studentTakeQuiz);

        QMetaObject::connectSlotsByName(studentTakeQuiz);
    } // setupUi

    void retranslateUi(QMainWindow *studentTakeQuiz)
    {
        studentTakeQuiz->setWindowTitle(QApplication::translate("studentTakeQuiz", "Student Take Quiz", 0));
        actionLogout->setText(QApplication::translate("studentTakeQuiz", "Change Password", 0));
        actionClose_Alt_F4->setText(QApplication::translate("studentTakeQuiz", "Close (Alt + F4)", 0));
        actionLogout_2->setText(QApplication::translate("studentTakeQuiz", "Logout", 0));
        bg->setText(QString());
        homeBtn->setText(QApplication::translate("studentTakeQuiz", "Home", 0));
        viewquizBtn->setText(QApplication::translate("studentTakeQuiz", "View Quiz", 0));
        viewresultBtn->setText(QApplication::translate("studentTakeQuiz", "View Result", 0));
        title->setText(QApplication::translate("studentTakeQuiz", "Pass in Quiz Name / ID", 0));
        menuUsers->setTitle(QApplication::translate("studentTakeQuiz", "Users", 0));
        menuExit->setTitle(QApplication::translate("studentTakeQuiz", "Exit", 0));
    } // retranslateUi

};

namespace Ui {
    class studentTakeQuiz: public Ui_studentTakeQuiz {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTTAKEQUIZ_H
