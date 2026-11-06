// Alexandre RONCIN
#pragma once
#include "Entity.h"

enum E_PlayerAction
{
	None = 0,
	Move_Up,
	Move_Down,
	Move_Left,
	Move_Right,
	Attack
};


class Player : public Entity
{
public:
	Player();

	// Function that asks for an input
	E_PlayerAction getPlayerInput();
	// Function that transforms an input into a direction
	Vector2 getDirection(E_PlayerAction action);

};