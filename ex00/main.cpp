/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlewicki <nlewicki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 11:09:00 by nlewicki          #+#    #+#             */
/*   Updated: 2024/11/26 10:47:20 by nlewicki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	StackZombie; // create a Zombie object on the stack -> no need to delete it
	Zombie*	HeapZombie = newZombie("HeapZombie"); // create a Zombie object on the heap -> need to delete it

	StackZombie.setName("StackZombie");
	StackZombie.announce(); // .announce() because it's a stack object
	HeapZombie->announce(); // ->announce() because it's a heap object
	randomChump("RandomChump");
	delete HeapZombie; // delete the heap Zombie
}
