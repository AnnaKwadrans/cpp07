#include "iter.hpp"

void    printInt(int const n) {
    std::cout << n << std::endl;
    return;
}

void    increase(int &n) {
    n++;
    return ;
}

void    printStr(std::string const & str) {
    std::cout << str << std::endl;
    return;
}

void    toUpper(std::string &str) {
    for (size_t i = 0; i < str.length(); i++)
        str[i] = std::toupper(str[i]);
}

int main(void)
{

    int integers[4] = {1, 2, 3, 4};

    iter<int>(integers, 4, increase);
    iter<int>(integers, 4, printInt);
    std::cout << std::endl;
    
    int const   cIntegers[4] = {10, 9, 8, 7};
    iter<int const>(cIntegers, 4, printInt);
    std::cout << std::endl;

    std::string strings[4] = {"Hola", "mundo", "42", "string!"};

    iter<std::string>(strings, 4, toUpper);
    iter<std::string const>(strings, 4, printStr);

    return (0);
}
