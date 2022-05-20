#include "Calculator.h"


Calculator::Calculator()
{
    num1 = 1;
    num2 = 1;
}

double Calculator::add()
{
    return num1 + num2;
}

double Calculator::multiply()
{
    return num1 * num2;
}

double Calculator::subtract_1_2()
{
    return num1 - num2;
}

double Calculator::subtract_2_1()
{
    return num2 - num1;
}

double Calculator::divide_1_2()
{
    return num1 / num2;
}

double Calculator::divide_2_1()
{
    return num2 / num1;
}

bool Calculator::set_num1(double num)
{
    if (num == 0)
    {
        return false;
    }
    num1 = num;
    return true;
}

bool Calculator::set_num2(double num)
{
    if (num == 0)
    {
        return false;
    }
    num2 = num;
    return true;
}
