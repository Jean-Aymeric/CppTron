
#include "tron\Game.h"
#include "tron\Player.h"

using namespace tron;

int main() {
	Game game = Game(110, 25);
	Player player1 = Player(Utils::KEY_LEFT_LIGHT_CYCLE1, Utils::KEY_RIGHT_LIGHT_CYCLE1);
	Player player2 = Player(Utils::KEY_LEFT_LIGHT_CYCLE2, Utils::KEY_RIGHT_LIGHT_CYCLE2);
	game.addPlayer(&player1);
	game.addPlayer(&player2);
	game.start();
//	system("pause");
	return 0;
}
