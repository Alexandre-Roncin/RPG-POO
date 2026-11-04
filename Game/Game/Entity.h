#pragma once
#include "Utilities.h"

enum E_PlayerAction
{
	None = 0,
	Move_Up,
	Move_Down,
	Move_Left,
	Move_Right,
	Attack
};

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

	int GetHealth();
	void SetHealth();

	char GetIcon();
	void SetIcon();

	virtual void onCollision();
	void applyDamage();
	bool isAlive();
	void move();
	virtual void onUpdate();

	~Entity()
	{
	}

private:
	int health = 1;
	int maxHealth = 10;
	char icon = 'O';
};
