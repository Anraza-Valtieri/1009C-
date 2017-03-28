/********************************************************************************
** Form generated from reading UI file 'studentviewquiz.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENTVIEWQUIZ_H
#define UI_STUDENTVIEWQUIZ_H

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
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_studentViewQuiz
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
    QVBoxLayout *Content;
    QFrame *line_2;
    QLabel *title;
    QTableView *studenttableView;
    QMenuBar *menuBar;
    QMenu *menuUsers;
    QMenu *menuExit;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *studentViewQuiz)
    {
        if (studentViewQuiz->objectName().isEmpty())
            studentViewQuiz->setObjectName(QStringLiteral("studentViewQuiz"));
        studentViewQuiz->resize(1080, 829);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(studentViewQuiz->sizePolicy().hasHeightForWidth());
        studentViewQuiz->setSizePolicy(sizePolicy);
        studentViewQuiz->setMinimumSize(QSize(800, 600));
        QIcon icon;
        icon.addFile(QStringLiteral("Image/javaicon.png"), QSize(), QIcon::Normal, QIcon::Off);
        studentViewQuiz->setWindowIcon(icon);
        actionLogout = new QAction(studentViewQuiz);
        actionLogout->setObjectName(QStringLiteral("actionLogout"));
        actionClose_Alt_F4 = new QAction(studentViewQuiz);
        actionClose_Alt_F4->setObjectName(QStringLiteral("actionClose_Alt_F4"));
        actionLogout_2 = new QAction(studentViewQuiz);
        actionLogout_2->setObjectName(QStringLiteral("actionLogout_2"));
        centralWidget = new QWidget(studentViewQuiz);
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

        Content = new QVBoxLayout();
        Content->setSpacing(6);
        Content->setObjectName(QStringLiteral("Content"));
        Content->setContentsMargins(50, 5, 50, -1);
        line_2 = new QFrame(centralWidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        Content->addWidget(line_2);

        title = new QLabel(centralWidget);
        title->setObjectName(QStringLiteral("title"));
        QFont font1;
        font1.setFamily(QStringLiteral("Arial"));
        font1.setPointSize(16);
        title->setFont(font1);

        Content->addWidget(title);

        studenttableView = new QTableView(centralWidget);
        studenttableView->setObjectName(QStringLiteral("studenttableView"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(studenttableView->sizePolicy().hasHeightForWidth());
        studenttableView->setSizePolicy(sizePolicy1);
        studenttableView->setAutoScrollMargin(16);

        Content->addWidget(studenttableView);


        verticalLayout->addLayout(Content);

        verticalLayout->setStretch(1, 1);
        studentViewQuiz->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(studentViewQuiz);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1080, 31));
        menuUsers = new QMenu(menuBar);
        menuUsers->setObjectName(QStringLiteral("menuUsers"));
        menuExit = new QMenu(menuBar);
        menuExit->setObjectName(QStringLiteral("menuExit"));
        studentViewQuiz->setMenuBar(menuBar);
        mainToolBar = new QToolBar(studentViewQuiz);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        studentViewQuiz->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(studentViewQuiz);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        studentViewQuiz->setStatusBar(statusBar);

        menuBar->addAction(menuUsers->menuAction());
        menuBar->addAction(menuExit->menuAction());
        menuUsers->addAction(actionLogout);
        menuUsers->addAction(actionLogout_2);
        menuExit->addAction(actionClose_Alt_F4);

        retranslateUi(studentViewQuiz);

        QMetaObject::connectSlotsByName(studentViewQuiz);
    } // setupUi

    void retranslateUi(QMainWindow *studentViewQuiz)
    {
        studentViewQuiz->setWindowTitle(QApplication::translate("studentViewQuiz", "Student View Quiz", 0));
        actionLogout->setText(QApplication::translate("studentViewQuiz", "Change Password", 0));
        actionClose_Alt_F4->setText(QApplication::translate("studentViewQuiz", "Close (Alt + F4)", 0));
        actionLogout_2->setText(QApplication::translate("studentViewQuiz", "Logout", 0));
        bg->setText(QString());
        homeBtn->setText(QApplication::translate("studentViewQuiz", "Home", 0));
        viewquizBtn->setText(QApplication::translate("studentViewQuiz", "View Quiz", 0));
        viewresultBtn->setText(QApplication::translate("studentViewQuiz", "View Result", 0));
        title->setText(QApplication::translate("studentViewQuiz", "Student View Quiz", 0));
        menuUsers->setTitle(QApplication::translate("studentViewQuiz", "Users", 0));
        menuExit->setTitle(QApplication::translate("studentViewQuiz", "Exit", 0));
    } // retranslateUi

};

namespace Ui {
    class studentViewQuiz: public Ui_studentViewQuiz {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTVIEWQUIZ_H
