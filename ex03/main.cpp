/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprofett <mprofett@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 13:36:08 by mprofett          #+#    #+#             */
/*   Updated: 2023/08/07 16:56:08 by mprofett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap	a("Roger");
	DiamondTrap	b;
	DiamondTrap	c("Albert");

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
	a.highFivesGuys();
	a.guardGate();
	a.whoAmI();

	b = a;
	return (0);
}
