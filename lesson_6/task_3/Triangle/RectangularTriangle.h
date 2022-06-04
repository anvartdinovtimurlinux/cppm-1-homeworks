#pragma once

#include "Triangle.h"


class RectangularTriangle : public Triangle
{
public:
    RectangularTriangle(std::uint32_t sideA, std::uint32_t sideB, std::uint32_t sideC,
                        std::uint32_t angleA, std::uint32_t angleB);
};
