// Alexandre RONCIN
#include "WarriorMage.h"

WarriorMage::WarriorMage()
{
    maxHealth = 20;
    health = 20;
    damage = 15;
    icon = 'J'; // J stands for John WarriorMage
}

void WarriorMage::onCollision(Entity& other)
{
    Entity::onCollision(other);
}

void WarriorMage::onUpdate()
{
    Warrior::onUpdate();
    Mage::onUpdate();
}