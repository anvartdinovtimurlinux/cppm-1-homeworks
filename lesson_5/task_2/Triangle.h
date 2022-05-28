#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Figure.h"


class Triangle : public Figure
{
public:
    Triangle(std::uint32_t sideA, std::uint32_t sideB, std::uint32_t sideC,
             std::uint32_t angleA, std::uint32_t angleB, std::uint32_t angleC);
    std::string getSidesInfo() override;
    std::string getAnglesInfo() override;

protected:
    std::uint32_t sideA;
    std::uint32_t sideB;
    std::uint32_t sideC;
    std::uint32_t angleA;
    std::uint32_t angleB;
    std::uint32_t angleC;

    std::uint32_t getSideA();
    std::uint32_t getSideB();
    std::uint32_t getSideC();
    std::uint32_t getAngleA();
    std::uint32_t getAngleB();
    std::uint32_t getAngleC();
};


// Прямоугольный треугольник
class RectangularTriangle : public Triangle
{
public:
    RectangularTriangle(std::uint32_t sideA, std::uint32_t sideB, std::uint32_t sideC,
                        std::uint32_t angleA, std::uint32_t angleB);
};


// Равнобедренный треугольник
class IsoscelesTriangle : public Triangle
{
public:
    IsoscelesTriangle(std::uint32_t sideAC, std::uint32_t sideB,
                        std::uint32_t angleAC, std::uint32_t angleB);
};


// Равносторонний треугольник
class EquilateralTriangle : public Triangle
{
public:
    EquilateralTriangle(std::uint32_t side);
};

#endif
