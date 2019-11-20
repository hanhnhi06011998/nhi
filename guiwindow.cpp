#include "guiwindow.h"
#include "ui_guiwindow.h"
#include "openglwindow.h"
#include <QDebug>

GuiWindow::GuiWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::GuiWindow)
{
    ui->setupUi(this);
}

GuiWindow::~GuiWindow()
{
    delete ui;
}

void GuiWindow::on_btnDec_1_clicked()
{
    ui->widget->degJ[0] -= 10;
    qDebug() << "J1=" << ui->widget->degJ[0];
}

void GuiWindow::on_btnInc_1_clicked()
{
     ui->widget->degJ[0] += 10;
     qDebug() << "J1=" << ui->widget->degJ[0];
}

void GuiWindow::on_btnDec_2_clicked()
{
    ui->widget->degJ[1] -= 10;
    qDebug() << "J2=" << ui->widget->degJ[1];
}

void GuiWindow::on_btnInc_2_clicked()
{
    ui->widget->degJ[1] += 10;
    qDebug() << "J2=" << ui->widget->degJ[1];
}

void GuiWindow::on_btnDec_3_clicked()
{
    ui->widget->degJ[2] -= 10;
    qDebug() << "J3=" << ui->widget->degJ[2];
}

void GuiWindow::on_btnInc_3_clicked()
{
    ui->widget->degJ[2] += 10;
    qDebug() << "J3=" << ui->widget->degJ[2];
}

void GuiWindow::on_btnDec_5_clicked()
{
    ui->widget->degJ[3] -= 10;
    qDebug() << "J5=" << ui->widget->degJ[3];
}

void GuiWindow::on_btnInc_5_clicked()
{
    ui->widget->degJ[3] += 10;
    qDebug() << "J5=" << ui->widget->degJ[3];
}

void GuiWindow::on_btnDec_6_clicked()
{
    ui->widget->degJ[4] -= 10;
    qDebug() << "J6=" << ui->widget->degJ[4];
}

void GuiWindow::on_btnInc_6_clicked()
{
    ui->widget->degJ[4] += 10;
    qDebug() << "J6=" << ui->widget->degJ[4];
}

void GuiWindow::on_pushButton_clicked()
{
    ui->widget->degJ[0] = 0;
    ui->widget->degJ[1] = 0;
    ui->widget->degJ[2] = 0;
    ui->widget->degJ[3] = 0;
    ui->widget->degJ[4] = 0;

    qDebug() << "J1=" << ui->widget->degJ[0];
    qDebug() << "J2=" << ui->widget->degJ[1];
    qDebug() << "J3=" << ui->widget->degJ[2];
    qDebug() << "J5=" << ui->widget->degJ[3];
    qDebug() << "J6=" << ui->widget->degJ[4];
}
