/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolewicki <nicolewicki@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 13:03:13 by nicolewicki       #+#    #+#             */
/*   Updated: 2024/11/25 13:16:43 by nicolewicki      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() //constructor
{
}

Harl::~Harl() //destructor
{
}

void Harl::debug(void)
{
    std::cout << "[ DEBUG ] I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info(void)
{
    std::cout << "[ INFO ] I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::warning (void)
{
    std::cout << "[ WARNING ] I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error (void)
{
    std::cout << "[ ERROR ] This is unacceptable! I want to speak to the manager now" << std::endl;
}

void Harl::complain( std::string level )
{
    std::string complain[4] = {"DEBUG", "INFO", "WARNING", "ERROR"}; // create an array of strings
	void (Harl::*pointer[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error}; // create an array of pointers to member functions
	for (int i = 0; i < 4; i++) // loop through the array
    {
        if (level == complain[i]) // if the level is equal to the string in the array
        {
            (this->*pointer[i])(); // call the function at the same index in the array of pointers to member functions
            return ; // exit the function
        }
    }
	std::cout << "!![ DANGER ] Unknown ANGER status!!" << std::endl;

}