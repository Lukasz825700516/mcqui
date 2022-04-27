#ifndef MCQUI_UTIL_MCVERSION_H
#define MCQUI_UTIL_MCVERSION_H

#include <qdebug.h>
#include <qdir.h>
#include <qfiledevice.h>
#include <string>

#include <iostream>
#include <QDebug>

#include <QuaZip-Qt5-1.2/quazip/quazip.h>

class McVersion {
public:
	static void get_all_versions() {
		QDir dir("/home/lukasz/.minecraft/versions/");
		for (auto& version : dir.entryInfoList(QDir::Dirs | QDir::NoDotAndDotDot)) {
			auto jar_file = QString("%s/%s.jar").arg(version.absoluteFilePath(), version.fileName());
			auto file = QuaZip(jar_file);
		}
	}
};

#endif // MCQUI_UTIL_MCVERSION_H

