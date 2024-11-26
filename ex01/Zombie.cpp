/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlewicki <nlewicki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 11:29:18 by nlewicki          #+#    #+#             */
/*   Updated: 2024/11/26 10:45:43 by nlewicki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//the default constructor initializes the name to "Unnamed Zombie"
Zombie::Zombie() : name("Unnamed Zombie")
{
}

//the destructor prints the name of the zombie followed by ": Deeeaaaddd..."
Zombie::~Zombie()
{
	std::cout << getName() << ": Deeeaaaddd..." << std::endl;
}

//the copy constructor performs a copy of the name
//Creates a new Zombie object
Zombie::Zombie(const Zombie& other) : name(other.name)
{
}

//the copy assignment operator performs a copy of the name
//works with an existing object
Zombie& Zombie::operator=(const Zombie& other)
{
	if (this != &other)
	{
		name = other.name;
	}
	return *this;
}


//The move constructor and move assignment operator provide
//efficiency for operations like inserting into containers or returning objects from functions
Zombie::Zombie(Zombie&& other) noexcept
    : name(std::move(other.name))
{
	other.name = "";
}

Zombie& Zombie::operator=(Zombie&& other) noexcept
{
	if (this != &other) {
		// Transfer ownership of resources
		name = std::move(other.name);
		other.name = "";
	}
	return *this;
}

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


