#include "stdio.h"
#include "Triangle.h"


Triangle::Triangle(std::uint32_t sideA, std::uint32_t sideB, std::uint32_t sideC,
                   std::uint32_t angleA, std::uint32_t angleB, std::uint32_t angleC)
{
    name = "Треугольник";
    this->sideA = sideA;
    this->sideB = sideB;
    this->sideC = sideC;
    this->angleA = angleA;
    this->angleB = angleB;
    this->angleC = angleC;
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


// Равнобедренный треугольник
IsoscelesTriangle::IsoscelesTriangle(std::uint32_t sideAC, std::uint32_t sideB,
                                     std::uint32_t angleAC, std::uint32_t angleB)
        : Triangle(sideAC, sideB, sideAC, angleAC, angleB, angleAC)
{
    name = "Равнобедренный треугольник";
}


// Равносторонний треугольник
EquilateralTriangle::EquilateralTriangle(std::uint32_t side)
        : IsoscelesTriangle(side, side, 60, 60)
{
    name = "Равносторонний треугольник";
}