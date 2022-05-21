#include <iostream>
#include "Counter.h"


int main()
{
    std::string answer;
    std::cout << "Вы хотите указать начальное значение счётчика? Введите \"да\" или любое другое значение, если не хотите: ";
    std::cin >> answer;
    Counter counter;
    if (answer == "да") {
        int initialValue;
        std::cout << "Введите начальное значение счётчика: ";
        std::cin >> initialValue;
        counter = Counter(initialValue);
    }
    else {
        counter = Counter();
    }

    char operation;
    bool isContinue = true;
    while (isContinue)
    {
        std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
        std::cin >> operation;

        switch (operation)
        {
            case '+':
                counter.increase();
                break;
            case '-':
                counter.decrease();
                break;
            case '=':
                counter.printValue();
                break;
            case 'x':
                std::cout << "До свидания!" << std::endl;
                isContinue = false;
                break;
            default:
                std::cout << "Неверная команда" << std::endl;
                break;
        }
    }

    return 0;
}
