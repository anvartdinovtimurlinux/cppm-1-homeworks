#include "Square.h"


Square::Square(std::uint32_t side)
        : Rectangle(side, side)
{
    name = "Квадрат";
}
