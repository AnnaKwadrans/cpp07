/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akwadran <akwadran@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/19 10:40:44 by akwadran          #+#    #+#             */
/*   Updated: 2026/07/19 10:40:55 by akwadran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template<typename T>
void    swap(T &x, T &y) {
    T   tmp = x;
    x = y;
    y = tmp; 
    return ;
}

template<typename T>
T const &min(T const &x, T const &y) {
    return (x < y ? x : y);
}

template<typename T>
T const &max(T const &x, T const &y) {
    return (x > y ? x : y);
}

#endif
