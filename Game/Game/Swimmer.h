// Alexandre RONCIN
#pragma once
#include "Entity.h"

// Entities inheriting this class can walk on water
class Swimmer : public virtual Entity
{
public:
    Swimmer() = default;

    bool canSwim() const override;

    ~Swimmer() override = default;
};