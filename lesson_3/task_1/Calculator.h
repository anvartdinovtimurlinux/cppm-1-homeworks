#ifndef CPPM_1_CALCULATOR_H
#define CPPM_1_CALCULATOR_H


class Calculator
{
private:
    int num1;
    int num2;

public:
    Calculator();
    double add();
    double multiply();
    double subtract_1_2();
    double subtract_2_1();
    double divide_1_2();
    double divide_2_1();
    bool set_num1(double num1);
    bool set_num2(double num2);
};


#endif
