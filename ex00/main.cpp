/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprofett <mprofett@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 13:36:08 by mprofett          #+#    #+#             */
/*   Updated: 2023/08/07 14:41:36 by mprofett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	a("Roger");
	ClapTrap	b;
	ClapTrap	c("Albert");

	a.attack("Albert");
	c.takeDamage(a.get_attack_damages());
	a.attack("Albert");
	c.takeDamage(a.get_attack_damages());
	a.attack("Albert");
	c.takeDamage(a.get_attack_damages());
	a.attack("Albert");
	c.takeDamage(a.get_attack_damages());
	a.attack("Albert");
	c.takeDamage(a.get_attack_damages());
	c.beRepaired(5);
	a.attack("Albert");
	c.takeDamage(a.get_attack_damages());
	a.attack("Albert");
	c.takeDamage(a.get_attack_damages());
	a.attack("Albert");
	c.takeDamage(a.get_attack_damages());
	a.attack("Albert");
	c.takeDamage(a.get_attack_damages());
	a.attack("Albert");
	c.takeDamage(a.get_attack_damages());
	c.beRepaired(5);
	a.attack("Albert");
	c.beRepaired(5);
	c.attack("Albert");
	a.takeDamage(c.get_attack_damages());
	a.beRepaired(1);

	b = a;
	return (0);
}
