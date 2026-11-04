#include "Entity.h"

class Entity
{
public:
	Entity()
	{
	}

	int getHealth() const 
	{
		return health;
	}

	int getMaxHealth() const
	{
		return maxHealth;
	}

	int getDamage() const
	{
		return damage;
	}

	char getIcon() const
	{
		return icon;
	}

	Vector2 getPos() const
	{
		return pos;
	}


	void setHealth(int newHealth)
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

	void setDamage(int newDamage)
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

	void setIcon(char newIcon)
	{
		icon = newIcon;
	}

	void setPos(const Vector2& newPos)
	{
		pos = newPos;
		// rajouter une gestion du out of bounds quand la partie map est finie
	}


	bool isAlive() const
	{
		return getHealth() > 0;
	}

	void applyDamage(int damage)
	{
		if (damage <= 0) 
		{
			return;
		}

		setHealth(getHealth() - damage);
	}

	bool characterMoveCollision(
		Entity& character, Vector2& newPos,
		Entity& others);
	virtual void onCollision();

	virtual void onUpdate();

	~Entity()
	{
	}

protected:
	Vector2 pos;
	int health;
	int maxHealth;
	int damage;
	char icon;

};