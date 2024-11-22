/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolewicki <nicolewicki@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 10:52:00 by nicolewicki       #+#    #+#             */
/*   Updated: 2024/11/22 11:12:19 by nicolewicki      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
    public:
        HumanB(std::string name);
        ~HumanB();
        void attack(void) const;
        void setWeapon(Weapon& weapon);

    private:
        std::string name;
        //If the Weapon object may or may not exist (e.g., a character might not have a weapon equipped), pointers allow to represent this with nullptr.
        Weapon* weapon;
        //!!Pointers require explicit memory management (new and delete), which can lead to memory leaks!!
};

#endif