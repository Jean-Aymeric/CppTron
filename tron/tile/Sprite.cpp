//
// Created by jeana on 11/10/2024.
//

#include "Sprite.h"

using namespace tron::tile;

Sprite::Sprite(char symbol) {
	this->symbol_ = symbol;
}

char Sprite::getSymbol() const {
	return this->symbol_;
}

char Sprite::toChar() const {
	return this->getSymbol();
}
