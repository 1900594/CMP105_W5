#pragma once
#include "Framework/GameObject.h"
#include "Framework/Animation.h"
#include "Framework/Input.h"
class Mario : public GameObject, private Input
{
public:
	Mario();
	~Mario();
	void update(float dt)override;

protected: 
	Animation walk;
	Animation swim;
	Animation duck;
};

