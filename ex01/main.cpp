/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlewicki <nlewicki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 11:29:00 by nlewicki          #+#    #+#             */
/*   Updated: 2024/11/21 12:09:15 by nlewicki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	//create a horde of 5 zombies with the name "Zombie[i]"
	Zombie* horde = zombieHorde(5, "Zombie");

	for (int i = 0; i < 5; i++)
		horde[i].announce();
	delete [] horde;
	return (0);
}
