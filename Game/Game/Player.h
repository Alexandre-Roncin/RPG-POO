// Alexandre RONCIN
#pragma once

enum E_PlayerAction
{
	None = 0,
	Move_Up,
	Move_Down,
	Move_Left,
	Move_Right,
	Attack
};

class Player
{
public:
	Player()
	{
	}

	int readPlayerInputs();
	Vector2 getDirection(int);
	virtual void onUpdate();

	~Player()
	{
	}

private:

};
