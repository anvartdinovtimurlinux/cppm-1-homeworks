#include "Address.h"


Address::Address(std::string city, std::string street, std::uint32_t house, std::uint32_t apartment)
{
    this->city = city;
    this->street = street;
    this->house = house;
    this->apartment = apartment;
}

std::string Address::getCity()
{
    return city;
}

std::string Address::toString()
{
    return city + ", " +
           street + ", " +
           std::to_string(house) + ", " +
           std::to_string(apartment) + "\n";
}
