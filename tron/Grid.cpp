//
// Created by jeana on 11/10/2024.
//

#include "Grid.h"
#include "Utils.h"

using namespace tron;

Grid::Grid(int width, int height) {
	this->width_ = width;
	this->height_ = height;
	this->tiles_ = new Tile **[height];
	for (int row = 0; row < height; row++) {
		this->tiles_[row] = new Tile *[width];
		for (int column = 0; column < width; column++) {
			this->tiles_[row][column] = &Utils::EMPTY_TILE;
		}
	}
}

Grid::~Grid() {
	for (int row = 0; row < this->height_; row++) {
		delete[] this->tiles_[row];
	}
	delete[] this->tiles_;
}

Tile *Grid::getTileAt(int x, int y) {
	return this->tiles_[(y + this->height_) % this->height_][(x + this->width_) % this->width_];
}

int Grid::getWidth() const {
	return this->width_;
}

int Grid::getHeight() const {
	return this->height_;
}

void Grid::setTileAt(int x, int y, Tile *tile) {
	int realX = (x + this->width_) % this->width_;
	int realY = (y + this->height_) % this->height_;
	this->tiles_[realY][realX] = tile;
}

bool Grid::isCrossableAt(int x, int y) const {
	return this->tiles_[(y + this->height_) % this->height_][(x + this->width_) % this->width_]->isCrossable();
}
