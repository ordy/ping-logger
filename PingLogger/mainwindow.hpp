#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFileDialog>
#include <QtGui>
#include "elemping.hpp"
#include "log2txt.hpp"
#include "log2xml.hpp"
#include "xml2txt.hpp"

namespace Ui{
    class MainWindow;
}

class MainWindow : public QMainWindow{
    Q_OBJECT
public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();
protected:
    void changeEvent(QEvent *e);
    ifstream Fin;
    ofstream Fout;
private:
    Ui::MainWindow *ui;
    QFileDialog *fileDialog;
    QString in_qFileName;
    QString out_qFileName;
    QString Fin_ext;
    QString Fout_ext;
private slots:
    void setInFileExt();
    void setOutFileExt();
    void openEnterLine();
    void openFile();
    void saveFile();
    void conversion();
    void clear();
};

#endif // MAINWINDOW_H
