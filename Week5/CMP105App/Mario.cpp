#include "Mario.h"
Mario::Mario()
{
	//walk
	walk.addFrame(sf::IntRect(0, 0, 15, 21));
	walk.addFrame(sf::IntRect(15, 0, 15, 21));
	walk.addFrame(sf::IntRect(30, 0, 15, 21));
	walk.addFrame(sf::IntRect(45, 0, 15, 21));

	//swim
	swim.addFrame(sf::IntRect(0, 21, 70, 150));
	swim.addFrame(sf::IntRect(16, 21, 70, 150));
	swim.addFrame(sf::IntRect(32, 21, 70, 150));

	//duck
	duck.addFrame(sf::IntRect(0, 41, 16, 20));
	duck.addFrame(sf::IntRect(16, 41, 16, 20));


	walk.setFrameSpeed(1.f / 10.f);
	swim.setFrameSpeed(2.f / 10.f);
	duck.setFrameSpeed(3.f / 10.f);
}
Mario::~Mario()
{

}

void Mario:: update(float dt)
{
	walk.animate(dt);
	setTextureRect(walk.getCurrentFrame());
	swim.animate(dt);
	setTextureRect(swim.getCurrentFrame());
	duck.animate(dt);
	setTextureRect(duck.getCurrentFrame());
}