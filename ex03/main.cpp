/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolewicki <nicolewicki@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 10:51:14 by nicolewicki       #+#    #+#             */
/*   Updated: 2024/11/22 11:37:21 by nicolewicki      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main()
{
    { //scope
        Weapon club = Weapon("crude spiked club"); //stack alloceted
        HumanA bob("Bob", club); //stack alloceted
        bob.attack();
        club.setType("some other type of club");
        bob.attack();
    } //end of scope -> everything in scope is deallocated here
    { //scope2
        Weapon club = Weapon("crude spiked club"); //stack alloceted
        HumanB jim("Jim"); //stack alloceted -> no free needed
        jim.setWeapon(club); // storing a pointer -> no allocation needed
        jim.attack();
        club.setType("some other type of club");
        jim.attack();
    } //end of scope2 -> everything in scope2 is deallocated here
    return 0;
}


/*
Use Case	                    Pointer                                      Reference

Object might not exist	        ✅ Supports nullptr.	                        ❌ Cannot represent absence.
Dynamically created objects	    ✅ Necessary for heap allocation.	        ❌ Cannot manage dynamic memory.
Guaranteed object existence	    ❌ Risk of null or uninitialized pointer.	✅ Object must exist.
Reassigning to another object	✅ Can reassign to a different object.	    ❌ Reference is immutable after binding.
Cleaner and simpler syntax	    ❌ Requires -> and * dereferencing.	        ✅ Cleaner and more intuitive syntax.
Function parameter/return type	✅ Flexible, but nullable.	                ✅ Cleaner and safer for non-null cases.
*/