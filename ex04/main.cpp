/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcorso <mcorso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 10:16:20 by mcorso            #+#    #+#             */
/*   Updated: 2023/02/01 13:30:43 by mcorso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <fstream>
#include <iostream>

static void	replace(std::string s1, std::string s2, std::string file_name);

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Invalid number of argument\n";
		return (1);
	}
	replace(argv[2], argv[3], argv[1]);
}

static void	replace(std::string s1, std::string s2, std::string file_name)
{
	size_t			occurence_position;
	std::string		buffer;
	std::ifstream	original_file;
	std::ofstream	created_file;

	(void)s1;
	(void)s2;
	original_file.open(file_name.data());
	if (original_file.fail() == true)
	{
		std::cout << "Could not open ./" << file_name << "\n";
		return ;
	}
	created_file.open(file_name.append(".replace").data());
	if (created_file.fail())
	{
		std::cout << "Could not create a file.\n";
		return ;
	}
	while (std::getline(original_file, buffer))
	{
		while ((occurence_position = buffer.find(s1)) != std::string::npos)
		{
			buffer = buffer.erase(occurence_position, s1.length());
			buffer = buffer.insert(occurence_position, s2);
		}
		created_file << buffer << '\n' << std::flush;
	};
}