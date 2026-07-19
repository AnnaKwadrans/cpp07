/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akwadran <akwadran@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/19 10:46:04 by akwadran          #+#    #+#             */
/*   Updated: 2026/07/19 10:46:06 by akwadran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <string.h>

//template<typename T>
//void    iter(T *arr, int len, void (*func)(T &))
//void    iter(T *arr, int len, void (*func)(T const &))

template<typename T, typename F>
void    iter(T *arr, int const len, F func)
{
    for (int i = 0; i < len; i++)
        func(arr[i]);
    return ;
}

#endif
