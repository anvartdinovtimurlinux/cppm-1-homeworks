#include "math_function.h"


int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int multiply(int a, int b)
{
    return a * b;
}

double divide(int a, int b)
{
    return static_cast<double>(a) / b;
}

int power(int base, int exp)
{
    int result = 1;
    while (exp > 0)
    {
        result *= base;
        --exp;
    }
    return result;
}
