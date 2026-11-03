// Alexandre RONCIN
#pragma once

class Mage: public Player
{
public:
	Mage()
	{
	}

	void onCollision() override;
	void onUpdate() override;

	void castSpell();

	~Mage()
	{
	}

private:

};
