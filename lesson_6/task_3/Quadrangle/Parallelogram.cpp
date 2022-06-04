#include "Parallelogram.h"


Parallelogram::Parallelogram(std::uint32_t sideAC, std::uint32_t sideBD,
                             std::uint32_t angleAC, std::uint32_t angleBD)
        : Quadrangle(sideAC, sideBD, sideAC, sideBD, angleAC, angleBD, angleAC, angleBD)
{
    name = "Параллелограмм";
}
