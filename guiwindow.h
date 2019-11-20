#ifndef GUIWINDOW_H
#define GUIWINDOW_H

#include <QMainWindow>

namespace Ui {
class GuiWindow;
}

class GuiWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit GuiWindow(QWidget *parent = 0);
    ~GuiWindow();

private slots:
    void on_btnDec_1_clicked();

    void on_btnInc_1_clicked();

    void on_btnDec_2_clicked();

    void on_btnInc_2_clicked();

    void on_btnDec_3_clicked();

    void on_btnInc_3_clicked();

    void on_btnDec_5_clicked();

    void on_btnInc_5_clicked();

    void on_btnDec_6_clicked();

    void on_btnInc_6_clicked();

    void on_pushButton_clicked();

private:
    Ui::GuiWindow *ui;
};

#endif // GUIWINDOW_H
