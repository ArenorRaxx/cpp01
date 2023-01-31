/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikoraxx <nikoraxx@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 20:10:47 by nikoraxx          #+#    #+#             */
/*   Updated: 2023/01/31 20:23:31 by nikoraxx         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "heads/Zombie.h"

int	main(void)
{
	Zombie *new_zombie = new Zombie("Tony");
	
	randomChump("Marcus");
	new_zombie->announce();
	delete new_zombie;
}