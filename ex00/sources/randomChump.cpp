/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikoraxx <nikoraxx@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 06:57:41 by mcorso            #+#    #+#             */
/*   Updated: 2023/01/31 20:17:07 by nikoraxx         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../heads/Zombie.hpp"
#include <string>

void	randomChump(std::string name)
{
	Zombie new_zombie(name);

	new_zombie.announce();
}