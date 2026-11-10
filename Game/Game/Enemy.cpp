// Alexandre RONCIN
#include "Enemy.h"

#include <cstdlib>

Enemy::Enemy()
{
    icon = 'E';
}

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
    case E_EnemyAction::Move_Up:
        return g_directions[0];

    case E_EnemyAction::Move_Down:
        return g_directions[1];

    case E_EnemyAction::Move_Left:
        return g_directions[2];

    case E_EnemyAction::Move_Right:
        return g_directions[3];

    default:
        return { 0, 0 };
    }
}

E_EnemyAction Enemy::chooseAction(const Vector2& targetPos)
{
    return getRandomInput();
}

void Enemy::onCollision(Entity& other)
{
    //Checks if the object is derived from enemy
    if (dynamic_cast<Enemy*>(&other) != nullptr)
        return;

    Entity::onCollision(other);
}