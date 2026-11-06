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
    Entity()
    {
    }

    int getHealth() const;
    int getMaxHealth() const;
    int getDamage() const;
    char getIcon() const;
    Vector2 getPos() const;

    void setHealth(int newHealth);
    void setDamage(int newDamage);
    void setIcon(char newIcon);
    void setPos(const Vector2& newPos);

    bool isAlive() const;
    void applyDamage(int damage);

    bool characterMoveCollision(Vector2& newPos,
        Entity& others);

    virtual void onCollision(Entity& other);
    virtual void onUpdate();

    virtual ~Entity() = default;

protected:
    Vector2 pos;
    int health;
    int maxHealth;
    int damage;
    char icon;
};