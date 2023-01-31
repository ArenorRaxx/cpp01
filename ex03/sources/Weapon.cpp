/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikoraxx <nikoraxx@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 21:02:56 by nikoraxx          #+#    #+#             */
/*   Updated: 2023/01/31 21:11:11 by nikoraxx         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../heads/Weapon.h"


Weapon::Weapon(std::string type)
{
	this->type = type;
}

Weapon::~Weapon()
{
}

std::string &Weapon::getType(void)
{
	std::string	&new_reference = this->type;
	
	return (new_reference);
}

void	Weapon::setType(std::string type)
{
	this->type = type;
}
