/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcorso <mcorso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 17:59:54 by mcorso            #+#    #+#             */
/*   Updated: 2023/02/01 18:07:42 by mcorso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "heads/Harl.hpp"

int	main(void)
{
	Harl new_harl;
	std::string	level_of_complaint[5] = {"DEBUG", "INFO", "WARNING", "ERROR", "FOOD LIST"};
	for (int i = 0; i < 5; i++)
		new_harl.complain(level_of_complaint[i]);
}