#include "RectangularTriangle.h"


RectangularTriangle::RectangularTriangle(std::uint32_t sideA, std::uint32_t sideB, std::uint32_t sideC,
                                         std::uint32_t angleA, std::uint32_t angleB)
        : Triangle(sideA, sideB, sideC, angleA, angleB, 90)
{
    name = "Прямоугольный треугольник";
}
