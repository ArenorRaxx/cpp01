/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikoraxx <nikoraxx@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 20:29:57 by nikoraxx          #+#    #+#             */
/*   Updated: 2023/01/31 20:37:59 by nikoraxx         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../heads/Zombie.h"

Zombie*	zombieHorde(int n, std::string name)
{
	Zombie	*horde;
	
	horde = new Zombie[n];
	for (int i = 0; i < n; i++)
		horde[i].giveName(name);
	return (horde);
}