/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikoraxx <nikoraxx@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 21:15:47 by nikoraxx          #+#    #+#             */
/*   Updated: 2023/01/31 21:38:15 by nikoraxx         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../heads/HumanA.h"

HumanA::HumanA(std::string name, Weapon &to_give_him):
	name(name),
	his_weapon(to_give_him)
{
}

HumanA::~HumanA()
{
}

void HumanA::attack(void)
{
	std::cout << this->name << " attacks with their " << this->his_weapon.getType() << '\n';
}
