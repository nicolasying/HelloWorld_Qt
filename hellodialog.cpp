#include "hellodialog.h"
#include "ui_hellodialog.h"

HelloDialog::HelloDialog(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HelloDialog)
{
    ui->setupUi(this);
}

HelloDialog::~HelloDialog()
{
    delete ui;
}
