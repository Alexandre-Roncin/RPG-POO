// Alexandre RONCIN
#pragma once
#include "Utilities.h"

<<<<<<< Updated upstream
=======
enum E_PlayerAction
{
	None = 0,
	Move_Up,
	Move_Down,
	Move_Left,
	Move_Right,
	Attack
};

>>>>>>> Stashed changes
static const Vector2 g_directions[4] = {
	{0,-1},  // Up
	{0, 1},  // Down
	{-1, 0}, // Left
	{1, 0}   // Right
};
<<<<<<< Updated upstream
=======




>>>>>>> Stashed changes

class Entity
{
public:
	Entity()
	{
	}

<<<<<<< Updated upstream
	int getLife();
	void setLife();
	bool isAlive();
	void move();
	virtual void onCollision();
	void applyDamage();
=======
	int GetHealth();
	void SetHealth();

	char GetIcon();
	void SetIcon();

	virtual void onCollision();
	void applyDamage();
	bool isAlive();
	void move();
>>>>>>> Stashed changes
	virtual void onUpdate();

	~Entity()
	{
	}

protected:
	int health;
	int maxHealth;

private:
<<<<<<< Updated upstream
=======
	int health = 1;
	int maxHealth = 10;
	char icon = 'O';
>>>>>>> Stashed changes
};
