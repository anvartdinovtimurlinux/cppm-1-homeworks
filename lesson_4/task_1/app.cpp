#include <fstream>
#include <iostream>

#include "Address.h"


const std::string IN_FILENAME = "../lesson_4/task_1/in.txt";
const std::string OUT_FILENAME = "../lesson_4/task_1/out.txt";


int main()
{
    std::ifstream in(IN_FILENAME);
    int addressAmount;
    in >> addressAmount;

    std::string city, street;
    std::uint32_t house, apartment;
    Address* addresses[addressAmount];
    for (int i = 0; i < addressAmount; ++i)
    {
        in >> city >> street >> house >> apartment;
        addresses[i] = new Address {city, street, house, apartment};
    }
    in.close();


    std::ofstream out(OUT_FILENAME);
    out << addressAmount << std::endl;
    for (int i = addressAmount - 1; i >= 0; --i)
    {
        out << addresses[i]->toString();
    }
    out.close();


    for (int i = 0; i < addressAmount; ++i)
    {
        delete addresses[i];
    }
    delete[] *addresses;
}
