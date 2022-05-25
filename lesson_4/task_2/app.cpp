#include <fstream>
#include <iostream>

#include "Address.h"


const std::string IN_FILENAME = "../lesson_4/task_2/in.txt";
const std::string OUT_FILENAME = "../lesson_4/task_2/out.txt";


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


    for (int i = 0; i < addressAmount - 1; ++i)
    {
        for (int j = i; j < addressAmount - 1; ++j)
        {
            if ((addresses[j]->getCity()).compare(addresses[j + 1]->getCity()) > 0)
            {
                Address* tempAddress = addresses[j];
                addresses[j] = addresses[j + 1];
                addresses[j + 1] = tempAddress;
            }
        }
    }


    std::ofstream out(OUT_FILENAME);
    out << addressAmount << std::endl;
    for (int i = 0; i <addressAmount; ++i)
    {
        out << addresses[i]->toString();
    }
    out.close();


    for (int i = 0; i < addressAmount; ++i)
    {
        delete addresses[i];
    }
//    delete[] *addresses;
}
