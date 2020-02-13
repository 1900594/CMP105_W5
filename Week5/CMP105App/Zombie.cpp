#include "Zombie.h"
Zombie::Zombie()
{
	//setup walking animation
	walk.addFrame(sf::IntRect(0, 0, 55, 108));
	walk.addFrame(sf::IntRect(55, 0, 55, 108));
	walk.addFrame(sf::IntRect(110, 0, 55, 108));
	walk.addFrame(sf::IntRect(165, 0, 55, 108));
	walk.addFrame(sf::IntRect(220, 0, 55, 108));
	walk.addFrame(sf::IntRect(275, 0, 55, 108));
	walk.addFrame(sf::IntRect(330, 0, 55, 108));
	walk.addFrame(sf::IntRect(385, 0, 55, 108));
	walk.setFrameSpeed(1.f / 10.f);


}
Zombie::~Zombie()
{

}

void Zombie::handleInput(float dt)
{
	if (input->isKeyDown(sf::Keyboard::Right))
	{
		walk.setFlipped(false);
		move(200 * dt, 0);
	}

	if (input->isKeyDown(sf::Keyboard::Left))
	{
		walk.setFlipped(true);
		move(-200 * dt, 0);
	}

	if (input->isKeyDown(sf::Keyboard::Up))
	{
		move(0, -200 * dt);
	}

	if (input->isKeyDown(sf::Keyboard::Down))
	{
		move(0, 200 * dt);
	}



}

void Zombie::update(float dt)
{
	walk.animate(dt);
	setTextureRect(walk.getCurrentFrame());
}