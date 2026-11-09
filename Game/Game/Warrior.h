// Alexandre RONCIN
#pragma once
#include "Player.h"

// More hp and deals more contact damage
class Warrior : public virtual Player
{
public:
    Warrior();

    void onUpdate() override;

    ~Warrior() = default;
};