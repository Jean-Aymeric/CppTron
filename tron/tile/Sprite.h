//
// Created by jeana on 11/10/2024.
//

#ifndef TRON_SPRITE_H_
#define TRON_SPRITE_H_

namespace tron::tile {
	class Sprite {
	  private :
		char symbol_;

	  public :
		explicit Sprite(char symbol);
		[[nodiscard]] char getSymbol() const;
		[[nodiscard]] char toChar() const;
	};
}

#endif //TRON_SPRITE_H_
