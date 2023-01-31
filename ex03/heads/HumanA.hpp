/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikoraxx <nikoraxx@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 21:12:29 by nikoraxx          #+#    #+#             */
/*   Updated: 2023/01/31 21:38:20 by nikoraxx         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.h"
#include <string>

class HumanA
{
	private:
	  	std::string	name;
		Weapon		&his_weapon;
	public:
		HumanA(std::string name, Weapon &to_give_him);
		~HumanA();
		void attack(void);
};

#endif