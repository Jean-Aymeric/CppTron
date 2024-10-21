//
// Created by jeana on 11/10/2024.
//

#include "Utils.h"

using namespace tron::tile;
using namespace tron;

Sprite *Utils::getNextDynamicSprite() {
	Sprite *newSprite;
	newSprite = new Sprite((char)(Utils::DYNAMIC_SPRITE_START + (char)Utils::dynamicSprites.size()));
	Utils::dynamicSprites.push_back(newSprite);
	return newSprite;
}

void Utils::clearDynamicSprites() {
	for (Sprite *sprite : Utils::dynamicSprites) {
		delete sprite;
	}
	Utils::dynamicSprites.clear();
}

int Utils::getRandomInt(int min, int max) {
	return Utils::distribution_(Utils::mt,
								std::uniform_int_distribution<int>::param_type{min, max});
}
