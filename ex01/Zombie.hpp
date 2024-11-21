/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlewicki <nlewicki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 11:29:10 by nlewicki          #+#    #+#             */
/*   Updated: 2024/11/21 12:01:56 by nlewicki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie
{
	private:
		std::string	name;

	public:
		//constructor
		Zombie();
		//destructor
		~Zombie();
		//copy constructor
		Zombie(const Zombie& other);
		//copy assignment operator
		Zombie& operator=(const Zombie& other);


		//move constructor
		Zombie(Zombie&& other) noexcept;
		//move assignment operator
		Zombie& operator=(Zombie&& other) noexcept;

		std::string	getName() const;
		void		setName(std::string name);
		void		announce(void);
};

Zombie* zombieHorde( int N, std::string name );


#endif
