#include "../include/enventoryslotwidget.h"
#include <qpixmap.h>

EnventorySlotWidget::EnventorySlotWidget(QWidget *parent, const char *name):
	QWidget(parent) {
	
	QPixmap *icon = new QPixmap("./sample_icon.png");

	this->item_icon->setPixmap(*icon);
	this->item_icon->setToolTip("Opcje\nZmień opcje rozgrywki.");

	QFont font;
	font.setFamily("Courier");
	font.setStyleHint(QFont::Monospace);
	font.setFixedPitch(true);
	font.setPointSize(12);

	const int tabStop = 4;  // 4 characters

	QFontMetrics metrics(font);
	this->hover_edit->setTabStopDistance(tabStop * metrics.horizontalAdvance(' '));

	this->hover_edit->setFont(font);



	QGridLayout *layout = new QGridLayout();
	layout->setColumnStretch(0, 0);
	layout->setColumnStretch(1, 0);
	layout->setRowStretch(0, 0);
	layout->setRowStretch(1, 0);

	layout->addWidget(this->item_icon, 0, 0, 2, 1, Qt::AlignCenter);
	layout->addWidget(this->name_edit, 0, 1);
	layout->addWidget(this->hover_edit, 1, 1);

	this->setLayout(layout);
}
EnventorySlotWidget::~EnventorySlotWidget() {}

void EnventorySlotWidget::setName(QString name) {
	this->item_icon->setWhatsThis(name);
}
void EnventorySlotWidget::setHover(QString) {
}

