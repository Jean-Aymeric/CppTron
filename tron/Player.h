//
// Created by jeana on 11/10/2024.
//

#ifndef TRON_PLAYER_H_
#define TRON_PLAYER_H_

#include <string>
#include "LightCycle.h"

namespace tron {
	class Player {
	  private:
		LightCycle *lightCycle_;
		int keyLeft_;
		int keyRight_;

	  public:
		Player(int keyLeft, int keyRight);
		void notifyKey(int key);
		void setLightCycle(LightCycle *lightCycle);
	};
}
#endif //TRON_PLAYER_H_
