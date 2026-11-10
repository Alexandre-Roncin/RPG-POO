// Alexandre RONCIN
#pragma once
#include "Warrior.h"
#include "Mage.h"

class WarriorMage : public Warrior, public Mage
{
public:
    WarriorMage();

    // Both parents override these, so they must be overridden here
    void onCollision(Entity& other) override;
    void onUpdate() override;

    ~WarriorMage() = default;
};