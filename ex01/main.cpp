/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akwadran <akwadran@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/19 10:45:52 by akwadran          #+#    #+#             */
/*   Updated: 2026/07/19 10:46:59 by akwadran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template<typename U>
void    print(U value) {
    std::cout << value << std::endl;
    return;
}

void    increase(int &n) {
    n++;
    return ;
}

void    toUpper(std::string &str) {
    for (size_t i = 0; i < str.length(); i++)
        str[i] = std::toupper(str[i]);
}

int main(void)
{

    int integers[4] = {1, 2, 3, 4};

    iter<int>(integers, 4, increase);
    iter<int>(integers, 4, print<int>);
    std::cout << std::endl;
    
    int const   cIntegers[4] = {10, 9, 8, 7};
    iter<int const>(cIntegers, 4, print<int const>);
    std::cout << std::endl;

    std::string strings[4] = {"Hola", "mundo", "42", "string!"};

    iter<std::string>(strings, 4, toUpper);
    iter<std::string const>(strings, 4, print<std::string>);

    return (0);
}
