#include "Level.h"

Level::Level(sf::RenderWindow* hwnd, Input* in)
{
	window = hwnd;
	input = in;

	// initialise game objects
	manager = new BeachBallManager();
}

Level::~Level()
{

}

// handle user input
void Level::handleInput(float dt)
{
	if (input->isPressed(sf::Keyboard::Space))
	{
		manager->spawn();
	}
}

// Update game objects
void Level::update(float dt)
{
	manager->update(dt);
}

// Render level
void Level::render()
{
	beginDraw();
	manager->render(window);
	endDraw();
}
