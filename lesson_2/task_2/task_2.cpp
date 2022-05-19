#include <iostream>

struct Account
{
    std::uint32_t invoice = 0;
    std::string owner = "unnamed";
    double money = 0.0;
};

Account buildAccount()
{
    std::uint32_t invoice;
    std::cout << "Введите номер счёта: ";
    std::cin >> invoice;

    std::string owner;
    std::cout << "Введите имя владельца: ";
    std::cin >> owner;

    double money = -1.0;
    while (money < 0)
    {
        std::cout << "Введите баланс (неотрицательное значение): ";
        std::cin >> money;
    }

    return Account {invoice, owner, money};
}

void printMoney(Account &account)
{
    std::cout << "Ваш счёт: " << account.owner << ", " << account.invoice << ", " << account.money << std::endl;
}

void changeAccount(Account &account, double newMoney)
{
    account.money = newMoney;
}


int main()
{
    Account acc = buildAccount();
    printMoney(acc);

    double newMoney = -1.0;
    while (newMoney < 0)
    {
        std::cout << "Введите новый баланс (неотрицательное значение): ";
        std::cin >> newMoney;
    }
    changeAccount(acc, newMoney);
    printMoney(acc);

    return 0;
}