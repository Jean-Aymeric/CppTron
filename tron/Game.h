//
// Created by jeana on 11/10/2024.
//

#ifndef TRON_GAME_H_
#define TRON_GAME_H_

#include <iostream>
#include <vector>
#include <chrono>
#include <thread>
#include <conio.h>
#include "Grid.h"
#include "Utils.h"
#include "LightCycle.h"
#include "../asciiscreen/AsciiScreen.h"
#include "Player.h"

namespace tron {
	class Game {
	  private :
		Grid *grid_;
		AsciiScreen *screen_;
		std::vector<LightCycle *> lightCycles_;
		std::vector<Player *> players_;
		LightCycle *addLightCycle();

	  public:
		Game(int width, int height);
		~Game();
		void start();
		void addPlayer(Player *player);
	};
}
#endif //TRON_GAME_H_
