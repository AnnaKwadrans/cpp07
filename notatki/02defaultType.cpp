#include <iostream>
#include "02defaultType.tpp"

int main(void)
{
    Vertex<int>     v1(12, 23, 34); // pq default type es float
    Vertex<>        v2(12, 23, 34);

    std::cout << v1 <<std::endl // 12, 23, 34
        << v2 << std::endl;     // 12.0, 23.0, 34.0

    return (0);
}
