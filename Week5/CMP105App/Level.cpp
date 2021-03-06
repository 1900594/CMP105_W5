#include "Level.h"

Level::Level(sf::RenderWindow* hwnd, Input* in)
{
	window = hwnd;
	input = in;

	// initialise game objects
	zombieAnimation = new Zombie;
	marioAnimation = new Mario;


	zombieTexture.loadFromFile("gfx/animZombie.png");
	zombieAnimation->setSize(sf::Vector2f(55, 108));
	zombieAnimation->setPosition(100, 100);
	zombieAnimation->setTexture(&zombieTexture);
	zombieAnimation->setInput(input);

	marioTexture.loadFromFile("gfx/MarioSheetT.png");
	marioAnimation->setSize(sf::Vector2f(55, 108));
	marioAnimation->setPosition(400, 300);
	marioAnimation->setTexture(&marioTexture);
	marioAnimation->setInput(input);
}

Level::~Level()
{

}

// handle user input
void Level::handleInput(float dt)
{
	zombieAnimation->handleInput(dt);
	marioAnimation->handleInput(dt);
}

// Update game objects
void Level::update(float dt)
{
	zombieAnimation->update(dt);
	marioAnimation->update(dt);
}

// Render level
void Level::render()
{
	beginDraw();
	window->draw(*zombieAnimation);
	window->draw(*marioAnimation);
	endDraw();
}

// clear back buffer
void Level::beginDraw()
{
	window->clear(sf::Color(100, 149, 237));
}

// Ends rendering to the back buffer, and swaps buffer to the screen.
void Level::endDraw()
{
	window->display();
}