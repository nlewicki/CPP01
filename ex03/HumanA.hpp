/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolewicki <nicolewicki@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 10:51:45 by nicolewicki       #+#    #+#             */
/*   Updated: 2024/11/22 11:13:24 by nicolewicki      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
    public:
        HumanA(std::string name, Weapon& weapon);
        ~HumanA();
        void attack(void) const;

    private:
        std::string name;
        //If the Weapon object is guaranteed to exist, references are safer than pointers because they cannot be nullptr
        Weapon& weapon;
        //!!References cannot be reseated (you cannot change which object a reference points to after initialization).!!
};

#endif