// Alexandre RONCIN
#include "Entity.h"
#include "Map.h"

Entity::Entity()
{
	pos = { 0, 0 };
	health = 10;
	maxHealth = 10;
	damage = 10;
	icon = '?';
}

int Entity::getHealth() const
{
	return health;
}

int Entity::getMaxHealth() const
{
	return maxHealth;
}

int Entity::getDamage() const
{
	return damage;
}

char Entity::getIcon() const
{
	return icon;
}

Vector2 Entity::getPos() const
{
	return pos;
}


void Entity::setHealth(int newHealth)
{
	if (newHealth < 0)
	{
		health = 0;
	}
	else if (newHealth > maxHealth)
	{
		health = maxHealth;
	}
	else
	{
		health = newHealth;
	}
}

void Entity::setDamage(int newDamage)
{
	if (newDamage < 0)
	{
		damage = 0;
	}
	else
	{
		damage = newDamage;
	}
}

void Entity::setIcon(char newIcon)
{
	icon = newIcon;
}

void Entity::setPos(const Vector2& newPos)
{
	pos.x = newPos.x % getWidth();
	pos.y = newPos.y % getHeight();
}


bool Entity::isAlive() const
{
	return health > 0;
}

void Entity::applyDamage(int damage)
{
	if (damage <= 0)
	{
		return;
	}

	setHealth(health - damage);
}

bool Entity::characterMoveCollision(
	Entity& character, Vector2& newPos,
	Entity& others)
{
	// Fonction en attente de Map::getCellInfo(Vector2& pos)
	//if(newPos)
	return false;
}

void Entity::onCollision(Entity& other)
{
	if (!isAlive() || !other.isAlive())
		return;

	int damageToThis = other.getDamage();
	int damageToOther = getDamage();

	applyDamage(damageToThis);
	other.applyDamage(damageToOther);
}

void Entity::onUpdate()
{
	// A completer plus tard
}