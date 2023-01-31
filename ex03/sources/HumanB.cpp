/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikoraxx <nikoraxx@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 21:30:19 by nikoraxx          #+#    #+#             */
/*   Updated: 2023/01/31 21:44:08 by nikoraxx         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../heads/HumanB.h"

HumanB::HumanB(std::string name):
	name(name)
{
}

HumanB::~HumanB()
{
}

void HumanB::attack(void)
{
	std::cout << this->name << " attacks with their " << this->his_weapon->getType() << '\n';
}

void HumanB::setWeapon(Weapon to_give_him)
{
	*this->his_weapon = to_give_him;
}
