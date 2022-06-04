#pragma once

#include "Triangle.h"


class IsoscelesTriangle : public Triangle
{
public:
    IsoscelesTriangle(std::uint32_t sideAC, std::uint32_t sideB,
                      std::uint32_t angleAC, std::uint32_t angleB);
};
