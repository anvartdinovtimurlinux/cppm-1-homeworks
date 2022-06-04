#pragma once

#include "Quadrangle.h"


class Parallelogram : public Quadrangle
{
public:
    Parallelogram(std::uint32_t sideAC, std::uint32_t sideBD,
                  std::uint32_t angleAC, std::uint32_t angleBD);
};
