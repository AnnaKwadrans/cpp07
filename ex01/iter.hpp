#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template<typename T>
void    iter(T *arr, int const len, void (*func)(T const &))
{
    for (int i = 0; i < len; i++)
        func(arr[i]);
    return ;
}

template<typename T>
void    iter(T *arr, int const len, void (*func)(T &))
{
    for (int i = 0; i < len; i++)
        func(arr[i]);
    return ;
}

#endif
