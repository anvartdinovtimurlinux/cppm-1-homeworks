#ifndef FIGURE_H
#define FIGURE_H

#include <iostream>


class Figure
{
public:
    Figure();
    std::string getName();
    virtual std::string getSidesInfo();
    virtual std::string getAnglesInfo();

protected:
    std::string name;
};


#endif
