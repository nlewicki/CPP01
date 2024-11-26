/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlewicki <nlewicki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 10:46:34 by nicolewicki       #+#    #+#             */
/*   Updated: 2024/11/26 10:55:24 by nlewicki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
    std::string str = "HI THIS IS BRAIN"; // string
    std::string *ptr = &str; // pointer to string
    std::string &ref = str; // reference to string (you use reference when you want to use the same variable with different names)

    std::cout << "Address of string: " << &str << std::endl;
    std::cout << "Address of pointer: " << &ptr << std::endl;
    std::cout << "Address of reference: " << &ref << std::endl;

    std::cout << std::endl;

    std::cout << "String: " << str << std::endl;
    std::cout << "Pointer: " << *ptr << std::endl;
    std::cout << "Reference: " << ref << std::endl;
    return 0;
}
