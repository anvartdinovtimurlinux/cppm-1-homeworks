#pragma once


class Counter
{
private:
    int value;

public:
    Counter();
    Counter(int initialValue);
    void increase();
    void decrease();
    void printValue();
};
