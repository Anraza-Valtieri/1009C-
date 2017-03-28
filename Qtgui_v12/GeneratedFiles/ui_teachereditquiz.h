/********************************************************************************
** Form generated from reading UI file 'teachereditquiz.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEACHEREDITQUIZ_H
#define UI_TEACHEREDITQUIZ_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
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

class Ui_teacherEditQuiz
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
    QLineEdit *lineEdit;
    QTableView *chertableView;
    QHBoxLayout *btnlayout;
    QPushButton *viewquiz_deletequiz;
    QPushButton *viewquiz_addnewqns;
    QMenuBar *menuBar;
    QMenu *menuUsers;
    QMenu *menuExit;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *teacherEditQuiz)
    {
        if (teacherEditQuiz->objectName().isEmpty())
            teacherEditQuiz->setObjectName(QStringLiteral("teacherEditQuiz"));
        teacherEditQuiz->resize(1080, 829);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(teacherEditQuiz->sizePolicy().hasHeightForWidth());
        teacherEditQuiz->setSizePolicy(sizePolicy);
        teacherEditQuiz->setMinimumSize(QSize(800, 600));
        QIcon icon;
        icon.addFile(QStringLiteral("Image/javaicon.png"), QSize(), QIcon::Normal, QIcon::Off);
        teacherEditQuiz->setWindowIcon(icon);
        actionLogout = new QAction(teacherEditQuiz);
        actionLogout->setObjectName(QStringLiteral("actionLogout"));
        actionClose_Alt_F4 = new QAction(teacherEditQuiz);
        actionClose_Alt_F4->setObjectName(QStringLiteral("actionClose_Alt_F4"));
        actionLogout_2 = new QAction(teacherEditQuiz);
        actionLogout_2->setObjectName(QStringLiteral("actionLogout_2"));
        centralWidget = new QWidget(teacherEditQuiz);
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
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        Content->addWidget(lineEdit);

        chertableView = new QTableView(centralWidget);
        chertableView->setObjectName(QStringLiteral("chertableView"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(chertableView->sizePolicy().hasHeightForWidth());
        chertableView->setSizePolicy(sizePolicy1);
        chertableView->setAutoScrollMargin(16);

        Content->addWidget(chertableView);

        btnlayout = new QHBoxLayout();
        btnlayout->setSpacing(6);
        btnlayout->setObjectName(QStringLiteral("btnlayout"));
        viewquiz_deletequiz = new QPushButton(centralWidget);
        viewquiz_deletequiz->setObjectName(QStringLiteral("viewquiz_deletequiz"));

        btnlayout->addWidget(viewquiz_deletequiz);

        viewquiz_addnewqns = new QPushButton(centralWidget);
        viewquiz_addnewqns->setObjectName(QStringLiteral("viewquiz_addnewqns"));

        btnlayout->addWidget(viewquiz_addnewqns);


        Content->addLayout(btnlayout);


        verticalLayout->addLayout(Content);

        verticalLayout->setStretch(2, 1);
        teacherEditQuiz->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(teacherEditQuiz);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1080, 31));
        menuUsers = new QMenu(menuBar);
        menuUsers->setObjectName(QStringLiteral("menuUsers"));
        menuExit = new QMenu(menuBar);
        menuExit->setObjectName(QStringLiteral("menuExit"));
        teacherEditQuiz->setMenuBar(menuBar);
        mainToolBar = new QToolBar(teacherEditQuiz);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        teacherEditQuiz->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(teacherEditQuiz);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        teacherEditQuiz->setStatusBar(statusBar);

        menuBar->addAction(menuUsers->menuAction());
        menuBar->addAction(menuExit->menuAction());
        menuUsers->addAction(actionLogout);
        menuUsers->addAction(actionLogout_2);
        menuExit->addAction(actionClose_Alt_F4);

        retranslateUi(teacherEditQuiz);

        QMetaObject::connectSlotsByName(teacherEditQuiz);
    } // setupUi

    void retranslateUi(QMainWindow *teacherEditQuiz)
    {
        teacherEditQuiz->setWindowTitle(QApplication::translate("teacherEditQuiz", "Teacher View Quiz", 0));
        actionLogout->setText(QApplication::translate("teacherEditQuiz", "Change Password", 0));
        actionClose_Alt_F4->setText(QApplication::translate("teacherEditQuiz", "Close (Alt + F4)", 0));
        actionLogout_2->setText(QApplication::translate("teacherEditQuiz", "Logout", 0));
        bg->setText(QString());
        homeBtn->setText(QApplication::translate("teacherEditQuiz", "Home", 0));
        viewquizBtn->setText(QApplication::translate("teacherEditQuiz", "View Quiz", 0));
        createquizBtn->setText(QApplication::translate("teacherEditQuiz", "Create Quiz", 0));
        lineEdit->setPlaceholderText(QApplication::translate("teacherEditQuiz", "Edit Quiz", 0));
        viewquiz_deletequiz->setText(QApplication::translate("teacherEditQuiz", "Delete Entire Quiz (!)", 0));
        viewquiz_addnewqns->setText(QApplication::translate("teacherEditQuiz", "Add New Question", 0));
        menuUsers->setTitle(QApplication::translate("teacherEditQuiz", "Users", 0));
        menuExit->setTitle(QApplication::translate("teacherEditQuiz", "Exit", 0));
    } // retranslateUi

};

namespace Ui {
    class teacherEditQuiz: public Ui_teacherEditQuiz {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEACHEREDITQUIZ_H
