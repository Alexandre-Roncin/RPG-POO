#include "Map.h"


std::string content = buffer.str();
int width = content.find_first_of('\n');
int height = content.size() / width;

int oneDToTwoD(Vector2 pos, int width)
{
	return pos.y * width + pos.x;
}

