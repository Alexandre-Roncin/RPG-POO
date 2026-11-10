// Alexandre RONCIN
#pragma once
#include "Player.h"
#include "Map.h"

#include <vector>

class Mage : public virtual Player
{
public:
    Mage();

    void onCollision(Entity& other) override;
    void onUpdate() override;

    // Damages every other living entity in the 3x3 zone around the mage
    void castSpell(Map& map, std::vector<Entity>& entities);

    ~Mage() = default;

private:
    // checks if someone is in the zone
    bool isInSpellZone(Map& map, const Vector2& target);

    int spellDamage = 50;
};