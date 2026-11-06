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

    E_PlayerAction getPlayerInput();
    Vector2 getDirection(E_PlayerAction action);

};