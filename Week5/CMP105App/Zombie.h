#pragma once
#include "Framework/GameObject.h"
#include "Framework/Animation.h"
#include "Framework/Input.h"
class Zombie : public GameObject, private Input
{
public: 
	Zombie();
	~Zombie();

	void handleInput(float dt) override;
	void update(float dt) override;

protected:
	Animation walk;
};

