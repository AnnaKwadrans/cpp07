#include <iostream>
#include "whatever.hpp"

int main(void)
{
    int a = 5;
    int b = 12;

    std::cout << "Max of " << a << " and " << b << ": "
        << max<int>(a, b) << std::endl;
    std::cout << "Min of " << a << " and " << b << ": "
        << min<int>(a, b) << std::endl;
    std::cout << "Before swap - a: " << a << ", b: " << b << std::endl; 
    swap<int>(a, b);
    std::cout << "After swap - a: " << a << ", b: " << b << std::endl;

    float   c = 3.14f;
    float   d = 15.6f;

    std::cout << "Max of " << c << " and " << d << ": "
        << max<float>(c, d) << std::endl;
    std::cout << "Min of " << c << " and " << d << ": "
        << min<float>(c, d) << std::endl;
    std::cout << "Before swap - c: " << c << ", d: " << d << std::endl; 
    swap<float>(c, d);
    std::cout << "After swap - c: " << c << ", d: " << d << std::endl;

    char    e = 'a';
    char    f = 'z';

    std::cout << "Max of " << e << " and " << f << ": "
        << max<char>(e, f) << std::endl;
    std::cout << "Min of " << e << " and " << f << ": "
        << min<char>(e, f) << std::endl;
    std::cout << "Before swap - e: " << e << ", f: " << f << std::endl; 
    swap<char>(e, f);
    std::cout << "After swap - e: " << e << ", f: " << f << std::endl;

    return (0);
}
