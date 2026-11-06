// Made by Cyril Rada
#include "Map.h"

int Map::getHeight() const
{
	return HEIGHT;
}

int Map::getWidth() const
{
	return WIDTH;
}

// Converts a 1 dimensional array into a more understandable 2D vector
int Map::oneDToTwoD(Vector2 pos, int width)
{
	return pos.y * width + pos.x;
} 

// Fairly self-explanatory, it renders the terrain's ground and various obstacles as well as the exit
void Map::RenderTerrain(int cellType)
{
	switch (cellType) {
	case Ground:
		std::cout << '.';
		break;
	case Mountain:
		std::cout << 'M';
		break;
	case Water:
		std::cout << '~';
		break;
	case Exit:
		std::cout << 'E';
		break;
	}
}

// Again, self-explanatory, renders the entities' icons according to their positions
bool Map::RenderEntity(int x, int y, std::vector<Entity>& entities)
{
	for (Entity& entity : entities) {
		if (x == entity.getPos().x && y == entity.getPos().y) {
			std::cout << entity.getIcon();
			return true;
		}
	}
	return false;
}

// renders the cells of the map, naturally excluding the entities
void Map::RenderCell(int x, int y, int cellType, std::vector<Entity>& entities)
{
	if (!RenderEntity(x, y, entities)) {
		RenderTerrain(cellType);
	}
}

// loads the map with thehelp of the previous function
void Map::LoadLevel(int map_size_x, int map_size_y, std::vector<Entity>& entities, int* p)
{
	for (int y = 0; y < map_size_y; y++) {
		for (int x = 0; x < map_size_x; x++) {
			int index = x + (y * map_size_x);
			RenderCell(x, y, p[index], entities);
		}
		std::cout << '\n';
	}

	if (!entities.empty()) {
		std::cout	<< "Health : "
					// the number 0 is chosen to get the health of the first entity, therefore the player's
					<< entities[0].getHealth() 
					<< " / " 
					<< entities[0].getMaxHealth() 
					<< '\n';
	}
}