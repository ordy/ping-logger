#include "mainwindow.hpp"
#include "ui_mainwindow.h"

using namespace std;

//Window settings
MainWindow::MainWindow(QWidget *parent):QMainWindow(parent),ui(new Ui::MainWindow){
    ui->setupUi(this);
    QDesktopWidget *desktop = QApplication::desktop();
    //Alligment of the application to the center of screen
    int screenWidth,  width;
    int screenHeight, height;
    int x, y;
    QSize windowSize;
    screenWidth  = desktop->width();
    screenHeight = desktop->height();
    windowSize = size();
    width  = windowSize.width();
    height = windowSize.height();
    x  = (screenWidth  - width)  / 2;
    y  = (screenHeight - height) / 2;
    y += 50;
    move(x, y);
    Fin_ext="noPath";
    Fout_ext="noPath";
    //Manually creating the action signals and slots
    QObject::connect(ui->Browse_button,   SIGNAL(clicked()),  this,SLOT(openFile()));
    QObject::connect(ui->action_Open,	  SIGNAL(triggered()),this,SLOT(openFile()));
    QObject::connect(ui->action_Save,     SIGNAL(triggered()),this,SLOT(saveFile()));
    QObject::connect(ui->actionOpenIcon,  SIGNAL(triggered()),this,SLOT(openFile()));
    QObject::connect(ui->actionSaveIcon,  SIGNAL(triggered()),this,SLOT(saveFile()));
    QObject::connect(ui->actionConversion,SIGNAL(triggered()),this,SLOT(conversion()));
    QObject::connect(ui->actionCleartxt,  SIGNAL(triggered()),this,SLOT(clear()));
}

MainWindow::~MainWindow(){
    delete ui;
}

void MainWindow::changeEvent(QEvent *e){
    QMainWindow::changeEvent(e);
    switch (e->type()){
        case QEvent::LanguageChange:
            ui->retranslateUi(this);
            break;
        default:
            break;
    }
}

//Ratio Buttons settings
void MainWindow::setInFileExt(){
    if(ui->InRatio->isChecked())
        Fin_ext = "xml";
    else
        Fin_ext = "log";
}

void MainWindow::setOutFileExt(){
    if(ui->OutRatio->isChecked())
        Fout_ext = "xml";
    else
        Fout_ext = "txt";
}

//Manually typing the filename in the file name
void MainWindow::openEnterLine(){
    string buffer;
    in_qFileName = ui->lineEdit->text();
    Fin.open(in_qFileName.toStdString().c_str());
    ui->textBrowser->clear();
    while(Fin.good()){
        getline(Fin, buffer);
        ui->textBrowser->append(QString(buffer.c_str()));
    }
    Fin.close();
}
//Openning the file browser
void MainWindow::openFile(){
    string buffer;
    setInFileExt();
    //File browser
    fileDialog = new QFileDialog;
    //File type restriction
    QStringList filters;
    if(Fin_ext == "xml"){
        filters << "XML files (*.xml)"
                << "Any files (*)";
    }else{
        filters << "Log files (*.log)"
                << "Any files (*)";
    }
    fileDialog->setNameFilters(filters);
    fileDialog->setFileMode(QFileDialog::AnyFile);
    fileDialog->setViewMode(QFileDialog::Detail);
    fileDialog->show();
    if(fileDialog->exec()){
        in_qFileName = fileDialog->selectedFiles().front();
    }
    ui->lineEdit->setText(in_qFileName);
    Fin.open(in_qFileName.toStdString().c_str(),ios::in);
    ui->textBrowser->clear();
    //Display file in the file input area
    while(Fin.good()){
        getline(Fin, buffer);
        ui->textBrowser->append(QString(buffer.c_str()));
    }
    Fin.close();
}
//File data extraction and file type conversion
void MainWindow::saveFile(){
    setOutFileExt();
    ElemPing *pelem=NULL;
    //Not saving empty files
    if(in_qFileName.isEmpty()){
        QMessageBox::critical(0,"File Error",
        "There is no input file or\nthe file name is incorrect.");
    }else{
        //Open the save file dialog
        if(Fout_ext == "xml")
            out_qFileName = QFileDialog::getSaveFileName(this, tr("Save as..."),"C:\\",tr("XML (*.xml)"));
        else
            out_qFileName = QFileDialog::getSaveFileName(this, tr("Save as..."),"C:\\",tr("Formated Text (*.txt)"));
        Fin.open(in_qFileName.toStdString().c_str(),ios::in);
        Fout.open(out_qFileName.toStdString().c_str(),ios::out);
        setInFileExt();
        if(Fout_ext == "xml"){
        //  .log to .xml conversion
            vector<Log2xml*> pinglines;
            while(Fin.good()){
                pelem = new Log2xml;
                Fin >> *(dynamic_cast<Log2xml*> (pelem));
                if((pelem->get_size()))
                    pinglines.push_back(dynamic_cast<Log2xml*>(pelem));
                else
                    delete pelem;
            }
            Fout << pinglines;
        }else if(Fin_ext == "log"){
        //  .log to .txt consersion
            vector<Log2txt*> pinglines;
            while(Fin.good()){
                pelem = new Log2txt;
                Fin >> *(dynamic_cast<Log2txt*> (pelem));
                if((pelem->get_size()))
                    pinglines.push_back(dynamic_cast<Log2txt*>(pelem));
                else
                    delete pelem;
            }
            Fout << pinglines;
        }else{
        //  .xml to .txt conversion
            vector<Xml2txt*> pinglines;
            while(Fin.good()){
                pelem = new Xml2txt;
                while((Fin.good()) && !(pelem->get_time())){
                    Fin >> *(dynamic_cast<Xml2txt*>(pelem));
                }
                if((pelem->get_ttl()))
                    pinglines.push_back(dynamic_cast<Xml2txt*>(pelem));
                else
                    delete pelem;
            }
            Fout << pinglines;
        }
        Fin.close();
        Fout.close();
    }
}
//Preview the conversion before saving it
void MainWindow::conversion(){
    int min=0, max=0, avg=0;
    char res_time[6];
    ElemPing *pelem=NULL;
    //Simulating a file with a string vector
    vector<string> conversion;
    vector<string>::iterator line;
    if(in_qFileName.isEmpty()){
        QMessageBox::critical(0,"File Error",
        "There is no input file or\nthe file name is incorrect.");
    }else{
        Fin.open(in_qFileName.toStdString().c_str(),ios::in);
        setInFileExt();
        if(Fin_ext == "log"){
            setOutFileExt();
            if(Fout_ext == "xml"){
            //  .log to .xml conversion
                vector<Log2xml*> pinglines;
                while(Fin.good()){
                    pelem = new Log2xml;
                    Fin >> *(dynamic_cast<Log2xml*> (pelem));
                    if((pelem->get_size()) != 0)
                        pinglines.push_back(dynamic_cast<Log2xml*>(pelem));
                }
                (dynamic_cast<Log2xml*> (pelem))->displayvect(conversion,min,max,avg,pinglines);
            }else{
            //  .log to .txt conversion
                vector<Log2txt*> pinglines;
                while(Fin.good()){
                    pelem = new Log2txt;
                    Fin >> *(dynamic_cast<Log2txt*> (pelem));
                    if((pelem->get_size()) != 0)
                        pinglines.push_back(dynamic_cast<Log2txt*>(pelem));
                }
                (dynamic_cast<Log2txt*> (pelem))->displayvect(conversion,min,max,avg,pinglines);
            }
        }else{
        //  .xml to .txt conversion
            vector<Xml2txt*> pinglines;
            while(Fin.good()){
                pelem = new Xml2txt;
                while(Fin.good() && !(pelem->get_ttl())){
                    Fin >> *(dynamic_cast<Xml2txt*>(pelem));
                }
                if((pelem->get_ttl()) != 0)
                    pinglines.push_back(dynamic_cast<Xml2txt*>(pelem));
            }
            (dynamic_cast<Xml2txt*> (pelem))->displayvect(conversion,min,max,avg,pinglines);
        }
        //Display the results after the conversion
        for(line=conversion.begin();line != conversion.end();++line)
            ui->textBrowser_res->append(QString((*line).c_str()));
        //Set the minumum, maximum and average results
        ui->min_line->setText(itoa(min,res_time,10));
        ui->max_line->setText(itoa(max,res_time,10));
        ui->avg_line->setText(itoa(avg,res_time,10));
        Fin.close();
    }
}
//Clear the current text areas and file line
void MainWindow::clear(){
    ui->textBrowser->clear();
    ui->textBrowser_res->clear();
    ui->max_line->clear();
    ui->min_line->clear();
    ui->avg_line->clear();
    ui->lineEdit->clear();
    in_qFileName.clear();
}
