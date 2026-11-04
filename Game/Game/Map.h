#pragma once
#include "Utilities.h"

#include <vector>
#include <fstream>
#include <filesystem>


enum E_CellType
{
	Ground = 0,
	Water,
	Mountain,
	Exit,
	CellType_Count
};

const CellInfo g_cellInfos[E_CellType::CellType_Count] =
{
	{ '.', true },
	{ '~', false },
	{ 'A', false },
	{ 'E', true },
};

struct Map {
	int* cells;
	int  width;
	int  height;

	std::vector<Vector2> characterSpawns;
};
struct CellInfo {
	char symbol;
	bool isWalkable;
};

class Map
{
public:
	Map()
	{
	}

	~Map()
	{
	}

private:

};
