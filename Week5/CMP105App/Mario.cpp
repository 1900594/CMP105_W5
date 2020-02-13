#include "Mario.h"
Mario::Mario()
{
	walk.addFrame(sf::IntRect(15, 21, 70, 150));
	walk.addFrame(sf::IntRect(15, 21, 70, 150));
	walk.addFrame(sf::IntRect(15, 21, 70, 150));
	walk.addFrame(sf::IntRect(15, 21, 70, 150));
	walk.addFrame(sf::IntRect(15, 21, 70, 150));
	swim.addFrame(sf::IntRect(16, 20, 70, 150));
	swim.addFrame(sf::IntRect(16, 20, 70, 150));
	swim.addFrame(sf::IntRect(16, 20, 70, 150));
	duck.addFrame(sf::IntRect(16, 20, 70, 150));
	duck.addFrame(sf::IntRect(16, 20, 70, 108));
	walk.setFrameSpeed(1.f / 10.f);
	swim.setFrameSpeed(1.f / 10.f);
	duck.setFrameSpeed(1.f / 10.f);
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