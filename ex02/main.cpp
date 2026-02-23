#include "Identify.hpp"

class test : public Base
{

};

int main()
{
    test t;
    C test;
    Base *ptr = &test;
    identify(NULL);
    identify(ptr);
    Base &ref = t;
    identify(ref);
}