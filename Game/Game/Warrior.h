#pragma once
#include "Player.h"

class Warrior: public Player
{
public:
	Warrior()
	{
	}

	void onCollision() override;
	void onUpdate() override;

	~Warrior()
	{
	}

private:

};
