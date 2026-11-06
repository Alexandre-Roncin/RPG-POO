//Alexandre Roncin
#include "Enemy.h"

E_EnemyAction Enemy::getRandomInput()
{
    int input = rand() % 4;

    switch (input)
    {
    case 0:
        return E_EnemyAction::Move_Up;

    case 1:
        return E_EnemyAction::Move_Down;

    case 2:
        return E_EnemyAction::Move_Left;

    case 3:
        return E_EnemyAction::Move_Right;

    default:
        return E_EnemyAction::None;
    }
}

Vector2 Enemy::getDirection(E_EnemyAction action)
{
    switch (action)
    {
    case Move_Up:
        return g_directions[0];

    case Move_Down:
        return g_directions[1];

    case Move_Left:
        return g_directions[2];

    case Move_Right:
        return g_directions[3];

    default:
        return { 0, 0 };
    }
}