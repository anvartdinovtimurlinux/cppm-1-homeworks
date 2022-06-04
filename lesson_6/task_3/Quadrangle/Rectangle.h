#pragma once

#include "Parallelogram.h"


class Rectangle : public Parallelogram
{
public:
    Rectangle(std::uint32_t sideAC, std::uint32_t sideBD);
};
