//
// Created by jeana on 11/10/2024.
//

#include "LightCycle.h"

using namespace tron;

LightCycle::LightCycle(int posX, int posY, Direction direction, Grid *grid)
	: Tile(Utils::getNextDynamicSprite(), false) {
	this->posX_ = posX;
	this->posY_ = posY;
	this->direction_ = direction;
	this->grid_ = grid;
	this->alive_ = true;
}

void LightCycle::move() {
	if (!this->alive_) {
		return;
	}
	this->grid_->setTileAt(this->posX_, this->posY_, this);
	int height = this->grid_->getHeight();
	int width = this->grid_->getWidth();
	switch (this->direction_) {
		case Direction::NORTH: this->posY_ = (this->posY_ + height - 1) % height;
			break;
		case Direction::EAST: this->posX_ = (this->posX_ + width + 1) % width;
			break;
		case Direction::SOUTH: this->posY_ = (this->posY_ + height + 1) % height;
			break;
		case Direction::WEST: this->posX_ = (this->posX_ + width - 1) % width;
			break;
	}
	this->alive_ = this->grid_->isCrossableAt(this->posX_, this->posY_);
}

void LightCycle::turnLeft() {
	this->direction_ = getLeft(this->direction_);
}

void LightCycle::turnRight() {
	this->direction_ = getRight(this->direction_);
}

bool LightCycle::isAlive() const {
	return this->alive_;
}

int LightCycle::getPosX() const {
	return this->posX_;
}

int LightCycle::getPosY() const {
	return this->posY_;
}
