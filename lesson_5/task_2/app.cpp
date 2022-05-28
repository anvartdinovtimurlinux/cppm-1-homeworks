#include <iostream>

#include "Figure.h"
#include "Triangle.h"
#include "Quadrangle.h"


void printInfo(Figure* figure)
{
    std::cout << figure->getName() << std::endl
              << figure->getSidesInfo() << std::endl
              << figure->getAnglesInfo() << std::endl << std::endl;
}

int main()
{
    Triangle triangle {10, 20, 30, 50, 60, 70};
    RectangularTriangle rectangularTriangle {10, 20, 30, 50, 60};
    IsoscelesTriangle isoscelesTriangle {10, 20, 50, 60};
    EquilateralTriangle equilateralTriangle {30};

    Quadrangle quadrangle {10, 20, 30, 40, 50, 60, 70, 80};
    Rectangle rectangle {10, 20};
    Square square {20};
    Parallelogram parallelogram {20, 30, 30, 40};
    Rhombus rhombus {30, 30, 40};

    printInfo(&triangle);
    printInfo(&rectangularTriangle);
    printInfo(&isoscelesTriangle);
    printInfo(&equilateralTriangle);

    printInfo(&quadrangle);
    printInfo(&rectangle);
    printInfo(&square);
    printInfo(&parallelogram);
    printInfo(&rhombus);

    return 0;
}