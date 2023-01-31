/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikoraxx <nikoraxx@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 20:38:02 by nikoraxx          #+#    #+#             */
/*   Updated: 2023/01/31 20:55:00 by nikoraxx         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string	brain = "HI THIS IS BRAIN";
	std::string	*string_pointer = &brain;
	std::string	&string_reference = brain;

	std::cout << &brain << '\n';
	std::cout << string_pointer << '\n';
	std::cout << &string_reference << '\n';

	std::cout << brain << '\n';
	std::cout << *string_pointer << '\n';
	std::cout << string_reference << '\n';
}