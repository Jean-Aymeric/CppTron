//
// Created by JAD on 18/10/2024.
//

#include "AsciiScreen.h"

AsciiScreen::AsciiScreen(int width, int height, char edgeChar, char emptyChar) {
	this->width_ = width;
	this->height_ = height;
	for (int row = 0; row < height + 2; row++) {
		for (int column = 0; column < width + 2; column++) {
			if (row == 0 || row == height + 1 || column == 0 || column == width + 1) {
				std::cout << edgeChar;
			} else {
				std::cout << emptyChar;
			}
		}
		std::cout << std::endl;
	}
}

void AsciiScreen::setCharAt(int x, int y, char character) const {
	if (x < 0 || x >= this->width_ || y < 0 || y >= this->height_) {
		return;
	}
	std::cout << "\033[" << y + 2 << ";" << x + 2 << "H" << character;
}
