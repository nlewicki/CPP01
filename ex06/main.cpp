/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolewicki <nicolewicki@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 14:51:34 by nicolewicki       #+#    #+#             */
/*   Updated: 2024/11/25 15:04:29 by nicolewicki      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
    Harl harl;
    
    if (argc != 2)
    {
        std::cerr << "Bad amount of arguments." << std::endl;
        return (1);
    }
    harl.complain(argv[1]);
    return (0);
}