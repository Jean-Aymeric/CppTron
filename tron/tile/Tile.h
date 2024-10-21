//
// Created by jeana on 11/10/2024.
//

#ifndef TRON_TILE_H_
#define TRON_TILE_H_

#include "Sprite.h"

namespace tron::tile {
	class Tile {
	  private:
		Sprite const *sprite_;
		bool crossable_;

	  public :
		Tile(Sprite const *sprite, bool crossable);
		~Tile() = default;
		Sprite const *getSprite();
		[[nodiscard]] bool isCrossable() const;
	};
}

#endif //TRON_TILE_H_
