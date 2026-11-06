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

	std::vector<int> getMap();
	int getTile(Vector2& pos, int width);
	int getWidth() const;
	int getHeight() const;
	E_CellType getCellType(Vector2& pos, int width);

	void setMap(const std::vector<int>& map);

	int oneDToTwoD(Vector2 pos, int width);
	void RenderTerrain(int cellType);
	bool RenderEntity(int x, int y, std::vector<Entity>& entities);
	void RenderCell(int x, int y, int cellType, std::vector<Entity>& entities);
	void LoadLevel(int map_size_x, int map_size_y, std::vector<Entity>& entities, int* p);


	~Map()
	{
	}

private:
	int width = 20;
	int height = 10;
	std::vector<int> map{};
};

