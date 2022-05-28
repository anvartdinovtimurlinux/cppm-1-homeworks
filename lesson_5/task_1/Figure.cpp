#include "Figure.h"


Figure::Figure()
{
    sides = 0;
    name = "Фигура";
}

std::uint32_t Figure::getSides()
{
    return sides;
}

std::string Figure::getName()
{
    return name;
}