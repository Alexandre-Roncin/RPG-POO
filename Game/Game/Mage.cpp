// Alexandre RONCIN
#include "Mage.h"

Mage::Mage()
{
    maxHealth = 10;
    health = 10;
    damage = 0;
    icon = 'M';
}

void Mage::onCollision(Entity& other)
{
    if (!isAlive() || !other.isAlive())
        return;

    applyDamage(other.getDamage());
}

void Mage::onUpdate()
{
}

bool Mage::isInSpellZone(Map& map, const Vector2& target)
{
    //Scans the 3x3 zone
    for (int dy = -1; dy <= 1; dy++)
    {
        for (int dx = -1; dx <= 1; dx++)
        {
            Vector2 cell = map.wrapPosition({ pos.x + dx, pos.y + dy });

            if (cell.x == target.x && cell.y == target.y)
                return true;
        }
    }
    return false;
}

void Mage::castSpell(Map& map, std::vector<Entity>& entities)
{
    for (Entity& other : entities)
    {
        if (&other == this || !other.isAlive())
            continue;

        if (isInSpellZone(map, other.getPos()))
            other.applyDamage(spellDamage);
    }
}