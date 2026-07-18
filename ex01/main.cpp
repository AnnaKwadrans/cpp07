#include "iter.hpp"

void    print(int &n) {
    std::cout << n << std::endl;
    return;
}

void    increase(int &n) {
    n++;
    return ;
}

int main(void)
{

    int integers[4] = {1, 2, 3, 4};

    iter<int>(integers, 4, print);
    iter<int>(integers, 4, increase);
    iter<int>(integers, 4, print);

    return (0);
}
