#pragma once


class Entity
{
public:
	Entity()
	{
	}

	bool isAlive();
	void move();
	virtual void onCollision();
	void applyDamage();
	virtual void onUpdate();

	~Entity()
	{
	}
private:
	int health;
	int maxHealth;
};
