#include <iostream>

#include "math_function.h"


int main()
{
    int a, b, operation;
    std::cout << "Введите первое число: ";
    std::cin >> a;
    std::cout << "Введите второе число: ";
    std::cin >> b;
    std::cout << "Выберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
    std::cin >> operation;

    switch (operation)
    {
        case 1:
            std::cout << a << " плюс " << b << " = " << add(a, b) << std::endl;
            break;
        case 2:
            std::cout << a << " минус " << b << " = " << sub(a, b) << std::endl;
            break;
        case 3:
            std::cout << a << " умножить на " << b << " = " << multiply(a, b) << std::endl;
            break;
        case 4:
            std::cout << a << " разделить на " << b << " = " << divide(a, b) << std::endl;
            break;
        case 5:
            std::cout << a << " в степени " << b << " = " << power(a, b) << std::endl;
            break;
        default:
            std::cout << "эта операция не поддерживается" << std::endl;
    }

    return 0;
}
