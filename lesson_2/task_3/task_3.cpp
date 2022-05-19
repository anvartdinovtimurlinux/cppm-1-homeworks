#include <iostream>

struct Address
{
    std::string country = "";
    std::string city = "";
    std::string street = "";
    std::uint32_t house = 0;
    std::uint32_t apartment = 0;
    std::uint32_t index = 0;
};

void printAddress(Address &address)
{
    std::cout << "Страна: " << address.country << std::endl;
    std::cout << "Город: " << address.city << std::endl;
    std::cout << "Улица: " << address.street << std::endl;
    std::cout << "Дом: " << address.house << std::endl;
    std::cout << "Квартира: " << address.apartment << std::endl;
    std::cout << "Индекс: " << address.index << std::endl;
}

int main()
{
//    В динамической памяти
    Address* address_1 = new Address {"Россия", "Москва", "Арбат", 14, 21, 123053};
    printAddress(*address_1);
    delete address_1;

    std::cout << std::endl << std::endl;
//    В стеке
    Address address_2 = Address {"Россия", "Тула", "Строителей", 15, 1, 153436};
    printAddress(address_2);

    return 0;
}