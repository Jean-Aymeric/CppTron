//
// Created by JAD on 18/10/2024.
//
#include <iostream>

#ifndef ASCIISCREEN_H_
#define ASCIISCREEN_H_

class AsciiScreen {
  private:
	int width_;
	int height_;
  public:
	AsciiScreen(int width, int height, char edgeChar, char emptyChar);
	~AsciiScreen() = default;
	void setCharAt(int x, int y, char character) const;
};

#endif //ASCIISCREEN_H_
