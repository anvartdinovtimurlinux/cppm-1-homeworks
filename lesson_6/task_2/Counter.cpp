#include <iostream>
#include "Counter.h"


Counter::Counter()
{
    value = 1;
}

Counter::Counter(int initialValue)
{
    value = initialValue;
}

void Counter::increase()
{
    ++value;
}

void Counter::decrease()
{
    --value;
}

void Counter::printValue()
{
    std::cout << value << std::endl;
}
