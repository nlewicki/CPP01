/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlewicki <nlewicki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 11:09:10 by nlewicki          #+#    #+#             */
/*   Updated: 2024/11/19 11:31:08 by nlewicki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Use heap allocation (newZombie) when:

The zombie’s lifetime needs to persist beyond the scope of the function.
You require a dynamic number of zombies or need to manage zombies across multiple scopes.


Use stack allocation (randomChump) when:

The zombie is short-lived and only required temporarily.
You want to avoid manual memory management and ensure efficiency.
*/

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie
{
	private:
		std::string	name;

	public:
		Zombie();
		~Zombie();
		std::string	getName() const;
		void		setName(std::string name);
		void		announce(void);
};

Zombie* newZombie(std::string name);
void	randomChump(std::string name);

#endif
