#ifndef CPPM_1_QUADRANGLE_H
#define CPPM_1_QUADRANGLE_H

#include "Figure.h"


class Quadrangle : public Figure
{
public:
    Quadrangle(std::uint32_t sideA, std::uint32_t sideB, std::uint32_t sideC, std::uint32_t sideD,
               std::uint32_t angleA, std::uint32_t angleB, std::uint32_t angleC, std::uint32_t angleD);
    std::string getSidesInfo() override;
    std::string getAnglesInfo() override;

protected:
    std::uint32_t sideA;
    std::uint32_t sideB;
    std::uint32_t sideC;
    std::uint32_t sideD;
    std::uint32_t angleA;
    std::uint32_t angleB;
    std::uint32_t angleC;
    std::uint32_t angleD;

    std::uint32_t getSideA();
    std::uint32_t getSideB();
    std::uint32_t getSideC();
    std::uint32_t getSideD();
    std::uint32_t getAngleA();
    std::uint32_t getAngleB();
    std::uint32_t getAngleC();
    std::uint32_t getAngleD();
};


// Параллелограмм
class Parallelogram : public Quadrangle
{
public:
    Parallelogram(std::uint32_t sideAC, std::uint32_t sideBD,
                  std::uint32_t angleAC, std::uint32_t angleBD);
};


// Прямоугольник
class Rectangle : public Parallelogram
{
public:
    Rectangle(std::uint32_t sideAC, std::uint32_t sideBD);
};


// Квадрат
class Square : public Rectangle
{
public:
    Square(std::uint32_t side);
};


// Ромб
class Rhombus : public Parallelogram
{
public:
    Rhombus(std::uint32_t side,
            std::uint32_t angleAC, std::uint32_t angleBD);
};

#endif
