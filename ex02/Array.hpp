/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akwadran <akwadran@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/19 10:47:25 by akwadran          #+#    #+#             */
/*   Updated: 2026/07/19 10:58:37 by akwadran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <exception>

template<typename T>
class Array
{
        public:
                T               *_elements;
                unsigned int    _size;

        
                Array<T>(void);
                Array<T>(unsigned int n);
                Array<T>(const Array & src);

                Array<T>   &operator=(const Array<T> & src);

                T       &operator[](unsigned int index);

                unsigned int    size(void) const;

                ~Array();


                class OutOfBoundsException : public std::exception
                {
                        public:
                                const char      *what() const throw();
                };
};

# include "Array.tpp"

#endif
