/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprofett <mprofett@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 14:59:23 by mprofett          #+#    #+#             */
/*   Updated: 2023/08/07 15:23:16 by mprofett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap() : _mode(0)
{
	this->set_hits_points(100);
	this->set_hits_points_max(100);
	this->set_energy_points(50);
	this->set_attack_damages(20);
	std::cout << "A new random Scavtrap has been created by default" << std::endl;
}

ScavTrap::ScavTrap(std::string name): _mode(0)
{
	this->set_hits_points(100);
	this->set_hits_points_max(100);
	this->set_energy_points(50);
	this->set_attack_damages(20);
	this->set_name(name);
	std::cout << "A new ScavTrap has been created with following parameters: " << std::endl;
	std::cout << "   Name: " << this->get_name() << std::endl;
	std::cout << "   Hit points: " << this->get_hits_points() << std::endl;
	std::cout << "   Energy points: " << this->get_energy_points() << std::endl;
	std::cout << "   Attacks damages: " << this->get_attack_damages() << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy)
{
	this->set_hits_points(copy.get_hits_points());
	this->set_hits_points_max(copy.get_hits_points_max());
	this->set_energy_points(copy.get_energy_points());
	this->set_attack_damages(copy.get_attack_damages());
	this->set_name(copy.get_name());
	std::cout << "A new ScavTrap has been created by copy with following parameters: " << std::endl;
	std::cout << "   Name: " << this->get_name() << std::endl;
	std::cout << "   Hit points: " << this->get_hits_points() << std::endl;
	std::cout << "   Hit points max: " << this->get_hits_points_max() << std::endl;
	std::cout << "   Energy points: " << this->get_energy_points() << std::endl;
	std::cout << "   Attacks damages: " << this->get_attack_damages() << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->get_name() << " has been destroyed" << std::endl;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &copy)
{
	std::cout << "Scavtrap " << this->get_name() << " will now become " << copy.get_name() << " by assignation. His new parameters are: " << std::endl;;
	this->set_hits_points(copy.get_hits_points());
	this->set_hits_points_max(copy.get_hits_points_max());
	this->set_energy_points(copy.get_energy_points());
	this->set_attack_damages(copy.get_attack_damages());
	this->set_name(copy.get_name());
	std::cout << "   Name: " << this->get_name() << std::endl;
	std::cout << "   Hit points: " << this->get_hits_points() << std::endl;
	std::cout << "   Hit points max: " << this->get_hits_points_max() << std::endl;
	std::cout << "   Energy points: " << this->get_energy_points() << std::endl;
	std::cout << "   Attacks damages: " << this->get_attack_damages() << std::endl;
	return (*this);
}

void		ScavTrap::attack(const std::string &target)
{
	if (this->get_energy_points() > 0 && this->get_hits_points() > 0)
	{
		this->set_energy_points(this->get_energy_points() - 1);
		std::cout << "ScavTrap " << this->get_name() << " attacks " << target << ", causing " << this->get_attack_damages() << " points of damage !" << std::endl;
		std::cout << "ScavTrap " << this->get_name() << " energy is now " << this->get_energy_points() << "." << std::endl;
	}
	else if (this->get_hits_points() > 0 && !(this->get_energy_points() > 0))
		std::cout << "ScavTrap " << this->get_name() << " lack of energy in order to perform an attack." << std::endl;
	else
		std::cout << "ScavTrap " << this->get_name() << " hit points are too low. He cannot perform any action." << std::endl;
}

void		ScavTrap::guardGate(void)
{
	this->_mode = 1;
	std::cout << "ScavTrap is now on Gate Keeper mode" << std::endl;
}
