/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileReplacer.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolewicki <nicolewicki@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 11:41:04 by nicolewicki       #+#    #+#             */
/*   Updated: 2024/11/22 11:43:34 by nicolewicki      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILEREPLACER_HPP
# define FILEREPLACER_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

class FileReplacer
{
    public:
        FileReplacer(std::string filename, std::string search, std::string replace);
        ~FileReplacer();
        bool replace(void);

    private:
        std::string filename;
        std::string search;
        std::string replace;
        bool validateInput() const;
        std::string process(const std::string& line) const;
};

#endif