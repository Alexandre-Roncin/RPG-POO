#pragma once
#include "Entity.h"

enum E_EnemyAction
{
	None = 0,
	Move_Up,
	Move_Down,
	Move_Left,
	Move_Right
};

class Enemy
{
public:
	Enemy()
	{
	}

	E_EnemyAction getRandomInput();
	Vector2 getDirection(E_EnemyAction action);

	~Enemy()
	{
	}

private:

};
