/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlewicki <nlewicki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 11:09:00 by nlewicki          #+#    #+#             */
/*   Updated: 2024/11/19 11:47:31 by nlewicki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	StackZombie;
	Zombie*	HeapZombie = newZombie("HeapZombie");

	StackZombie.setName("StackZombie");
	StackZombie.announce();
	HeapZombie->announce();
	randomChump("RandomChump");
	delete HeapZombie;
}
