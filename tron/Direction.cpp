#include "Direction.h"
#include "Utils.h"

namespace tron {

	Direction getLeft(Direction direction) {
		switch (direction) {
			case Direction::NORTH: return Direction::WEST;
			case Direction::SOUTH: return Direction::EAST;
			case Direction::EAST: return Direction::NORTH;
			case Direction::WEST: return Direction::SOUTH;
		}
	}

	Direction getRight(Direction direction) {
		switch (direction) {
			case Direction::NORTH: return Direction::EAST;
			case Direction::SOUTH: return Direction::WEST;
			case Direction::EAST: return Direction::SOUTH;
			case Direction::WEST: return Direction::NORTH;
		}
	}

	Direction getRandomDirection() {
		int random = Utils::getRandomInt(0, 3);
		switch (random) {
			case 0: return Direction::NORTH;
			case 1: return Direction::EAST;
			case 2: return Direction::SOUTH;
			case 3: return Direction::WEST;
			default: return Direction::NORTH;
		}
	}
}