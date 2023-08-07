/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprofett <mprofett@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 13:36:08 by mprofett          #+#    #+#             */
/*   Updated: 2023/08/07 15:33:43 by mprofett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap	a("Roger");
	ScavTrap	b;
	ScavTrap	c("Albert");

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
	a.guardGate();

	b = a;
	return (0);
}
