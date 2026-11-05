#pragma once
#include "Utilities.h"
#include "Entity.h"

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

	

	~Map()
	{
	}

private:

};

int oneDToTwoD(Vector2 pos, int width);
void RenderTerrain(int cellType);
bool RenderEntity(int x, int y, std::vector<Entity>& entities);
void RenderCell(int x, int y, int cellType, std::vector<Entity>& entities);
void LoadLevel(int map_size_x, int map_size_y, std::vector<Entity>& entities, int* p);
