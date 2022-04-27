#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>
#include <qlabel.h>
#include <qtextbrowser.h>
#include <qpointer.h>


#include "../include//enventoryslotwidget.h"

class MainWindow : public QWidget {
	Q_OBJECT

public:
	explicit MainWindow(QWidget *parent = 0);
	~MainWindow();

private:
	// std::unique_ptr<QLabel> icon;
	// std::unique_ptr<QTextBrowser> textBrowser;
	//
	//QLabel *icon;
	QPointer<QLabel> icon = new QLabel();
	QPointer<QTextBrowser> textBrowser = new QTextBrowser();

	
	QPointer<EnventorySlotWidget> slot = new EnventorySlotWidget();
};

#endif // MAINWINDOW_H
