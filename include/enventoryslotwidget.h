#ifndef ENVENTORYSLOTWIDGET
#define ENVENTORYSLOTWIDGET

#include <qgridlayout.h>
#include <qlabel.h>
#include <qlineedit.h>
#include <qpointer.h>
#include <qtextedit.h>
#include <qwidget.h>

class EnventorySlotWidget : public QWidget {
	Q_OBJECT
public:
	EnventorySlotWidget(QWidget *parent = nullptr, const char *name = nullptr);
	~EnventorySlotWidget();

	void setName(QString);
	void setHover(QString);


private:
	QPointer<QLabel> item_icon = new QLabel();
	QPointer<QLineEdit> name_edit = new QLineEdit();
	QPointer<QTextEdit> hover_edit = new QTextEdit();
	
	QString name; // Name of displayed item
	QString hover; // Lore of displayed item

	void update_item_icon();
};

#endif // ENVENTORYSLOTWIDGET
