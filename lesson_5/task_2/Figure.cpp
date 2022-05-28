#include "Figure.h"


Figure::Figure()
{
    name = "Фигура";
}

std::string Figure::getName()
{
    return name;
}

std::string Figure::getSidesInfo()
{
    return "Стороны: не известно";
}

std::string Figure::getAnglesInfo()
{
    return "Углы: не известно";
}
