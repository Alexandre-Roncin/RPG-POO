// Alexandre RONCIN
#pragma once

#include "Utilities.h"
#include <vector>

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
	Entity();

	// Getters
	int getHealth() const;
	int getMaxHealth() const;
	int getDamage() const;
	char getIcon() const;
	Vector2 getPos() const;

	// Setters
	void setHealth(int newHealth);
	void setDamage(int newDamage);
	void setIcon(char newIcon);
	void setPos(const Vector2& newPos);

	// Checks if the entity is still alive
	bool isAlive() const;
	// Subtracts a specific amount of health
	void applyDamage(int damage);

	// Checks if the entity can move to a specific tile
	// Returns true only if no wall / other entity is located here
	bool characterMoveCollision(const Vector2& newPos,
		std::vector<Entity>& entities);
	Entity& others);
	// Moves the entity in a chosen direction
	bool moveTo(const Vector2& targetPos, std::vector<Entity>& entities);

	// Deals with what happens when an entity collides with another entity
	// Will be overriden in children classes
	virtual void onCollision(Entity& other);
	// True if the entity can walk on water. Overridden by Swimmer.
	virtual bool canSwim() const;
	virtual void onUpdate();

	virtual ~Entity() = default;

protected:
	Vector2 pos;
	int health;
	int maxHealth;
	int damage;
	char icon;
};