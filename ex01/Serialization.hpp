#ifndef SERIALIZATION_HPP
#define SERIALIZATION_HPP

#include <string>
#include <stdint.h>

typedef struct Data
{
    char c;
    std::string str;
}   Data;

class Serializer
{
    private:
        Serializer(void){};
        Serializer(Serializer const &other);
        Serializer &operator=(Serializer const &other);
        ~Serializer(void){};
    public:
        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);
};

#endif