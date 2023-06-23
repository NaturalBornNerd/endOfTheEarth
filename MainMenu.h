// Game state for the Main Menu

#pragma once

#include "IGameState.h"
#include "Button.h"

class MainMenu : public IGameState {
	private:
		Button button1;
		Button button2;
		Button button3;
		Button button4;
	public:
		MainMenu(Engine& engine);
		virtual void drawFrame();
};