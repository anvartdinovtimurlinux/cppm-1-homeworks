#pragma once

#include "../Figure.h"


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
