// Alexandre RONCIN
#pragma once
#include "Entity.h"

enum class E_EnemyAction
{
    None = 0,
    Move_Up,
    Move_Down,
    Move_Left,
    Move_Right
};

class Enemy : public virtual Entity
{
public:
    Enemy();

    E_EnemyAction getRandomInput();
    Vector2 getDirection(E_EnemyAction action);

    virtual E_EnemyAction chooseAction(const Vector2& targetPos);

    // Override because I dont want enemies to damage each other
    void onCollision(Entity& other) override;

    ~Enemy() override = default;
};