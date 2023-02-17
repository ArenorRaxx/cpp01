/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikoraxx <nikoraxx@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 10:16:20 by mcorso            #+#    #+#             */
/*   Updated: 2023/02/17 12:39:15 by nikoraxx         ###   ########.fr       */
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
	size_t			occurrence_position;
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
		occurrence_position = 0;
		while (occurrence_position != std::string::npos)
		{
			occurrence_position += s2.length() * bool(occurrence_position);
			occurrence_position = buffer.find(s1, occurrence_position);
			if (occurrence_position == std::string::npos)
				break ;
			buffer = buffer.erase(occurrence_position, s1.length());
			buffer = buffer.insert(occurrence_position, s2);
		}
		created_file << buffer << '\n' << std::flush;
	};
}
