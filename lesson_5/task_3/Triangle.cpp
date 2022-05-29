#include "Triangle.h"


Triangle::Triangle(std::uint32_t sideA, std::uint32_t sideB, std::uint32_t sideC,
                   std::uint32_t angleA, std::uint32_t angleB, std::uint32_t angleC)
{
    name = "Треугольник";
    sides = 3;
    this->sideA = sideA;
    this->sideB = sideB;
    this->sideC = sideC;
    this->angleA = angleA;
    this->angleB = angleB;
    this->angleC = angleC;
}

void Triangle::print_info()
{
    Figure::print_info();
    std::cout << getSidesInfo() << std::endl;
    std::cout << getAnglesInfo() << std::endl;
}

bool Triangle::check()
{
    return getSides() == 3 &&
           getAngleA() + getAngleB() + getAngleC() == 180;
}

std::uint32_t Triangle::getSideA()
{
    return sideA;
}

std::uint32_t Triangle::getSideB()
{
    return sideB;
}

std::uint32_t Triangle::getSideC()
{
    return sideC;
}

std::uint32_t Triangle::getAngleA()
{
    return angleA;
}

std::uint32_t Triangle::getAngleB()
{
    return angleB;
}

std::uint32_t Triangle::getAngleC()
{
    return angleC;
}

std::string Triangle::getSidesInfo()
{
    return "Стороны:"
           " a=" + std::to_string(getSideA()) +
           " b=" + std::to_string(getSideB()) +
           " c=" + std::to_string(getSideC());
}

std::string Triangle::getAnglesInfo()
{
    return "Углы:"
           " A=" + std::to_string(getAngleA()) +
           " B=" + std::to_string(getAngleB()) +
           " C=" + std::to_string(getAngleC());
}


// Прямоугольный треугольник
RectangularTriangle::RectangularTriangle(std::uint32_t sideA, std::uint32_t sideB, std::uint32_t sideC,
                                         std::uint32_t angleA, std::uint32_t angleB)
        : Triangle(sideA, sideB, sideC, angleA, angleB, 90)
{
    name = "Прямоугольный треугольник";
}

bool RectangularTriangle::check()
{
    return Triangle::check() &&
           getAngleC() == 90;
}


// Равнобедренный треугольник
IsoscelesTriangle::IsoscelesTriangle(std::uint32_t sideAC, std::uint32_t sideB,
                                     std::uint32_t angleAC, std::uint32_t angleB)
        : Triangle(sideAC, sideB, sideAC, angleAC, angleB, angleAC)
{
    name = "Равнобедренный треугольник";
}

bool IsoscelesTriangle::check()
{
    return Triangle::check() &&
           getAngleA() == getAngleC() &&
           getSideA() == getSideC();
}


// Равносторонний треугольник
EquilateralTriangle::EquilateralTriangle(std::uint32_t side)
        : IsoscelesTriangle(side, side, 60, 60)
{
    name = "Равносторонний треугольник";
}

bool EquilateralTriangle::check()
{
    return IsoscelesTriangle::check() &&
           getAngleA() == getAngleB() &&
           getAngleA() == 60 &&
           getSideA() == getSideB();
}
