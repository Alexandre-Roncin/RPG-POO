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

static const Vector2 g_directions[4] = {
    {0,-1},  // Up
    {0, 1},  // Down
    {-1, 0}, // Left
    {1, 0}   // Right
};

class Player
{
public:
	Player()
	{
	}

	~Player()
	{
	}

private:

};
