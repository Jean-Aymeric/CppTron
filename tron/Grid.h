//
// Created by jeana on 11/10/2024.
//

#ifndef TRON_GRID_H_
#define TRON_GRID_H_

#include "tile/Tile.h"

namespace tron {
	using namespace tile;

	class Grid {
	  private:
		int width_;
		int height_;
		Tile ***tiles_;

	  public:
		Grid(int width, int height);
		~Grid();
		tile::Tile *getTileAt(int x, int y);
		[[nodiscard]] int getWidth() const;
		[[nodiscard]] int getHeight() const;
		void setTileAt(int i, int i_1, Tile *tile);
		[[nodiscard]] bool isCrossableAt(int x, int y) const;
	};
}

#endif //TRON_GRID_H_
