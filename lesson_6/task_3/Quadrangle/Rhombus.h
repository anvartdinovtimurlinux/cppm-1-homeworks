#pragma once

#include "Parallelogram.h"


class Rhombus : public Parallelogram
{
public:
    Rhombus(std::uint32_t side,
            std::uint32_t angleAC, std::uint32_t angleBD);
};
