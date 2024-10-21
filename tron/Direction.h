#ifndef TRON_DIRECTION_H_
#define TRON_DIRECTION_H_

#include <cstdlib>

namespace tron {

	enum class Direction {
	  NORTH,
	  EAST,
	  SOUTH,
	  WEST
	};

	Direction getLeft(Direction direction);

	Direction getRight(Direction direction);

	Direction getRandomDirection();
} // tron

#endif //TRON_DIRECTION_H_
