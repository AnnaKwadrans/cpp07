#include <iostream>

/*
int max(int x, int y) {
    return (x >= y ? x : y );
}
*/

template< typename T >
T const &max(T const &x, T const &y) { // T <- global type
    return (x >= y ? x : y );
}

int foo(int x) {
    std::cout << "Long computing time" << std::endl;
    return (x);
}

int main(void)
{
    int a = 4;
    int b = 7;
    float c = 5.76f;
    float d = 15.3f;

    std::cout << max<int>(a, b) << std::endl;   // explicit instatciation
    std::cout << max(a, b) << std::endl;        // implicit instatciation

    std::cout << max<float>(c, d) << std::endl;
    std::cout << max(c, d) << std::endl;

    char e = 'a';
    char f = 'z';

    std::cout << max<char>(e, f) << std::endl;
    std::cout << max(e, f) << std::endl;

    int ret = max<int>(foo(a), foo(b));
    std::cout << ret << std::endl;

    return (0);
}
