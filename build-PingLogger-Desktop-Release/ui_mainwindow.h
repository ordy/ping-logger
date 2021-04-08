/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

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
    QButtonGroup *buttonGroup;
    QButtonGroup *buttonGroup_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(875, 563);
        QFont font;
        font.setFamily(QString::fromUtf8("Fira Sans"));
        font.setPointSize(9);
        font.setBold(false);
        font.setWeight(50);
        font.setKerning(true);
        font.setStyleStrategy(QFont::PreferDefault);
        MainWindow->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/icons/icon4.svg"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setToolTipDuration(3);
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
        actionOpenIcon->setEnabled(true);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/icons/icon3.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpenIcon->setIcon(icon1);
        actionSaveIcon = new QAction(MainWindow);
        actionSaveIcon->setObjectName(QString::fromUtf8("actionSaveIcon"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/new/icons/icon1.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionSaveIcon->setIcon(icon2);
        actionConversion = new QAction(MainWindow);
        actionConversion->setObjectName(QString::fromUtf8("actionConversion"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/new/icons/icon2.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionConversion->setIcon(icon3);
        actionCleartxt = new QAction(MainWindow);
        actionCleartxt->setObjectName(QString::fromUtf8("actionCleartxt"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/new/icons/icon5.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionCleartxt->setIcon(icon4);
        actionCleartxt->setVisible(true);
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
        font1.setFamily(QString::fromUtf8("Cascadia Code"));
        font1.setPointSize(10);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        font1.setKerning(true);
        font1.setStyleStrategy(QFont::PreferDefault);
        textBrowser->setFont(font1);
        textBrowser->setStyleSheet(QString::fromUtf8(""));

        gridLayout_3->addWidget(textBrowser, 1, 0, 1, 1);

        textBrowser_res = new QTextBrowser(centralWidget);
        textBrowser_res->setObjectName(QString::fromUtf8("textBrowser_res"));
        textBrowser_res->setFont(font1);
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
        QFont font2;
        font2.setFamily(QString::fromUtf8("Roboto"));
        font2.setPointSize(9);
        font2.setBold(true);
        font2.setWeight(75);
        font2.setKerning(true);
        font2.setStyleStrategy(QFont::PreferDefault);
        min_line->setFont(font2);
        min_line->setStyleSheet(QString::fromUtf8(""));
        min_line->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(min_line, 0, 6, 1, 1);

        max_label = new QLabel(centralWidget);
        max_label->setObjectName(QString::fromUtf8("max_label"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Roboto"));
        font3.setPointSize(9);
        font3.setBold(true);
        font3.setItalic(true);
        font3.setWeight(75);
        font3.setKerning(true);
        font3.setStyleStrategy(QFont::PreferDefault);
        max_label->setFont(font3);
        max_label->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(max_label, 0, 7, 1, 1);

        max_line = new QLineEdit(centralWidget);
        max_line->setObjectName(QString::fromUtf8("max_line"));
        max_line->setFont(font2);
        max_line->setStyleSheet(QString::fromUtf8(""));
        max_line->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(max_line, 0, 8, 1, 1);

        avg_label = new QLabel(centralWidget);
        avg_label->setObjectName(QString::fromUtf8("avg_label"));
        avg_label->setFont(font3);

        gridLayout->addWidget(avg_label, 0, 9, 1, 1);

        avg_line = new QLineEdit(centralWidget);
        avg_line->setObjectName(QString::fromUtf8("avg_line"));
        avg_line->setFont(font2);
        avg_line->setStyleSheet(QString::fromUtf8(""));
        avg_line->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(avg_line, 0, 10, 1, 1);

        min_label = new QLabel(centralWidget);
        min_label->setObjectName(QString::fromUtf8("min_label"));
        min_label->setFont(font3);
        min_label->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(min_label, 0, 5, 1, 1);

        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Consolas"));
        font4.setPointSize(9);
        font4.setBold(true);
        font4.setUnderline(false);
        font4.setWeight(75);
        font4.setKerning(true);
        font4.setStyleStrategy(QFont::PreferDefault);
        label_4->setFont(font4);

        gridLayout->addWidget(label_4, 0, 4, 1, 1);

        Conv_button = new QPushButton(centralWidget);
        Conv_button->setObjectName(QString::fromUtf8("Conv_button"));

        gridLayout->addWidget(Conv_button, 0, 2, 1, 1);


        verticalLayout->addLayout(gridLayout);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 875, 21));
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
        toolBar->setIconSize(QSize(22, 22));
        toolBar->setToolButtonStyle(Qt::ToolButtonFollowStyle);
        toolBar->setFloatable(false);
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);
#if QT_CONFIG(shortcut)
        label->setBuddy(lineEdit);
        label_3->setBuddy(OutRatio);
        label_2->setBuddy(InRatio);
#endif // QT_CONFIG(shortcut)
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
        toolBar->addAction(actionCleartxt);
        toolBar->addAction(actionConversion);

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
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Ping Logger", nullptr));
        action_Open->setText(QCoreApplication::translate("MainWindow", "&Open...", nullptr));
#if QT_CONFIG(shortcut)
        action_Open->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        action_Save->setText(QCoreApplication::translate("MainWindow", "Save As...", nullptr));
        action_Save->setIconText(QCoreApplication::translate("MainWindow", "Enregistrer sous...", nullptr));
#if QT_CONFIG(tooltip)
        action_Save->setToolTip(QCoreApplication::translate("MainWindow", "Save", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        action_Save->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        action_Close->setText(QCoreApplication::translate("MainWindow", "&Exit", nullptr));
        action_Close->setIconText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        actionUndo->setText(QCoreApplication::translate("MainWindow", "Undo", nullptr));
#if QT_CONFIG(shortcut)
        actionUndo->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Z", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCut->setText(QCoreApplication::translate("MainWindow", "C&ut", nullptr));
#if QT_CONFIG(shortcut)
        actionCut->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+X", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCopy->setText(QCoreApplication::translate("MainWindow", "C&opy", nullptr));
#if QT_CONFIG(shortcut)
        actionCopy->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+C", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPaste->setText(QCoreApplication::translate("MainWindow", "&Paste", nullptr));
#if QT_CONFIG(shortcut)
        actionPaste->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+V", nullptr));
#endif // QT_CONFIG(shortcut)
        actionDelete->setText(QCoreApplication::translate("MainWindow", "Delete", nullptr));
#if QT_CONFIG(shortcut)
        actionDelete->setShortcut(QCoreApplication::translate("MainWindow", "Del", nullptr));
#endif // QT_CONFIG(shortcut)
        actionFind->setText(QCoreApplication::translate("MainWindow", "&Find...", nullptr));
#if QT_CONFIG(shortcut)
        actionFind->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+F", nullptr));
#endif // QT_CONFIG(shortcut)
        actionFind_Next->setText(QCoreApplication::translate("MainWindow", "Find Next", nullptr));
#if QT_CONFIG(shortcut)
        actionFind_Next->setShortcut(QCoreApplication::translate("MainWindow", "F3", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSelect_All->setText(QCoreApplication::translate("MainWindow", "Select All", nullptr));
#if QT_CONFIG(shortcut)
        actionSelect_All->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+A", nullptr));
#endif // QT_CONFIG(shortcut)
        actionEnregistrer->setText(QCoreApplication::translate("MainWindow", "&Save", nullptr));
#if QT_CONFIG(shortcut)
        actionEnregistrer->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionNew->setText(QCoreApplication::translate("MainWindow", "&New", nullptr));
#if QT_CONFIG(shortcut)
        actionNew->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        actionFont->setText(QCoreApplication::translate("MainWindow", "Font...", nullptr));
        actionView_Help->setText(QCoreApplication::translate("MainWindow", "View Help", nullptr));
        actionAbout_Ping_Logger->setText(QCoreApplication::translate("MainWindow", "About Ping Logger", nullptr));
        actionOpenIcon->setText(QCoreApplication::translate("MainWindow", "Open", nullptr));
#if QT_CONFIG(tooltip)
        actionOpenIcon->setToolTip(QCoreApplication::translate("MainWindow", "Open File", nullptr));
#endif // QT_CONFIG(tooltip)
        actionSaveIcon->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
#if QT_CONFIG(tooltip)
        actionSaveIcon->setToolTip(QCoreApplication::translate("MainWindow", "Save File", nullptr));
#endif // QT_CONFIG(tooltip)
        actionConversion->setText(QCoreApplication::translate("MainWindow", "Conversion", nullptr));
#if QT_CONFIG(tooltip)
        actionConversion->setToolTip(QCoreApplication::translate("MainWindow", "Convert file type", nullptr));
#endif // QT_CONFIG(tooltip)
        actionCleartxt->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        actionCleartxt->setIconText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
#if QT_CONFIG(tooltip)
        actionCleartxt->setToolTip(QCoreApplication::translate("MainWindow", "Clear the text", nullptr));
#endif // QT_CONFIG(tooltip)
        label->setText(QCoreApplication::translate("MainWindow", "File", nullptr));
        Browse_button->setText(QCoreApplication::translate("MainWindow", "Browse...", nullptr));
        OutRatio->setText(QCoreApplication::translate("MainWindow", "XML", nullptr));
        OutRatio2->setText(QCoreApplication::translate("MainWindow", "Formated Text", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Output", nullptr));
        InRatio->setText(QCoreApplication::translate("MainWindow", "XML", nullptr));
        InRatio2->setText(QCoreApplication::translate("MainWindow", "Log File", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Input", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Input Data", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Output Data", nullptr));
        max_label->setText(QCoreApplication::translate("MainWindow", "Maximum", nullptr));
        avg_label->setText(QCoreApplication::translate("MainWindow", "Average", nullptr));
        min_label->setText(QCoreApplication::translate("MainWindow", "Minimum", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Stats:", nullptr));
        Conv_button->setText(QCoreApplication::translate("MainWindow", "Start Conversion", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "&File", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("MainWindow", "&Edit", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "&Help", nullptr));
        menuFormat->setTitle(QCoreApplication::translate("MainWindow", "For&mat", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
