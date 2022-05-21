#ifndef CPPM_1_COUNTER_H
#define CPPM_1_COUNTER_H


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


#endif
