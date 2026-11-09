// Alexandre RONCIN
#pragma once
#include "Enemy.h"

class Zombie : public virtual Enemy
{
public:
    Zombie();

    // Uses some sort of pathfinding to chase the player
    E_EnemyAction chooseAction(const Vector2& targetPos) override;

    ~Zombie() override = default;
};