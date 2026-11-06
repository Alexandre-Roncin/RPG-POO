//Alexandre Roncin
#include "Player.h"

#include <conio.h>

Player::Player()
{
}

E_PlayerAction Player::getPlayerInput()
{
	char input = _getch();

	switch (input)
	{
	case 'z':
	case 'Z':
		return E_PlayerAction::Move_Up;

	case 's':
	case 'S':
		return E_PlayerAction::Move_Down;

	case 'q':
	case 'Q':
		return E_PlayerAction::Move_Left;

	case 'd':
	case 'D':
		return E_PlayerAction::Move_Right;

	//temporairement ici, vas etre move dans mage
	case ' ':
		return E_PlayerAction::Attack;

	default:
		return E_PlayerAction::None;
	}
}

Vector2 Player::getDirection(E_PlayerAction action)
{
	switch (action)
	{
	case Move_Up:
		return g_directions[0];

	case Move_Down:
		return g_directions[1];

	case Move_Left:
		return g_directions[2];

	case Move_Right:
		return g_directions[3];

	default:
		return { 0, 0 };
	}
}