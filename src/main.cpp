#include<QtWidgets>
#include <qapplication.h>

#include "../include/mainwindow.h"
#include "../include/mcqui/util/mcversion.h"

int main(int argc, char **argv) {
	QApplication app(argc, argv);

	McVersion::get_all_versions();

	MainWindow a;
	a.show();

	return app.exec();
}
