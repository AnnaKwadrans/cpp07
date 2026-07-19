#include <iostream>
#include "Array.hpp"

int main(void)
{   
        Array<int>     a;
        Array<char>     c(3);

        

        try
        {
                std::cout << "c[1]: " << c[1] << std::endl;
                std::cout << "c[3]: " << c[3] << std::endl;
                std::cout << "c[2]: " << c[2] << std::endl;
        }
        catch(std::exception& e)
        {
                std::cerr << e.what() << std::endl;
        }
        

    return 0;
}