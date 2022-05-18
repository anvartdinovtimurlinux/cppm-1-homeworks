#include <iostream>

struct Account
{
    int invoice;
    std::string owner;
    double money;
};

Account buildAccount()
{
    int invoice;
    std::cout << "Введите номер счёта: ";
    std::cin >> invoice;

    std::string owner;
    std::cout << "Введите имя владельца: ";
    std::cin >> owner;

    double money;
    std::cout << "Введите баланс: ";
    std::cin >> money;

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

    double newMoney;
    std::cout << "Введите новый баланс: ";
    std::cin >> newMoney;
    changeAccount(acc, newMoney);
    printMoney(acc);
}