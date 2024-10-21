//
// Created by jeana on 11/10/2024.
//

#include "Player.h"

using namespace tron;

Player::Player(int keyLeft, int keyRight) {
	this->lightCycle_ = nullptr;
	this->keyLeft_ = keyLeft;
	this->keyRight_ = keyRight;
}

void Player::notifyKey(int key) {
	if (key == this->keyLeft_) {
		this->lightCycle_->turnLeft();
	} else if (key == this->keyRight_) {
		this->lightCycle_->turnRight();
	}
}

void Player::setLightCycle(LightCycle *lightCycle) {
	this->lightCycle_ = lightCycle;
}

