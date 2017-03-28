/********************************************************************************
** Form generated from reading UI file 'teachercreatequiz.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEACHERCREATEQUIZ_H
#define UI_TEACHERCREATEQUIZ_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_teacherCreateQuiz
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
    QHBoxLayout *quiztitleLayout;
    QLineEdit *createquiztitletxtbox;
    QPushButton *createquiztitleBtn;
    QHBoxLayout *menu2;
    QPushButton *mcqBtn;
    QPushButton *tfBtn;
    QPushButton *saBtn;
    QLabel *qnLabel;
    QWidget *Content2;
    QVBoxLayout *verticalLayout_3;
    QWidget *mcqWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *mcqLayout;
    QLineEdit *mcqqnTextbox;
    QGroupBox *mcqGrpBox;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *combo1;
    QCheckBox *cb1;
    QLineEdit *cbtxt1;
    QHBoxLayout *combo4;
    QCheckBox *cb4;
    QLineEdit *cbtxt4;
    QHBoxLayout *combo3;
    QCheckBox *cb3;
    QLineEdit *cbtxt3;
    QHBoxLayout *combo2;
    QCheckBox *cb2;
    QLineEdit *cbtxt2;
    QPushButton *saveBtn_2;
    QWidget *tfWidget;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *tfLayout;
    QLineEdit *tfqnTextbox;
    QGroupBox *radioGrpBox;
    QRadioButton *tradioButton;
    QRadioButton *fradioBtn;
    QPushButton *saveBtn;
    QWidget *saWidget;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *saLayout;
    QLineEdit *saTextbox;
    QLineEdit *saansTextbox;
    QPushButton *pushButton;
    QMenuBar *menuBar;
    QMenu *menuUsers;
    QMenu *menuExit;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *teacherCreateQuiz)
    {
        if (teacherCreateQuiz->objectName().isEmpty())
            teacherCreateQuiz->setObjectName(QStringLiteral("teacherCreateQuiz"));
        teacherCreateQuiz->resize(1080, 830);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(teacherCreateQuiz->sizePolicy().hasHeightForWidth());
        teacherCreateQuiz->setSizePolicy(sizePolicy);
        teacherCreateQuiz->setMinimumSize(QSize(800, 600));
        QIcon icon;
        icon.addFile(QStringLiteral("../../../../../Desktop/javaicon.png"), QSize(), QIcon::Normal, QIcon::Off);
        teacherCreateQuiz->setWindowIcon(icon);
        actionLogout = new QAction(teacherCreateQuiz);
        actionLogout->setObjectName(QStringLiteral("actionLogout"));
        actionClose_Alt_F4 = new QAction(teacherCreateQuiz);
        actionClose_Alt_F4->setObjectName(QStringLiteral("actionClose_Alt_F4"));
        actionLogout_2 = new QAction(teacherCreateQuiz);
        actionLogout_2->setObjectName(QStringLiteral("actionLogout_2"));
        centralWidget = new QWidget(teacherCreateQuiz);
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
        title = new QLabel(centralWidget);
        title->setObjectName(QStringLiteral("title"));
        QFont font1;
        font1.setFamily(QStringLiteral("Arial"));
        font1.setPointSize(16);
        title->setFont(font1);

        Content->addWidget(title);

        quiztitleLayout = new QHBoxLayout();
        quiztitleLayout->setSpacing(6);
        quiztitleLayout->setObjectName(QStringLiteral("quiztitleLayout"));
        createquiztitletxtbox = new QLineEdit(centralWidget);
        createquiztitletxtbox->setObjectName(QStringLiteral("createquiztitletxtbox"));
        createquiztitletxtbox->setMaximumSize(QSize(857, 16777215));

        quiztitleLayout->addWidget(createquiztitletxtbox);

        createquiztitleBtn = new QPushButton(centralWidget);
        createquiztitleBtn->setObjectName(QStringLiteral("createquiztitleBtn"));

        quiztitleLayout->addWidget(createquiztitleBtn);

        quiztitleLayout->setStretch(0, 5);
        quiztitleLayout->setStretch(1, 1);

        Content->addLayout(quiztitleLayout);

        menu2 = new QHBoxLayout();
        menu2->setSpacing(6);
        menu2->setObjectName(QStringLiteral("menu2"));
        mcqBtn = new QPushButton(centralWidget);
        mcqBtn->setObjectName(QStringLiteral("mcqBtn"));

        menu2->addWidget(mcqBtn);

        tfBtn = new QPushButton(centralWidget);
        tfBtn->setObjectName(QStringLiteral("tfBtn"));

        menu2->addWidget(tfBtn);

        saBtn = new QPushButton(centralWidget);
        saBtn->setObjectName(QStringLiteral("saBtn"));

        menu2->addWidget(saBtn);


        Content->addLayout(menu2);


        verticalLayout->addLayout(Content);

        qnLabel = new QLabel(centralWidget);
        qnLabel->setObjectName(QStringLiteral("qnLabel"));

        verticalLayout->addWidget(qnLabel);

        Content2 = new QWidget(centralWidget);
        Content2->setObjectName(QStringLiteral("Content2"));
        verticalLayout_3 = new QVBoxLayout(Content2);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        mcqWidget = new QWidget(Content2);
        mcqWidget->setObjectName(QStringLiteral("mcqWidget"));
        horizontalLayout = new QHBoxLayout(mcqWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        mcqLayout = new QVBoxLayout();
        mcqLayout->setSpacing(6);
        mcqLayout->setObjectName(QStringLiteral("mcqLayout"));
        mcqqnTextbox = new QLineEdit(mcqWidget);
        mcqqnTextbox->setObjectName(QStringLiteral("mcqqnTextbox"));
        mcqqnTextbox->setMinimumSize(QSize(0, 50));

        mcqLayout->addWidget(mcqqnTextbox);

        mcqGrpBox = new QGroupBox(mcqWidget);
        mcqGrpBox->setObjectName(QStringLiteral("mcqGrpBox"));
        verticalLayout_2 = new QVBoxLayout(mcqGrpBox);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        combo1 = new QHBoxLayout();
        combo1->setSpacing(6);
        combo1->setObjectName(QStringLiteral("combo1"));
        cb1 = new QCheckBox(mcqGrpBox);
        cb1->setObjectName(QStringLiteral("cb1"));

        combo1->addWidget(cb1);

        cbtxt1 = new QLineEdit(mcqGrpBox);
        cbtxt1->setObjectName(QStringLiteral("cbtxt1"));

        combo1->addWidget(cbtxt1);


        verticalLayout_2->addLayout(combo1);

        combo4 = new QHBoxLayout();
        combo4->setSpacing(6);
        combo4->setObjectName(QStringLiteral("combo4"));
        cb4 = new QCheckBox(mcqGrpBox);
        cb4->setObjectName(QStringLiteral("cb4"));

        combo4->addWidget(cb4);

        cbtxt4 = new QLineEdit(mcqGrpBox);
        cbtxt4->setObjectName(QStringLiteral("cbtxt4"));

        combo4->addWidget(cbtxt4);


        verticalLayout_2->addLayout(combo4);

        combo3 = new QHBoxLayout();
        combo3->setSpacing(6);
        combo3->setObjectName(QStringLiteral("combo3"));
        cb3 = new QCheckBox(mcqGrpBox);
        cb3->setObjectName(QStringLiteral("cb3"));

        combo3->addWidget(cb3);

        cbtxt3 = new QLineEdit(mcqGrpBox);
        cbtxt3->setObjectName(QStringLiteral("cbtxt3"));

        combo3->addWidget(cbtxt3);


        verticalLayout_2->addLayout(combo3);

        combo2 = new QHBoxLayout();
        combo2->setSpacing(6);
        combo2->setObjectName(QStringLiteral("combo2"));
        cb2 = new QCheckBox(mcqGrpBox);
        cb2->setObjectName(QStringLiteral("cb2"));

        combo2->addWidget(cb2);

        cbtxt2 = new QLineEdit(mcqGrpBox);
        cbtxt2->setObjectName(QStringLiteral("cbtxt2"));

        combo2->addWidget(cbtxt2);


        verticalLayout_2->addLayout(combo2);


        mcqLayout->addWidget(mcqGrpBox);

        saveBtn_2 = new QPushButton(mcqWidget);
        saveBtn_2->setObjectName(QStringLiteral("saveBtn_2"));

        mcqLayout->addWidget(saveBtn_2, 0, Qt::AlignLeft);


        horizontalLayout->addLayout(mcqLayout);


        verticalLayout_3->addWidget(mcqWidget);

        tfWidget = new QWidget(Content2);
        tfWidget->setObjectName(QStringLiteral("tfWidget"));
        horizontalLayout_3 = new QHBoxLayout(tfWidget);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        tfLayout = new QVBoxLayout();
        tfLayout->setSpacing(6);
        tfLayout->setObjectName(QStringLiteral("tfLayout"));
        tfqnTextbox = new QLineEdit(tfWidget);
        tfqnTextbox->setObjectName(QStringLiteral("tfqnTextbox"));
        tfqnTextbox->setMinimumSize(QSize(0, 50));
        tfqnTextbox->setMaximumSize(QSize(1078, 16777215));
        tfqnTextbox->setClearButtonEnabled(false);

        tfLayout->addWidget(tfqnTextbox);

        radioGrpBox = new QGroupBox(tfWidget);
        radioGrpBox->setObjectName(QStringLiteral("radioGrpBox"));
        tradioButton = new QRadioButton(radioGrpBox);
        tradioButton->setObjectName(QStringLiteral("tradioButton"));
        tradioButton->setGeometry(QRect(20, 30, 119, 23));
        fradioBtn = new QRadioButton(radioGrpBox);
        fradioBtn->setObjectName(QStringLiteral("fradioBtn"));
        fradioBtn->setGeometry(QRect(170, 30, 119, 23));

        tfLayout->addWidget(radioGrpBox);

        saveBtn = new QPushButton(tfWidget);
        saveBtn->setObjectName(QStringLiteral("saveBtn"));

        tfLayout->addWidget(saveBtn, 0, Qt::AlignLeft);


        horizontalLayout_3->addLayout(tfLayout);


        verticalLayout_3->addWidget(tfWidget);

        saWidget = new QWidget(Content2);
        saWidget->setObjectName(QStringLiteral("saWidget"));
        horizontalLayout_2 = new QHBoxLayout(saWidget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        saLayout = new QVBoxLayout();
        saLayout->setSpacing(6);
        saLayout->setObjectName(QStringLiteral("saLayout"));
        saTextbox = new QLineEdit(saWidget);
        saTextbox->setObjectName(QStringLiteral("saTextbox"));
        saTextbox->setMinimumSize(QSize(0, 50));

        saLayout->addWidget(saTextbox);

        saansTextbox = new QLineEdit(saWidget);
        saansTextbox->setObjectName(QStringLiteral("saansTextbox"));
        saansTextbox->setMinimumSize(QSize(0, 50));

        saLayout->addWidget(saansTextbox);

        pushButton = new QPushButton(saWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        saLayout->addWidget(pushButton, 0, Qt::AlignLeft);


        horizontalLayout_2->addLayout(saLayout);


        verticalLayout_3->addWidget(saWidget);


        verticalLayout->addWidget(Content2);

        verticalLayout->setStretch(4, 1);
        teacherCreateQuiz->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(teacherCreateQuiz);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1080, 31));
        menuUsers = new QMenu(menuBar);
        menuUsers->setObjectName(QStringLiteral("menuUsers"));
        menuExit = new QMenu(menuBar);
        menuExit->setObjectName(QStringLiteral("menuExit"));
        teacherCreateQuiz->setMenuBar(menuBar);
        mainToolBar = new QToolBar(teacherCreateQuiz);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        teacherCreateQuiz->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(teacherCreateQuiz);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        teacherCreateQuiz->setStatusBar(statusBar);

        menuBar->addAction(menuUsers->menuAction());
        menuBar->addAction(menuExit->menuAction());
        menuUsers->addAction(actionLogout);
        menuUsers->addAction(actionLogout_2);
        menuExit->addAction(actionClose_Alt_F4);

        retranslateUi(teacherCreateQuiz);

        QMetaObject::connectSlotsByName(teacherCreateQuiz);
    } // setupUi

    void retranslateUi(QMainWindow *teacherCreateQuiz)
    {
        teacherCreateQuiz->setWindowTitle(QApplication::translate("teacherCreateQuiz", "Teacher Create Quiz", 0));
        actionLogout->setText(QApplication::translate("teacherCreateQuiz", "Change Password", 0));
        actionClose_Alt_F4->setText(QApplication::translate("teacherCreateQuiz", "Close (Alt + F4)", 0));
        actionLogout_2->setText(QApplication::translate("teacherCreateQuiz", "Logout", 0));
        bg->setText(QString());
        homeBtn->setText(QApplication::translate("teacherCreateQuiz", "Home", 0));
        viewquizBtn->setText(QApplication::translate("teacherCreateQuiz", "View Quiz", 0));
        createquizBtn->setText(QApplication::translate("teacherCreateQuiz", "Create Quiz", 0));
        title->setText(QApplication::translate("teacherCreateQuiz", "Teacher Create Quiz", 0));
        createquiztitletxtbox->setText(QString());
        createquiztitletxtbox->setPlaceholderText(QApplication::translate("teacherCreateQuiz", "Quiz Title", 0));
        createquiztitleBtn->setText(QApplication::translate("teacherCreateQuiz", "Create Quiz", 0));
        mcqBtn->setText(QApplication::translate("teacherCreateQuiz", "Add MCQ", 0));
        tfBtn->setText(QApplication::translate("teacherCreateQuiz", "Add T/ F", 0));
        saBtn->setText(QApplication::translate("teacherCreateQuiz", "Add Short Answer", 0));
        qnLabel->setText(QApplication::translate("teacherCreateQuiz", "TextLabel", 0));
        mcqqnTextbox->setPlaceholderText(QApplication::translate("teacherCreateQuiz", "Input Question", 0));
        mcqGrpBox->setTitle(QApplication::translate("teacherCreateQuiz", "Select Correct Answer", 0));
        cb1->setText(QString());
        cbtxt1->setPlaceholderText(QApplication::translate("teacherCreateQuiz", "Option 1", 0));
        cb4->setText(QString());
        cbtxt4->setPlaceholderText(QApplication::translate("teacherCreateQuiz", "Option 4", 0));
        cb3->setText(QString());
        cbtxt3->setPlaceholderText(QApplication::translate("teacherCreateQuiz", "Option 3", 0));
        cb2->setText(QString());
        cbtxt2->setPlaceholderText(QApplication::translate("teacherCreateQuiz", "Option 2", 0));
        saveBtn_2->setText(QApplication::translate("teacherCreateQuiz", "Save", 0));
        tfqnTextbox->setPlaceholderText(QApplication::translate("teacherCreateQuiz", "Input Question", 0));
        radioGrpBox->setTitle(QApplication::translate("teacherCreateQuiz", "Select Correct Answer", 0));
        tradioButton->setText(QApplication::translate("teacherCreateQuiz", "True", 0));
        fradioBtn->setText(QApplication::translate("teacherCreateQuiz", "False", 0));
        saveBtn->setText(QApplication::translate("teacherCreateQuiz", "Save", 0));
        saTextbox->setPlaceholderText(QApplication::translate("teacherCreateQuiz", "Input Question", 0));
        saansTextbox->setPlaceholderText(QApplication::translate("teacherCreateQuiz", "Input Answer", 0));
        pushButton->setText(QApplication::translate("teacherCreateQuiz", "Save", 0));
        menuUsers->setTitle(QApplication::translate("teacherCreateQuiz", "Users", 0));
        menuExit->setTitle(QApplication::translate("teacherCreateQuiz", "Exit", 0));
    } // retranslateUi

};

namespace Ui {
    class teacherCreateQuiz: public Ui_teacherCreateQuiz {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEACHERCREATEQUIZ_H
