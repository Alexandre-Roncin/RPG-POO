// Made by Cyril Rada
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

struct CELLINFO {
	char symbol;
	bool isWalkable;
};

const CELLINFO g_cellInfos[E_CellType::CellType_Count] =
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

	int getWidth() const;
	int getHeight() const;

	int oneDToTwoD(Vector2 pos, int width);
	void RenderTerrain(int cellType);
	bool RenderEntity(int x, int y, std::vector<Entity>& entities);
	void RenderCell(int x, int y, int cellType, std::vector<Entity>& entities);
	void LoadLevel(int map_size_x, int map_size_y, std::vector<Entity>& entities, int* p);


	~Map()
	{
	}

private:
	const int WIDTH = 20;
	const int HEIGHT = 10;

};

