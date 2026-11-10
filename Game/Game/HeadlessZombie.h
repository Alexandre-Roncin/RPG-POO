//Alexandre RONCIN
#pragma once
#include "Enemy.h"

// Moves randomly
class HeadlessZombie : public virtual Enemy
{
public:
    HeadlessZombie();

    ~HeadlessZombie() override = default;
};