//
// Created by jeana on 11/10/2024.
//

#include "Game.h"

using namespace tron;

Game::Game(int width, int height) {
	this->grid_ = new Grid(width, height);
	this->screen_ = new AsciiScreen(width, height, Utils::EDGE_SPRITE.toChar(), Utils::EMPTY_SPRITE.toChar());
}

Game::~Game() {
	for (LightCycle *lightCycle : this->lightCycles_) {
		delete lightCycle;
	}
	for (Player *player : this->players_) {
		delete player;
	}
	delete this->grid_;
	delete this->screen_;
}

void Game::start() {
	bool running = true;
	while (running) {
		if (_kbhit()) {
			int keyPressed = _getch();
			for (Player *player : this->players_) {
				player->notifyKey(keyPressed);
			}
		}
		for (LightCycle *lightCycle : this->lightCycles_) {
			this->screen_->setCharAt(lightCycle->getPosX(), lightCycle->getPosY(), lightCycle->getSprite()->toChar());
			lightCycle->move();
			if (!lightCycle->isAlive()) {
				running = false;
			}
		}
		std::this_thread::sleep_for(std::chrono::milliseconds(Utils::REFRESH_RATE));
	}
	Utils::clearDynamicSprites();
}

LightCycle *Game::addLightCycle() {
	LightCycle *lightCycle;
	lightCycle = new LightCycle(Utils::getRandomInt(0, this->grid_->getWidth()),
								Utils::getRandomInt(0, this->grid_->getHeight()),
								getRandomDirection(),
								this->grid_);
	this->lightCycles_.push_back(lightCycle);
	return lightCycle;
}

void Game::addPlayer(Player *player) {
	this->players_.push_back(player);
	player->setLightCycle(this->addLightCycle());
}
