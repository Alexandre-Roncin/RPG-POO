// Alexandre RONCIN
#pragma once
#include "Zombie.h"
#include "Swimmer.h"

// A Zombie that can walk on water
class ZombieSwimmer : public Zombie, public Swimmer
{
public:
    ZombieSwimmer();

    ~ZombieSwimmer() override = default;
};  