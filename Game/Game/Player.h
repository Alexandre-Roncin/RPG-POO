#pragma once
#include "Entity.h"

class Player : public Entity
{
public:
	Player()
	{
	}

	int readPlayerInputs();
	Vector2 getDirection(int);
	virtual void onUpdate();

	~Player()
	{
	}

private:

};
