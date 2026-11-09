// Alexandre RONCIN
#include "Zombie.h"

#include <cstdlib>

Zombie::Zombie()
{
    maxHealth = 15;
    health = 15;
    damage = 5;
    icon = 'Z';
}

E_EnemyAction Zombie::chooseAction(const Vector2& targetPos)
{
    int dx = targetPos.x - pos.x;
    int dy = targetPos.y - pos.y;
    bool useX = (rand() % 2 == 0);

    if (dx == 0)
        useX = false;
    else if (dy == 0)
        useX = true;

    if (useX)
        // Condition ? if true : else
        return dx > 0 ? E_EnemyAction::Move_Right : E_EnemyAction::Move_Left;

    if (dy != 0)
        return dy > 0 ? E_EnemyAction::Move_Down : E_EnemyAction::Move_Up;

    return E_EnemyAction::None;
}