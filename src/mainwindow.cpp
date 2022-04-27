#include "../include/mainwindow.h"
#include <qgridlayout.h>
#include <qlabel.h>
#include <qnamespace.h>
#include <qpixmap.h>
#include <qtextbrowser.h>
#include <qwidget.h>

MainWindow::MainWindow(QWidget *parent):
	QWidget(parent) {
	this->setWindowTitle("Hello world!");

	QPixmap *icon = new QPixmap("./sample_icon.png");
	this->icon->setPixmap(*icon);

	this->textBrowser->setText("Some text, here\nlol!");

	QGridLayout *mainlayout = new QGridLayout();
	mainlayout->addWidget(this->icon, 0, 0, Qt::AlignTop);
	mainlayout->addWidget(this->textBrowser, 0, 1);
	mainlayout->addWidget(this->slot, 1, 0);

	this->setLayout(mainlayout);

}

MainWindow::~MainWindow() { }

