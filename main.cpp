#include "ScalarConverter.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cout << "try ./a.out 42\n";
        return 1;
    }
    ScalarConverter::convert(av[1]);
}
