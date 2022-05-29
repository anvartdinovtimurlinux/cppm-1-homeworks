#include "Figure.h"


Figure::Figure()
{
    name = "Фигура";
    sides = 0;
}

void Figure::print_info()
{
    std::cout << std::endl;
    std::cout << getName() << std::endl
              << (check() ? "Правильная" : "Неправильная") << std::endl
              << "Количество сторон: " << getSides() << std::endl;
}

bool Figure::check()
{
    return getSides() == 0;
}

std::string Figure::getName()
{
    return name;
}

std::uint32_t Figure::getSides()
{
    return sides;
}

std::string Figure::getSidesInfo()
{
    return "Стороны: не известно";
}

std::string Figure::getAnglesInfo()
{
    return "Углы: не известно";
}
