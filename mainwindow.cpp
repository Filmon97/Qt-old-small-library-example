#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtCore>
#include <QtGui>
#include <QMessageBox>
#include <QFileDialog>
#include <QFile>
#include <string>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    ui->dateEdit->setCalendarPopup(true);
    ui->dateEdit->setCalendarWidget(ui->calendarWidget);
    fileName="";
    ui->provinciaBox->addItem(" ");
    ui->provinciaBox->addItem("AG");
    ui->provinciaBox->addItem("AL");
    ui->provinciaBox->addItem("AN");
    ui->provinciaBox->addItem("AO");
    ui->provinciaBox->addItem("AQ");
    ui->provinciaBox->addItem("AR");
    ui->provinciaBox->addItem("AP");
    ui->provinciaBox->addItem("AT");
    ui->provinciaBox->addItem("AV");
    ui->provinciaBox->addItem("BA");
    ui->provinciaBox->addItem("BT");
    ui->provinciaBox->addItem("BL");
    ui->provinciaBox->addItem("BN");
    ui->provinciaBox->addItem("BG");
    ui->provinciaBox->addItem("BI");
    ui->provinciaBox->addItem("BO");
    ui->provinciaBox->addItem("BZ");
    ui->provinciaBox->addItem("BS");
    ui->provinciaBox->addItem("BR");
    ui->provinciaBox->addItem("CA");
    ui->provinciaBox->addItem("CL");
    ui->provinciaBox->addItem("CB");
    ui->provinciaBox->addItem("CE");
    ui->provinciaBox->addItem("CT");
    ui->provinciaBox->addItem("CZ");
    ui->provinciaBox->addItem("CH");
    ui->provinciaBox->addItem("CO");
    ui->provinciaBox->addItem("CS");
    ui->provinciaBox->addItem("CR");
    ui->provinciaBox->addItem("KR");
    ui->provinciaBox->addItem("CN");
    ui->provinciaBox->addItem("EN");
    ui->provinciaBox->addItem("FM");
    ui->provinciaBox->addItem("FE");
    ui->provinciaBox->addItem("FI");
    ui->provinciaBox->addItem("FG");
    ui->provinciaBox->addItem("FC");
    ui->provinciaBox->addItem("FR");
    ui->provinciaBox->addItem("GE");
    ui->provinciaBox->addItem("GO");
    ui->provinciaBox->addItem("GR");
    ui->provinciaBox->addItem("IM");
    ui->provinciaBox->addItem("IS");
    ui->provinciaBox->addItem("SP");
    ui->provinciaBox->addItem("LT");
    ui->provinciaBox->addItem("LE");
    ui->provinciaBox->addItem("LC");
    ui->provinciaBox->addItem("LI");
    ui->provinciaBox->addItem("LO");
    ui->provinciaBox->addItem("LU");
    ui->provinciaBox->addItem("MC");
    ui->provinciaBox->addItem("MN");
    ui->provinciaBox->addItem("MS");
    ui->provinciaBox->addItem("MT");
    ui->provinciaBox->addItem("ME");
    ui->provinciaBox->addItem("MI");
    ui->provinciaBox->addItem("MO");
    ui->provinciaBox->addItem("MB");
    ui->provinciaBox->addItem("NA");
    ui->provinciaBox->addItem("NO");
    ui->provinciaBox->addItem("NU");
    ui->provinciaBox->addItem("OR");
    ui->provinciaBox->addItem("PD");
    ui->provinciaBox->addItem("PA");
    ui->provinciaBox->addItem("PR");
    ui->provinciaBox->addItem("PV");
    ui->provinciaBox->addItem("PG");
    ui->provinciaBox->addItem("PU");
    ui->provinciaBox->addItem("PE");
    ui->provinciaBox->addItem("PC");
    ui->provinciaBox->addItem("PI");
    ui->provinciaBox->addItem("PT");
    ui->provinciaBox->addItem("PN");
    ui->provinciaBox->addItem("PZ");
    ui->provinciaBox->addItem("PO");
    ui->provinciaBox->addItem("RG");
    ui->provinciaBox->addItem("RA");
    ui->provinciaBox->addItem("RC");
    ui->provinciaBox->addItem("RE");
    ui->provinciaBox->addItem("RI");
    ui->provinciaBox->addItem("RN");
    ui->provinciaBox->addItem("RM");
    ui->provinciaBox->addItem("RO");
    ui->provinciaBox->addItem("SA");
    ui->provinciaBox->addItem("SS");
    ui->provinciaBox->addItem("SV");
    ui->provinciaBox->addItem("SI");
    ui->provinciaBox->addItem("SR");
    ui->provinciaBox->addItem("SO");
    ui->provinciaBox->addItem("TA");
    ui->provinciaBox->addItem("(stato Estero)");
    //residenza
    ui->residenzaBox->addItem(" ");
    ui->residenzaBox->addItem("AG");
    ui->residenzaBox->addItem("AL");
    ui->residenzaBox->addItem("AN");
    ui->residenzaBox->addItem("AO");
    ui->residenzaBox->addItem("AQ");
    ui->residenzaBox->addItem("AR");
    ui->residenzaBox->addItem("AP");
    ui->residenzaBox->addItem("AT");
    ui->residenzaBox->addItem("AV");
    ui->residenzaBox->addItem("BA");
    ui->residenzaBox->addItem("BT");
    ui->residenzaBox->addItem("BL");
    ui->residenzaBox->addItem("BN");
    ui->residenzaBox->addItem("BG");
    ui->residenzaBox->addItem("BI");
    ui->residenzaBox->addItem("BO");
    ui->residenzaBox->addItem("BZ");
    ui->residenzaBox->addItem("BS");
    ui->residenzaBox->addItem("BR");
    ui->residenzaBox->addItem("CA");
    ui->residenzaBox->addItem("CL");
    ui->residenzaBox->addItem("CB");
    ui->residenzaBox->addItem("CE");
    ui->residenzaBox->addItem("CT");
    ui->residenzaBox->addItem("CZ");
    ui->residenzaBox->addItem("CH");
    ui->residenzaBox->addItem("CO");
    ui->residenzaBox->addItem("CS");
    ui->residenzaBox->addItem("CR");
    ui->residenzaBox->addItem("KR");
    ui->residenzaBox->addItem("CN");
    ui->residenzaBox->addItem("EN");
    ui->residenzaBox->addItem("FM");
    ui->residenzaBox->addItem("FE");
    ui->residenzaBox->addItem("FI");
    ui->residenzaBox->addItem("FG");
    ui->residenzaBox->addItem("FC");
    ui->residenzaBox->addItem("FR");
    ui->residenzaBox->addItem("GE");
    ui->residenzaBox->addItem("GO");
    ui->residenzaBox->addItem("GR");
    ui->residenzaBox->addItem("IM");
    ui->residenzaBox->addItem("IS");
    ui->residenzaBox->addItem("SP");
    ui->residenzaBox->addItem("LT");
    ui->residenzaBox->addItem("LE");
    ui->residenzaBox->addItem("LC");
    ui->residenzaBox->addItem("LI");
    ui->residenzaBox->addItem("LO");
    ui->residenzaBox->addItem("LU");
    ui->residenzaBox->addItem("MC");
    ui->residenzaBox->addItem("MN");
    ui->residenzaBox->addItem("MS");
    ui->residenzaBox->addItem("MT");
    ui->residenzaBox->addItem("ME");
    ui->residenzaBox->addItem("MI");
    ui->residenzaBox->addItem("MO");
    ui->residenzaBox->addItem("MB");
    ui->residenzaBox->addItem("NA");
    ui->residenzaBox->addItem("NO");
    ui->residenzaBox->addItem("NU");
    ui->residenzaBox->addItem("OR");
    ui->residenzaBox->addItem("PD");
    ui->residenzaBox->addItem("PA");
    ui->residenzaBox->addItem("PR");
    ui->residenzaBox->addItem("PV");
    ui->residenzaBox->addItem("PG");
    ui->residenzaBox->addItem("PU");
    ui->residenzaBox->addItem("PE");
    ui->residenzaBox->addItem("PC");
    ui->residenzaBox->addItem("PI");
    ui->residenzaBox->addItem("PT");
    ui->residenzaBox->addItem("PN");
    ui->residenzaBox->addItem("PZ");
    ui->residenzaBox->addItem("PO");
    ui->residenzaBox->addItem("RG");
    ui->residenzaBox->addItem("RA");
    ui->residenzaBox->addItem("RC");
    ui->residenzaBox->addItem("RE");
    ui->residenzaBox->addItem("RI");
    ui->residenzaBox->addItem("RN");
    ui->residenzaBox->addItem("RM");
    ui->residenzaBox->addItem("RO");
    ui->residenzaBox->addItem("SA");
    ui->residenzaBox->addItem("SS");
    ui->residenzaBox->addItem("SV");
    ui->residenzaBox->addItem("SI");
    ui->residenzaBox->addItem("SR");
    ui->residenzaBox->addItem("SO");
    ui->residenzaBox->addItem("TA");

}

MainWindow::~MainWindow()
{
    delete ui;
}
/**
 * @brief MainWindow::on_nomeEdit_returnPressed
 * se viene premuto invio il fuoco verra incentrato al figlio successivo
 */
void MainWindow::on_nomeEdit_returnPressed()
{
    this->focusNextChild();
}
/**
 * @brief MainWindow::on_cognomeEdit_returnPressed
 * se viene premuto invio il fuoco verra incentrato al figlio successivo
 */
void MainWindow::on_cognomeEdit_returnPressed()
{
    this->focusNextChild();
}
void MainWindow::on_actionOpen_triggered()
{
     fileName = QFileDialog::getOpenFileName(this, tr("Apri File"),
                                                     "rubrica",
                                                     tr("File di testo (*.txt*)"));
}
void MainWindow::on_actionInfo_triggered()
{
    QMessageBox::information(this,tr("GUIDA"),tr("cliccare su new se si vuole inserire un nuovo contatto , cliccare su salva se si vuole salvare la rubrica sul file ,cliccare su open per aprire il file dove si vuole salvare la rubrica"));
}
void MainWindow::on_actionSave_triggered()
{
    QString provincia,residenza,nome,cognome,data_di_nascita,messaggio;
    provincia=ui->provinciaBox->currentText();
    residenza=ui->residenzaBox->currentText();
    nome=ui->nomeEdit->text();
    cognome=ui->cognomeEdit->text();
    data_di_nascita=ui->dateEdit->text();
    messaggio=" "+nome+" "+cognome+" "+data_di_nascita+" "+residenza+" "+provincia;

    char *c_nome=(char *)nome.toStdString().c_str();
    char *c_cognome=(char *)cognome.toStdString().c_str();
    char *c_data_di_nascita=(char *)data_di_nascita.toStdString().c_str();
    char *c_provincia=(char *)provincia.toStdString().c_str();
    char *c_residenza=(char *)residenza.toStdString().c_str();
    agenda.inserimento(c_nome,c_cognome,c_data_di_nascita,c_provincia,c_residenza);
    if(fileName=="")
    {

        QMessageBox::StandardButton reply;
        reply = QMessageBox::question(this,tr("ERRORE"),tr("NON E' STATO SCELTO IL FILE IN CUI SCRIVERE VUOI FARLO ORA?"),QMessageBox::Yes |QMessageBox::No);

       if(reply == QMessageBox::Yes)
       {
           fileName = QFileDialog::getOpenFileName(this, tr("Apri File"),
                                                           "rubrica",
                                                           tr("File di testo (*.txt*)"));
           if(fileName.isEmpty())
           {
           QMessageBox::critical(this,tr("ERRORE"),tr("L'OPERAZIONE NON E' ANDATA A BUON FINE"));
           }
           else
           {
           QFile file(fileName);
           file.open(QIODevice::WriteOnly|QIODevice::Text);
           QTextStream out(&file);
           out<<messaggio<<endl;
           file.close();
           QMessageBox::information(this,tr("SALVA"),tr("OPERAZIONE AVVENUTA CON SUCCESSO"));
           }
       }
      }
    else
      {
        QString str = ui->nomeEdit->text();
        QFile file(fileName);
        file.open(QIODevice::WriteOnly|QIODevice::Text);
        QTextStream out(&file);
        out<<messaggio<<endl;
        file.close();
        if(fileName.isEmpty())
        {
        QMessageBox::critical(this,tr("ERRORE"),tr("L'OPERAZIONE NON E' ANDATA A BUON FINE"));
        }
        else
        {
            QMessageBox::information(this,tr("SALVA"),tr("OPERAZIONE AVVENUTA CON SUCCESSO"));
        }

}
}

void MainWindow::on_actionRead_triggered()
{
    if(fileName=="")
    {

        QMessageBox::StandardButton reply;
        reply = QMessageBox::question(this,tr("ERRORE"),tr("NON E' STATO SCELTO IL FILE IN CUI LEGGERE VUOI FARLO ORA?"),QMessageBox::Yes |QMessageBox::No);

       if(reply == QMessageBox::Yes)
       {
           fileName = QFileDialog::getOpenFileName(this, tr("Apri File"),
                                                           "rubrica",
                                                           tr("File di testo (*.txt*)"));
           if(fileName.isEmpty())
           {
           QMessageBox::critical(this,tr("ERRORE"),tr("L'OPERAZIONE NON E' ANDATA A BUON FINE"));
           }
           else
           {
           QFile file(fileName);
           file.open(QIODevice::ReadOnly|QIODevice::Text);
           QTextStream in(&file);
           QString str = in.readAll();
           file.close();
           QMessageBox::information(this,tr("LETTURA"),str);
           QMessageBox::information(this,tr("LEGGI"),tr("OPERAZIONE AVVENUTA CON SUCCESSO"));
       }
      }
      }
    else
      {
        QFile file(fileName);
        file.open(QIODevice::ReadOnly|QIODevice::Text);
        QTextStream in(&file);
        QString str = in.readAll();
        file.close();
        QMessageBox::information(this,tr("LETTURA"),str);
        if(fileName.isEmpty())
        {
        QMessageBox::critical(this,tr("ERRORE"),tr("L'OPERAZIONE NON E' ANDATA A BUON FINE"));
        }
        else
        {
            QMessageBox::information(this,tr("LEGGI"),tr("OPERAZIONE AVVENUTA CON SUCCESSO"));
        }

}
}

void MainWindow::on_actionNew_triggered()
{
    ui->nomeEdit->clear();
    ui->cognomeEdit->clear();
    ui->provinciaBox->setCurrentText(" ");
    ui->residenzaBox->setCurrentText(" ");
    QDate x;
    x.setDate(2000,01,01);
    ui->dateEdit->setDate(x);
}
