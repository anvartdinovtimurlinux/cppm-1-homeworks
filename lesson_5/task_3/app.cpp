#include <iostream>

#include "Figure.h"
#include "Triangle.h"
#include "Quadrangle.h"


int main()
{
    Figure figure;

    Triangle triangle {10, 20, 30, 50, 60, 70};
    RectangularTriangle rectangularTriangle {10, 20, 30, 50, 60};
    IsoscelesTriangle isoscelesTriangle {10, 20, 50, 60};
    EquilateralTriangle equilateralTriangle {30};

    Quadrangle quadrangle {10, 20, 30, 40, 50, 60, 70, 80};
    Rectangle rectangle {10, 20};
    Square square {20};
    Parallelogram parallelogram {20, 30, 30, 40};
    Rhombus rhombus {30, 30, 40};

    figure.print_info();

    triangle.print_info();
    rectangularTriangle.print_info();
    isoscelesTriangle.print_info();
    equilateralTriangle.print_info();

    quadrangle.print_info();
    rectangle.print_info();
    square.print_info();
    parallelogram.print_info();
    rhombus.print_info();

    return 0;
}