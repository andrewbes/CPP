#include "journalwindow.h"
#include "ui_journalwindow.h"

JournalWindow::JournalWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::JournalWindow)
{
    ui->setupUi(this);
}

JournalWindow::~JournalWindow()
{
    delete ui;
}

