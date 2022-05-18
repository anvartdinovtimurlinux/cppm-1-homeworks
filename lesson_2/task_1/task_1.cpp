#include <iostream>

// Использую верхний регистр, потому перечисления использую как константы
enum class Months
{
    JANUARY = 1,
    FEBRUARY,
    MARCH,
    APRIL,
    MAY,
    JUNE,
    JULY,
    AUGUST,
    SEPTEMBER,
    OCTOBER,
    NOVEMBER,
    DECEMBER
};

std::string monthToString(Months month)
{
    switch (month)
    {
        case Months::JANUARY:
            return "Январь";
            break;
        case Months::FEBRUARY:
            return "Февраль";
            break;
        case Months::MARCH:
            return "Март";
            break;
        case Months::APRIL:
            return "Апрель";
            break;
        case Months::MAY:
            return "Май";
            break;
        case Months::JUNE:
            return "Июнь";
            break;
        case Months::JULY:
            return "Июль";
            break;
        case Months::AUGUST:
            return "Август";
            break;
        case Months::SEPTEMBER:
            return "Сентябрь";
            break;
        case Months::OCTOBER:
            return "Октябрь";
            break;
        case Months::NOVEMBER:
            return "Ноябрь";
            break;
        case Months::DECEMBER:
            return "Декабрь";
            break;
        default:
            return "Неправильный номер!";
    }
}

int main()
{
    int answer;
    while (true)
    {
        std::cout << "Введите номер месяца: ";
        std::cin >> answer;

        if (answer == 0)
        {
            std::cout << "До свидания" << std::endl;
            break;
        }
        else
        {
            std::cout << monthToString(static_cast<Months>(answer)) << std::endl;
        }
    }
}