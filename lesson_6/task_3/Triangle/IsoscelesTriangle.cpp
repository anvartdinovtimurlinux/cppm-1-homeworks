#include "IsoscelesTriangle.h"


IsoscelesTriangle::IsoscelesTriangle(std::uint32_t sideAC, std::uint32_t sideB,
                                     std::uint32_t angleAC, std::uint32_t angleB)
        : Triangle(sideAC, sideB, sideAC, angleAC, angleB, angleAC)
{
    name = "Равнобедренный треугольник";
}
