#include "ay_main_window.h"
#include "./ui_ay_main_window.h"
#include "core/src/cef_core.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    CefCore core;

}

MainWindow::~MainWindow()
{
    delete ui;
}

