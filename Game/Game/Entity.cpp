#include "Entity.h"

static const Vector2 g_directions[4] = {
    {0,-1},  // Up
    {0, 1},  // Down
    {-1, 0}, // Left
    {1, 0}   // Right
};