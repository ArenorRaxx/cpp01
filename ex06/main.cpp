/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcorso <mcorso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 17:59:54 by mcorso            #+#    #+#             */
/*   Updated: 2023/02/01 18:15:47 by mcorso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "heads/Harl.hpp"

int	main(int argc, char **argv)
{
	int			index = 0;
	Harl		new_harl;
	std::string	level_of_complaint[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	
	if (argc != 2)
		return (1);
	while (index < 4)
	{
		if (level_of_complaint[index] == argv[1]) break ;
		index++;
	}
	if (index == 4)
		new_harl.complain("NOTHING");
	while (index < 4)
		new_harl.complain(level_of_complaint[index++]);
	return (0);
}