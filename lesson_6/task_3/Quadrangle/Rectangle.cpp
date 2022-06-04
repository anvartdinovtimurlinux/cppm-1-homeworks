#include "Rectangle.h"


Rectangle::Rectangle(std::uint32_t sideAC, std::uint32_t sideBD)
        : Parallelogram(sideAC, sideBD, 90, 90)
{
    name = "Прямоугольник";
}
