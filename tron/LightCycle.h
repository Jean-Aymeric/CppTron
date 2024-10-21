//
// Created by jeana on 11/10/2024.
//

#ifndef TRON_LIGHT_CYCLE_H_
#define TRON_LIGHT_CYCLE_H_

#include "tile/Tile.h"
#include "Direction.h"
#include "Grid.h"
#include "Utils.h"

namespace tron {
	using namespace tile;

	class LightCycle : public Tile {
	  private:
		int posX_;
		int posY_;
		Direction direction_;
		bool alive_;
		Grid *grid_;

	  public:
		LightCycle(int posX, int posY, Direction direction, Grid *grid);
		~LightCycle() = default;
		void move();
		void turnLeft();
		void turnRight();
		[[nodiscard]] bool isAlive() const;
		[[nodiscard]] int getPosX() const;
		[[nodiscard]] int getPosY() const;
	};
}
#endif //TRON_LIGHT_CYCLE_H_
