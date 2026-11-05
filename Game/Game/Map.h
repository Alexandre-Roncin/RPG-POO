#pragma once
#include "Utilities.h"

#include <string>
#include <vector>
#include <fstream>
#include <filesystem>
#include <iostream>


enum E_CellType
{
	Ground = 0,
	Water,
	Mountain,
	Exit,
	CellType_Count
};

struct CellInfo {
	char symbol;
	bool isWalkable;
};

const CellInfo g_cellInfos[E_CellType::CellType_Count] =
{
	{ '.', true },
	{ '~', false },
	{ 'A', false },
	{ 'E', true },
};


class Map
{
public:
	Map()
	{
		
	}

	int oneDToTwoD(Vector2 pos, int width);
	void LoadLevel(int map_size_x, int map_size_y, Hero H, const std::vector<Monstre>&Monstres, int* p);

	~Map()
	{
	}

private:

};


