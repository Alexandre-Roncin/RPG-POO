#pragma once
#include "Utilities.h"

static const Vector2 g_directions[4] = {
	{0,-1},  // Up
	{0, 1},  // Down
	{-1, 0}, // Left
	{1, 0}   // Right
};

class Entity
{
public:
	Entity()
	{
	}

	int getLife();
	void setLife();
	bool isAlive();
	void move();
	virtual void onCollision();
	void applyDamage();
	virtual void onUpdate();

	~Entity()
	{
	}
private:
	int health;
	int maxHealth;
};
