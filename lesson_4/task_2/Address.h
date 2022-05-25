#ifndef ADDRESS_H
#define ADDRESS_H

#include <iostream>


class Address
{
public:
    Address(std::string city, std::string street, std::uint32_t house, std::uint32_t apartment);
    std::string getCity();
    std::string toString();

private:
    std::string city;
    std::string street;
    std::uint32_t house;
    std::uint32_t apartment;
};


#endif
