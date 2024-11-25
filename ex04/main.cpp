/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolewicki <nicolewicki@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 11:38:04 by nicolewicki       #+#    #+#             */
/*   Updated: 2024/11/25 12:54:04 by nicolewicki      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

int	check_args(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Insufficient amount of arguments." << std::endl; //cerr is used to output errors
		return (1);
	}
	std::fstream file(argv[1], std::ios::in); //fstream for reading file content (can also write)
	if (!file.is_open()) //is_open() returns true if the file is open
	{
		std::cerr << "File \"" << argv[1] << "\"is inaccessible." << std::endl;
		return (1);
	}
	file.close(); //close the file after opening with fstream
	return (0);
}

std::string	destFileName(const std::string &sourceFile)
{
	std::string	destFile = sourceFile;
	std::string	newFiletype = ".replace";
	size_t	pos = destFile.find_last_of('.');
	if (pos == std::string::npos) // if the file has no extension
		destFile.append(newFiletype); //append() is used to add a string at the end of another string
	else // if the file has an extension
	{
		destFile.erase(pos); //erase() is used to remove extension characters from the string
		destFile.append(newFiletype); // add the new extension
	}
	return (destFile); //return the new file name
}

int	copy_file(const std::string &sourceFile, const std::string &s1, const std::string &s2)
{
	std::string		destFile = destFileName(sourceFile); //get the new file name
	std::ifstream	inFile(sourceFile);
	std::ofstream	outFile(destFile);

	std::string line;
	while(std::getline(inFile, line)) //getline() is used to read a line from a file
	{
		size_t pos = line.find(s1); //find the position of the first occurrence of s1 in the line
		while (pos != std::string::npos) //while s1 is found in the line
		{
			line.erase(pos, s1.length()); //erase the s1 from the line
			line.insert(pos, s2); //insert s2 at the position of s1
			pos = line.find(s1, pos + s2.length()); //find the next occurrence of s1 in the line
		}
		outFile << line << std::endl; //write the modified line to the new file
	}
	inFile.close(); //close the input file
	outFile.close(); //close the output file
	return (0);
}

int	main(int argc, char **argv)
{
	if(check_args(argc, argv))
		return (1);
	if(copy_file(argv[1], argv[2], argv[3]))
		return(1);
	return (0);
}

//test: ./loser blue.txt blue red