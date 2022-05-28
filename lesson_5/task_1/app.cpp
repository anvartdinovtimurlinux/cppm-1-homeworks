#include <iostream>

#include "Figure.h"
#include "Triangle.h"
#include "Quadrangle.h"


void printInfo(Figure* figure)
{
    std::cout << figure->getName() << ": " << figure->getSides() << std::endl;
}

int main()
{
    Figure figure;
    Triangle triangle;
    Quadrangle quadrangle;

    std::cout << "Количество сторон:" << std::endl;
    printInfo(&figure);
    printInfo(&triangle);
    printInfo(&quadrangle);

    return 0;
}