// Alexandre RONCIN
#pragma once
#include "Entity.h"

class Player : public virtual Entity
{
public:
    Player();

    // Function that asks for an input
    E_PlayerAction getPlayerInput();
    // Function that transforms an input into a direction
    Vector2 getDirection(E_PlayerAction action);
};