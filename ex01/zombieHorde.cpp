/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlewicki <nlewicki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 11:29:29 by nlewicki          #+#    #+#             */
/*   Updated: 2024/11/26 10:52:35 by nlewicki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie* horde = new Zombie[N]; //create an array of N zombies on the heap

	//set the name of each zombie to "name[i]"
	for (int i = 0; i < N; i++)
		horde[i].setName(name + std::to_string(i + 1));
	return (horde);
}
