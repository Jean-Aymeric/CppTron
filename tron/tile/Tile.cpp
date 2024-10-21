//
// Created by jeana on 11/10/2024.
//

#include "Tile.h"

using namespace tron::tile;

namespace tron::tile {
	Tile::Tile(Sprite const *sprite, bool crossable) {
		this->sprite_ = sprite;
		this->crossable_ = crossable;
	}

	Sprite const *Tile::getSprite() {
		return this->sprite_;
	}

	bool Tile::isCrossable() const {
		return this->crossable_;
	}

}

