/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Mon 13. Jun 00:16:57 2011
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStatusBar>
#include <QtGui/QTextBrowser>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_Open;
    QAction *action_Save;
    QAction *action_Close;
    QAction *actionUndo;
    QAction *actionCut;
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *actionDelete;
    QAction *actionFind;
    QAction *actionFind_Next;
    QAction *actionSelect_All;
    QAction *actionEnregistrer;
    QAction *actionNew;
    QAction *actionFont;
    QAction *actionView_Help;
    QAction *actionAbout_Ping_Logger;
    QAction *actionOpenIcon;
    QAction *actionSaveIcon;
    QAction *actionConversion;
    QAction *actionCleartxt;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *Browse_button;
    QSpacerItem *horizontalSpacer_3;
    QGridLayout *gridLayout_2;
    QRadioButton *OutRatio;
    QRadioButton *OutRatio2;
    QLabel *label_3;
    QRadioButton *InRatio;
    QRadioButton *InRatio2;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_4;
    QGridLayout *gridLayout_3;
    QLabel *label_5;
    QLabel *label_6;
    QTextBrowser *textBrowser;
    QTextBrowser *textBrowser_res;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_5;
    QLineEdit *min_line;
    QLabel *max_label;
    QLineEdit *max_line;
    QLabel *avg_label;
    QLineEdit *avg_line;
    QLabel *min_label;
    QLabel *label_4;
    QPushButton *Conv_button;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menu;
    QMenu *menuFormat;
    QStatusBar *statusBar;
    QToolBar *toolBar;
    QButtonGroup *buttonGroup_2;
    QButtonGroup *buttonGroup;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(875, 563);
        QFont font;
        font.setFamily(QString::fromUtf8("Consolas"));
        font.setPointSize(8);
        font.setBold(false);
        font.setWeight(50);
        font.setKerning(true);
        font.setStyleStrategy(QFont::PreferDefault);
        MainWindow->setFont(font);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        action_Open = new QAction(MainWindow);
        action_Open->setObjectName(QString::fromUtf8("action_Open"));
        action_Save = new QAction(MainWindow);
        action_Save->setObjectName(QString::fromUtf8("action_Save"));
        action_Close = new QAction(MainWindow);
        action_Close->setObjectName(QString::fromUtf8("action_Close"));
        actionUndo = new QAction(MainWindow);
        actionUndo->setObjectName(QString::fromUtf8("actionUndo"));
        actionCut = new QAction(MainWindow);
        actionCut->setObjectName(QString::fromUtf8("actionCut"));
        actionCopy = new QAction(MainWindow);
        actionCopy->setObjectName(QString::fromUtf8("actionCopy"));
        actionPaste = new QAction(MainWindow);
        actionPaste->setObjectName(QString::fromUtf8("actionPaste"));
        actionDelete = new QAction(MainWindow);
        actionDelete->setObjectName(QString::fromUtf8("actionDelete"));
        actionFind = new QAction(MainWindow);
        actionFind->setObjectName(QString::fromUtf8("actionFind"));
        actionFind_Next = new QAction(MainWindow);
        actionFind_Next->setObjectName(QString::fromUtf8("actionFind_Next"));
        actionSelect_All = new QAction(MainWindow);
        actionSelect_All->setObjectName(QString::fromUtf8("actionSelect_All"));
        actionEnregistrer = new QAction(MainWindow);
        actionEnregistrer->setObjectName(QString::fromUtf8("actionEnregistrer"));
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        actionFont = new QAction(MainWindow);
        actionFont->setObjectName(QString::fromUtf8("actionFont"));
        actionView_Help = new QAction(MainWindow);
        actionView_Help->setObjectName(QString::fromUtf8("actionView_Help"));
        actionAbout_Ping_Logger = new QAction(MainWindow);
        actionAbout_Ping_Logger->setObjectName(QString::fromUtf8("actionAbout_Ping_Logger"));
        actionOpenIcon = new QAction(MainWindow);
        actionOpenIcon->setObjectName(QString::fromUtf8("actionOpenIcon"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/icons/8.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpenIcon->setIcon(icon);
        actionSaveIcon = new QAction(MainWindow);
        actionSaveIcon->setObjectName(QString::fromUtf8("actionSaveIcon"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/icons/121.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSaveIcon->setIcon(icon1);
        actionConversion = new QAction(MainWindow);
        actionConversion->setObjectName(QString::fromUtf8("actionConversion"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/new/icons/48.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionConversion->setIcon(icon2);
        actionCleartxt = new QAction(MainWindow);
        actionCleartxt->setObjectName(QString::fromUtf8("actionCleartxt"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/new/icons/38.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCleartxt->setIcon(icon3);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        Browse_button = new QPushButton(centralWidget);
        Browse_button->setObjectName(QString::fromUtf8("Browse_button"));

        horizontalLayout->addWidget(Browse_button);

        horizontalSpacer_3 = new QSpacerItem(70, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        OutRatio = new QRadioButton(centralWidget);
        buttonGroup = new QButtonGroup(MainWindow);
        buttonGroup->setObjectName(QString::fromUtf8("buttonGroup"));
        buttonGroup->addButton(OutRatio);
        OutRatio->setObjectName(QString::fromUtf8("OutRatio"));
        OutRatio->setEnabled(false);
        OutRatio->setChecked(false);
        OutRatio->setAutoExclusive(true);

        gridLayout_2->addWidget(OutRatio, 0, 4, 1, 1);

        OutRatio2 = new QRadioButton(centralWidget);
        buttonGroup->addButton(OutRatio2);
        OutRatio2->setObjectName(QString::fromUtf8("OutRatio2"));
        OutRatio2->setChecked(true);
        OutRatio2->setAutoExclusive(true);

        gridLayout_2->addWidget(OutRatio2, 1, 4, 1, 1);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 0, 3, 1, 1);

        InRatio = new QRadioButton(centralWidget);
        buttonGroup_2 = new QButtonGroup(MainWindow);
        buttonGroup_2->setObjectName(QString::fromUtf8("buttonGroup_2"));
        buttonGroup_2->addButton(InRatio);
        InRatio->setObjectName(QString::fromUtf8("InRatio"));
        InRatio->setChecked(true);
        InRatio->setAutoExclusive(true);

        gridLayout_2->addWidget(InRatio, 0, 1, 1, 1);

        InRatio2 = new QRadioButton(centralWidget);
        buttonGroup_2->addButton(InRatio2);
        InRatio2->setObjectName(QString::fromUtf8("InRatio2"));
        InRatio2->setAutoExclusive(true);

        gridLayout_2->addWidget(InRatio2, 1, 1, 1, 1);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 0, 5, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(28, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_4, 0, 2, 1, 1);


        verticalLayout->addLayout(gridLayout_2);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_3->addWidget(label_5, 0, 0, 1, 1);

        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_3->addWidget(label_6, 0, 1, 1, 1);

        textBrowser = new QTextBrowser(centralWidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Consolas"));
        font1.setPointSize(10);
        font1.setItalic(true);
        textBrowser->setFont(font1);
        textBrowser->setStyleSheet(QString::fromUtf8(""));

        gridLayout_3->addWidget(textBrowser, 1, 0, 1, 1);

        textBrowser_res = new QTextBrowser(centralWidget);
        textBrowser_res->setObjectName(QString::fromUtf8("textBrowser_res"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Consolas"));
        font2.setPointSize(10);
        font2.setBold(false);
        font2.setItalic(true);
        font2.setWeight(50);
        textBrowser_res->setFont(font2);
        textBrowser_res->setStyleSheet(QString::fromUtf8(""));

        gridLayout_3->addWidget(textBrowser_res, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_3);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 0, 3, 1, 1);

        min_line = new QLineEdit(centralWidget);
        min_line->setObjectName(QString::fromUtf8("min_line"));
        min_line->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(min_line->sizePolicy().hasHeightForWidth());
        min_line->setSizePolicy(sizePolicy);
        QFont font3;
        font3.setBold(true);
        font3.setWeight(75);
        min_line->setFont(font3);
        min_line->setStyleSheet(QString::fromUtf8(""));
        min_line->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(min_line, 0, 6, 1, 1);

        max_label = new QLabel(centralWidget);
        max_label->setObjectName(QString::fromUtf8("max_label"));
        QFont font4;
        font4.setBold(true);
        font4.setItalic(true);
        font4.setWeight(75);
        max_label->setFont(font4);
        max_label->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(max_label, 0, 7, 1, 1);

        max_line = new QLineEdit(centralWidget);
        max_line->setObjectName(QString::fromUtf8("max_line"));
        max_line->setFont(font3);
        max_line->setStyleSheet(QString::fromUtf8(""));
        max_line->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(max_line, 0, 8, 1, 1);

        avg_label = new QLabel(centralWidget);
        avg_label->setObjectName(QString::fromUtf8("avg_label"));
        avg_label->setFont(font4);

        gridLayout->addWidget(avg_label, 0, 9, 1, 1);

        avg_line = new QLineEdit(centralWidget);
        avg_line->setObjectName(QString::fromUtf8("avg_line"));
        avg_line->setFont(font3);
        avg_line->setStyleSheet(QString::fromUtf8(""));
        avg_line->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(avg_line, 0, 10, 1, 1);

        min_label = new QLabel(centralWidget);
        min_label->setObjectName(QString::fromUtf8("min_label"));
        min_label->setFont(font4);
        min_label->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(min_label, 0, 5, 1, 1);

        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Consolas"));
        font5.setPointSize(9);
        font5.setBold(true);
        font5.setUnderline(false);
        font5.setWeight(75);
        label_4->setFont(font5);

        gridLayout->addWidget(label_4, 0, 4, 1, 1);

        Conv_button = new QPushButton(centralWidget);
        Conv_button->setObjectName(QString::fromUtf8("Conv_button"));

        gridLayout->addWidget(Conv_button, 0, 2, 1, 1);


        verticalLayout->addLayout(gridLayout);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 875, 18));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menu = new QMenu(menuBar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menuFormat = new QMenu(menuBar);
        menuFormat->setObjectName(QString::fromUtf8("menuFormat"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setMovable(false);
        toolBar->setAllowedAreas(Qt::TopToolBarArea);
        toolBar->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        toolBar->setFloatable(false);
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);
#ifndef QT_NO_SHORTCUT
        label->setBuddy(lineEdit);
        label_3->setBuddy(OutRatio);
        label_2->setBuddy(InRatio);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(lineEdit, Browse_button);
        QWidget::setTabOrder(Browse_button, InRatio);
        QWidget::setTabOrder(InRatio, InRatio2);
        QWidget::setTabOrder(InRatio2, OutRatio);
        QWidget::setTabOrder(OutRatio, OutRatio2);
        QWidget::setTabOrder(OutRatio2, textBrowser);
        QWidget::setTabOrder(textBrowser, textBrowser_res);
        QWidget::setTabOrder(textBrowser_res, Conv_button);
        QWidget::setTabOrder(Conv_button, min_line);
        QWidget::setTabOrder(min_line, max_line);
        QWidget::setTabOrder(max_line, avg_line);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menuFormat->menuAction());
        menuBar->addAction(menu->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(action_Open);
        menuFile->addAction(actionEnregistrer);
        menuFile->addAction(action_Save);
        menuFile->addAction(action_Close);
        menuEdit->addAction(actionUndo);
        menuEdit->addSeparator();
        menuEdit->addAction(actionCut);
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionPaste);
        menuEdit->addAction(actionDelete);
        menuEdit->addSeparator();
        menuEdit->addAction(actionFind);
        menuEdit->addAction(actionFind_Next);
        menuEdit->addSeparator();
        menuEdit->addAction(actionSelect_All);
        menu->addAction(actionView_Help);
        menu->addSeparator();
        menu->addAction(actionAbout_Ping_Logger);
        menuFormat->addAction(actionFont);
        toolBar->addAction(actionOpenIcon);
        toolBar->addAction(actionSaveIcon);
        toolBar->addAction(actionConversion);
        toolBar->addAction(actionCleartxt);

        retranslateUi(MainWindow);
        QObject::connect(OutRatio, SIGNAL(toggled(bool)), InRatio, SLOT(setDisabled(bool)));
        QObject::connect(InRatio, SIGNAL(toggled(bool)), OutRatio, SLOT(setDisabled(bool)));
        QObject::connect(OutRatio, SIGNAL(toggled(bool)), InRatio2, SLOT(setChecked(bool)));
        QObject::connect(lineEdit, SIGNAL(returnPressed()), MainWindow, SLOT(openEnterLine()));
        QObject::connect(Conv_button, SIGNAL(clicked()), MainWindow, SLOT(conversion()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Ping Tester - Beta 0.9", 0, QApplication::UnicodeUTF8));
        action_Open->setText(QApplication::translate("MainWindow", "&Open...", 0, QApplication::UnicodeUTF8));
        action_Open->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", 0, QApplication::UnicodeUTF8));
        action_Save->setText(QApplication::translate("MainWindow", "Save As...", 0, QApplication::UnicodeUTF8));
        action_Save->setIconText(QApplication::translate("MainWindow", "Enregistrer sous...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        action_Save->setToolTip(QApplication::translate("MainWindow", "Save", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        action_Save->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", 0, QApplication::UnicodeUTF8));
        action_Close->setText(QApplication::translate("MainWindow", "&Exit", 0, QApplication::UnicodeUTF8));
        action_Close->setIconText(QApplication::translate("MainWindow", "Exit", 0, QApplication::UnicodeUTF8));
        actionUndo->setText(QApplication::translate("MainWindow", "Undo", 0, QApplication::UnicodeUTF8));
        actionUndo->setShortcut(QApplication::translate("MainWindow", "Ctrl+Z", 0, QApplication::UnicodeUTF8));
        actionCut->setText(QApplication::translate("MainWindow", "C&ut", 0, QApplication::UnicodeUTF8));
        actionCut->setShortcut(QApplication::translate("MainWindow", "Ctrl+X", 0, QApplication::UnicodeUTF8));
        actionCopy->setText(QApplication::translate("MainWindow", "C&opy", 0, QApplication::UnicodeUTF8));
        actionCopy->setShortcut(QApplication::translate("MainWindow", "Ctrl+C", 0, QApplication::UnicodeUTF8));
        actionPaste->setText(QApplication::translate("MainWindow", "&Paste", 0, QApplication::UnicodeUTF8));
        actionPaste->setShortcut(QApplication::translate("MainWindow", "Ctrl+V", 0, QApplication::UnicodeUTF8));
        actionDelete->setText(QApplication::translate("MainWindow", "Delete", 0, QApplication::UnicodeUTF8));
        actionDelete->setShortcut(QApplication::translate("MainWindow", "Del", 0, QApplication::UnicodeUTF8));
        actionFind->setText(QApplication::translate("MainWindow", "&Find...", 0, QApplication::UnicodeUTF8));
        actionFind->setShortcut(QApplication::translate("MainWindow", "Ctrl+F", 0, QApplication::UnicodeUTF8));
        actionFind_Next->setText(QApplication::translate("MainWindow", "Find Next", 0, QApplication::UnicodeUTF8));
        actionFind_Next->setShortcut(QApplication::translate("MainWindow", "F3", 0, QApplication::UnicodeUTF8));
        actionSelect_All->setText(QApplication::translate("MainWindow", "Select All", 0, QApplication::UnicodeUTF8));
        actionSelect_All->setShortcut(QApplication::translate("MainWindow", "Ctrl+A", 0, QApplication::UnicodeUTF8));
        actionEnregistrer->setText(QApplication::translate("MainWindow", "&Save", 0, QApplication::UnicodeUTF8));
        actionEnregistrer->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+S", 0, QApplication::UnicodeUTF8));
        actionNew->setText(QApplication::translate("MainWindow", "&New", 0, QApplication::UnicodeUTF8));
        actionNew->setShortcut(QApplication::translate("MainWindow", "Ctrl+N", 0, QApplication::UnicodeUTF8));
        actionFont->setText(QApplication::translate("MainWindow", "Font...", 0, QApplication::UnicodeUTF8));
        actionView_Help->setText(QApplication::translate("MainWindow", "View Help", 0, QApplication::UnicodeUTF8));
        actionAbout_Ping_Logger->setText(QApplication::translate("MainWindow", "About Ping Logger", 0, QApplication::UnicodeUTF8));
        actionOpenIcon->setText(QApplication::translate("MainWindow", "Open", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionOpenIcon->setToolTip(QApplication::translate("MainWindow", "Open File", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionSaveIcon->setText(QApplication::translate("MainWindow", "Save", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionSaveIcon->setToolTip(QApplication::translate("MainWindow", "Save File", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionConversion->setText(QApplication::translate("MainWindow", "Conversion", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionConversion->setToolTip(QApplication::translate("MainWindow", "Convert file type", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionCleartxt->setText(QApplication::translate("MainWindow", "Clear", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionCleartxt->setToolTip(QApplication::translate("MainWindow", "Clear the text", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("MainWindow", "File", 0, QApplication::UnicodeUTF8));
        Browse_button->setText(QApplication::translate("MainWindow", "Browse...", 0, QApplication::UnicodeUTF8));
        OutRatio->setText(QApplication::translate("MainWindow", "XML", 0, QApplication::UnicodeUTF8));
        OutRatio2->setText(QApplication::translate("MainWindow", "Formated Text", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "Output", 0, QApplication::UnicodeUTF8));
        InRatio->setText(QApplication::translate("MainWindow", "XML", 0, QApplication::UnicodeUTF8));
        InRatio2->setText(QApplication::translate("MainWindow", "Log File", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "Input", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindow", "Input Data", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("MainWindow", "Output Data", 0, QApplication::UnicodeUTF8));
        max_label->setText(QApplication::translate("MainWindow", "Maximum", 0, QApplication::UnicodeUTF8));
        avg_label->setText(QApplication::translate("MainWindow", "Average", 0, QApplication::UnicodeUTF8));
        min_label->setText(QApplication::translate("MainWindow", "Minimum", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "Stats:", 0, QApplication::UnicodeUTF8));
        Conv_button->setText(QApplication::translate("MainWindow", "Start Conversion", 0, QApplication::UnicodeUTF8));
        menuFile->setTitle(QApplication::translate("MainWindow", "&File", 0, QApplication::UnicodeUTF8));
        menuEdit->setTitle(QApplication::translate("MainWindow", "&Edit", 0, QApplication::UnicodeUTF8));
        menu->setTitle(QApplication::translate("MainWindow", "&Help", 0, QApplication::UnicodeUTF8));
        menuFormat->setTitle(QApplication::translate("MainWindow", "For&mat", 0, QApplication::UnicodeUTF8));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
