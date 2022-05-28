#ifndef FIGURE_H
#define FIGURE_H

#include <iostream>


class Figure
{
public:
    Figure();
    std::uint32_t getSides();
    std::string getName();

protected:
    std::uint32_t sides;
    std::string name;
};


#endif
