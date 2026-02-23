#include <iostream>
#include "Serialization.hpp"
#include <stdint.h>

int main()
{
    Data test;
    test.c = 'A';
    test.str = "test";
    std::cout << "Data address : " << &test << '\n';
    uintptr_t id = Serializer::serialize(&test);
    std::cout << "id value : " << id << '\n';
    Data *after = Serializer::deserialize(id);
    std::cout << "after deserialize Data : " << after << " and variable c : " << after->c << " str : " << after->str << '\n';
    std::cout << "compaire it with original : " << &test << " and variable c : " << test.c  << " str : " << test.str << '\n';
}