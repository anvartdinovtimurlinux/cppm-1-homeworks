#include "Rhombus.h"


Rhombus::Rhombus(std::uint32_t side,
                 std::uint32_t angleAC, std::uint32_t angleBD)
        : Parallelogram(side, side, angleAC, angleBD)
{
    name = "Ромб";
}
