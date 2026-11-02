#pragma once


class Entity
{
public:
	Entity()
	{
	}

	int getLife();
	void setLife();
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
