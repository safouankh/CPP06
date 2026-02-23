#include "Identify.hpp"

Base    *generate(void)
{
    int chance = 0;
    for (int i = 0; i < 2; i++)
        if (rand() % 2)
            chance++;
    switch (chance)
    {
        case 0:
            return new A();
        case 1:
            return new B();
        case 2:
            return new C();
        default:
            break;
    }
    return NULL;
}

void identify(Base* p)
{
    if (dynamic_cast<A *>(p))
        return (std::cout << "class A\n", void(0));
    if (dynamic_cast<B *>(p))
        return (std::cout << "class B\n", void(0));
    if (dynamic_cast<C *>(p))
        return (std::cout << "class C\n", void(0));
    std::cout << "no class found\n";
}

void    identify(Base& p)
{
    try
    {
        (void)dynamic_cast<A &>(p);
        std::cout << "class A\n";
    }
    catch(const std::exception& e)
    {
        try
        {
            (void)dynamic_cast<B &>(p);
            std::cout << "class B\n";
        }
        catch(const std::exception& e)
        {
            try
            {
                (void)dynamic_cast<C &>(p);
                std::cout << "class C\n";
            }
            catch(const std::exception& e)
            {
                std::cout << "no class found\n";
            }
        }
    }
}
