/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolewicki <nicolewicki@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 14:51:42 by nicolewicki       #+#    #+#             */
/*   Updated: 2024/11/25 15:10:13 by nicolewicki      ###   ########.fr       */
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
	int i = 0;
	std::string complain[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*ptmf[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	while (i < 4) // loop through the array until the level is found
	{
		if (level == complain[i])
			break;
		i++;
	}
	switch (i) // switch statement to call the function at the same index in the array of pointers to member functions
	{
	case 0: // if the level is DEBUG
		(this->*ptmf[i++])(); // call debug() and increment i
        // Fallthrough and call the next function
	case 1:
		(this->*ptmf[i++])();
	case 2:
		(this->*ptmf[i++])();
	case 3:
		(this->*ptmf[i++])();
		return ; // exit the function when the last function is called
	default: // if the level is not found
		std::cout << "did u hear smth? no? me neither" << std::endl; // print a message
		break;
	}
}