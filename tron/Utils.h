//
// Created by jeana on 11/10/2024.
//

#ifndef TRON_UTILS_H_
#define TRON_UTILS_H_

#include <vector>
#include "tile/Empty.h"
#include "tile/Sprite.h"
#include <random>

namespace tron {
	using namespace tile;

	class Utils {
	  private:
		Utils() = default;
		~Utils() = default;
		static inline char const DYNAMIC_SPRITE_START = 34;
		static inline std::vector<Sprite *> dynamicSprites;
		static inline std::random_device rd_;
		static inline std::mt19937 mt = std::mt19937(rd_());
		static inline std::uniform_int_distribution<int> distribution_;

	  public:
		static inline Sprite const EMPTY_SPRITE = Sprite(' ');
		static inline Tile EMPTY_TILE = Tile(&Utils::EMPTY_SPRITE, true);
		static inline Sprite EDGE_SPRITE = Sprite(33);
		static inline unsigned int const REFRESH_RATE = 100;
		static inline int const KEY_LEFT_LIGHT_CYCLE1 = 75;
		static inline int const KEY_RIGHT_LIGHT_CYCLE1 = 77;
		static inline int const KEY_LEFT_LIGHT_CYCLE2 = 113;
		static inline int const KEY_RIGHT_LIGHT_CYCLE2 = 100;
		static Sprite *getNextDynamicSprite();
		static void clearDynamicSprites();
		static int getRandomInt(int min, int max);
	};
}
#endif //TRON_UTILS_H_
