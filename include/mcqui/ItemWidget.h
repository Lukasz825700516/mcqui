#ifndef MCQUI_GUI_ITEMWIDGET
#define MCQUI_GUI_ITEMWIDGET

#include <cstddef>
#include <qwidget.h>
#include <optional>
#include <memory>

namespace mcqui {
	namespace gui {
		class Conponent {
		public:
			std::optiona
		};
		enum ItemId {
			AIR = 0,
			STONE = 0,
			DIRT = 0,
		};
		class ItemData {
			std::size_t count = 1;
			ItemId id = ItemId::DIRT;
			Conponent tag;
		};
		class ItemWidget : public QWidget {
			Q_OBJECT;
		public:
		};
	}
}

#endif // MCQUI_GUI_ITEMWIDGET
