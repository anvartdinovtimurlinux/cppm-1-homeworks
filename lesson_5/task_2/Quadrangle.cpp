#include "Quadrangle.h"


Quadrangle::Quadrangle(std::uint32_t sideA, std::uint32_t sideB, std::uint32_t sideC, std::uint32_t sideD,
                       std::uint32_t angleA, std::uint32_t angleB, std::uint32_t angleC, std::uint32_t angleD)
{
    name = "Четырёхугольник";
    this->sideA = sideA;
    this->sideB = sideB;
    this->sideC = sideC;
    this->sideD = sideD;
    this->angleA = angleA;
    this->angleB = angleB;
    this->angleC = angleC;
    this->angleD = angleD;
}

std::uint32_t Quadrangle::getSideA()
{
    return sideA;
}

std::uint32_t Quadrangle::getSideB()
{
    return sideB;
}

std::uint32_t Quadrangle::getSideC()
{
    return sideC;
}

std::uint32_t Quadrangle::getSideD()
{
    return sideD;
}

std::uint32_t Quadrangle::getAngleA()
{
    return angleA;
}

std::uint32_t Quadrangle::getAngleB()
{
    return angleB;
}

std::uint32_t Quadrangle::getAngleC()
{
    return angleC;
}

std::uint32_t Quadrangle::getAngleD()
{
    return angleD;
}

std::string Quadrangle::getSidesInfo()
{
    return "Стороны:"
           " a=" + std::to_string(getSideA()) +
           " b=" + std::to_string(getSideB()) +
           " c=" + std::to_string(getSideC()) +
           " d=" + std::to_string(getSideD());
}

std::string Quadrangle::getAnglesInfo()
{
    return "Углы:"
           " A=" + std::to_string(getAngleA()) +
           " B=" + std::to_string(getAngleB()) +
           " C=" + std::to_string(getAngleC()) +
           " D=" + std::to_string(getAngleD());
}


// Прямоугольник
Rectangle::Rectangle(std::uint32_t sideAC, std::uint32_t sideBD)
        : Quadrangle(sideAC, sideBD, sideAC, sideBD, 90, 90, 90, 90)
{
    name = "Прямоугольник";
}


// Квадрат
Square::Square(std::uint32_t side)
        : Quadrangle(side, side, side, side, 90, 90, 90, 90)
{
    name = "Квадрат";
}


// Параллелограмм
Parallelogram::Parallelogram(std::uint32_t sideAC, std::uint32_t sideBD,
                             std::uint32_t angleAC, std::uint32_t angleBD)
        : Quadrangle(sideAC, sideBD, sideAC, sideBD, angleAC, angleBD, angleAC, angleBD)
{
    name = "Параллелограмм";
}


// Ромб
Rhombus::Rhombus(std::uint32_t side,
                 std::uint32_t angleAC, std::uint32_t angleBD)
        : Quadrangle(side, side, side, side, angleAC, angleBD, angleAC, angleBD)
{
    name = "Ромб";
}
