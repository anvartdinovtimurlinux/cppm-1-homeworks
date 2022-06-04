#include "EquilateralTriangle.h"


EquilateralTriangle::EquilateralTriangle(std::uint32_t side)
        : IsoscelesTriangle(side, side, 60, 60)
{
    name = "Равносторонний треугольник";
}
