/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlewicki <nlewicki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 11:29:00 by nlewicki          #+#    #+#             */
/*   Updated: 2024/11/26 10:52:24 by nlewicki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	//create a horde of 5 zombies with the name "Zombie[i]"
	Zombie* horde = zombieHorde(5, "Zombie");

	for (int i = 0; i < 5; i++)
		horde[i].announce();
	delete [] horde; // delete the horde of zombies because it was created on the heap
	return (0);
}
