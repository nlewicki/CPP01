/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlewicki <nlewicki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 11:09:20 by nlewicki          #+#    #+#             */
/*   Updated: 2024/11/19 11:35:30 by nlewicki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

std::string	Zombie::getName() const
{
	return (name);
}

void	Zombie::setName(std::string name)
{
	this->name = name;
}

void	Zombie::announce(void)
{
	std::cout << "<" << name << "> BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie() : name("Unnamed Zombie")
{
}

Zombie::~Zombie()
{
	std::cout << getName() << ": Deeeaaaddd..." << std::endl;
}
