#include "Mario.h"
Mario::Mario()
{
	//walk
	walk.addFrame(sf::IntRect(0, 0, 15, 21));
	walk.addFrame(sf::IntRect(15, 0, 15, 21));
	walk.addFrame(sf::IntRect(30, 0, 15, 21));
	walk.addFrame(sf::IntRect(45, 0, 15, 21));
	walk.setFrameSpeed(1.f / 10.f);
	//swim
	swim.addFrame(sf::IntRect(0, 21, 16, 20));
	swim.addFrame(sf::IntRect(16, 21, 16, 20));
	swim.addFrame(sf::IntRect(32, 21, 16, 20));
	swim.setFrameSpeed(1.f / 10.f);
	//duck
	duck.addFrame(sf::IntRect(0, 41, 16, 20));
	duck.addFrame(sf::IntRect(16, 41, 16, 20));
	duck.setFrameSpeed(1.f / 1.f);

	
	

}
Mario::~Mario()
{

}

void Mario:: update(float dt)
{
	current->animate(dt);
	setTextureRect(current->getCurrentFrame());

}

void Mario::handleInput(float dt)
{
	if (input->isKeyDown(sf::Keyboard::D))
	{
		current = &walk;
		walk.setFlipped(false);
		move(200 * dt, 0);
	}

	if (input->isKeyDown(sf::Keyboard::A))
	{
		current = &walk;
		walk.setFlipped(true);
		move(-200 * dt, 0);
	}

	if (input->isKeyDown(sf::Keyboard::W))
	{
		current = &swim;
		move(0, -200 * dt);
	}

	if (input->isKeyDown(sf::Keyboard::S))
	{
		current = &duck;
		move(0, 200 * dt);
	}


}