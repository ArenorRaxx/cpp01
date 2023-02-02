/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikoraxx <nikoraxx@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 14:30:46 by mcorso            #+#    #+#             */
/*   Updated: 2023/02/02 10:38:00 by nikoraxx         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../heads/Harl.hpp"

typedef void (Harl::*Comment)(void);

Harl::Harl()
{
}

Harl::~Harl()
{
}

void Harl::complain(std::string level)
{
	int			index = 0;
	const int	max_level = 4;
	std::string	level_of_complaint[max_level] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	Comment	comment_function[max_level] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	
	while (index < max_level && level_of_complaint[index] != level)
		index++;
	if (index == max_level)
	{
		std::cout << "Please, input something sensfull.";
		return ;
	}
	(this->*comment_function[index])();
}

void Harl::debug(void)
{
	std::cout << "[ DEBUG ]\n";
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do !\n\n";
}

void Harl::info(void)
{
	std::cout << "[ INFO ]\n";
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !\n\n";
}

void Harl::warning(void)
{
	std::cout << "[ WARNING ]\n";
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n\n";
}

void Harl::error(void)
{
	std::cout << "[ ERROR ]\n";
	std::cout << "This is unacceptable ! I want to speak to the manager now.\n\n";
}
