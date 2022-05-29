#ifndef FIGURE_H
#define FIGURE_H

#include <iostream>


class Figure
{
public:
    Figure();
    virtual void print_info();

protected:
    std::string name;
    std::uint32_t sides;

    std::string getName();
    std::uint32_t getSides();

    virtual bool check();
    virtual std::string getSidesInfo();
    virtual std::string getAnglesInfo();
};


#endif
