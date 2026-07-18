#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <string.h>

//template<typename T>
//void    iter(T *arr, int len, void (*func)(T &))
//void    iter(T *arr, int len, void (*func)(T const &))

template<typename T, typename F>
void    iter(T *arr, int len, F func)
{
    for (int i = 0; i < len; i++)
        func(arr[i]);
    return ;
}

#endif
