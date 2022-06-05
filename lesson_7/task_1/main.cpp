#include "iostream"

#define MODE 1

#ifndef MODE
#error Необходимо определить MODE

#elif MODE == 0
int main()
{
    std::cout << "Работаю в режиме тренировки" << std::endl;
    return 0;
}

#elif MODE == 1
int add(int a, int b) {
    return a + b;
}

int main()
{
    std::cout << "Работаю в боевом режиме" << std::endl;
    std::cout << "Введите два числа" << std::endl;
    int a, b;
    std::cout << "a: ";
    std::cin >> a;
    std::cout << "b: ";
    std::cin >> b;

    std::cout << "Сумма " << a << " и " << b << " равна " << add(a, b) << std::endl;
    return 0;
}

#else
int main()
{
    std::cout << "Неизвестный режим. Завершение работы" << std::endl;
    return 0;
}

#endif
