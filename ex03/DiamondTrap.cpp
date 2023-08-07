/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprofett <mprofett@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 16:09:19 by mprofett          #+#    #+#             */
/*   Updated: 2023/08/07 16:49:21 by mprofett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap()
{
	this->set_hits_points(100);
	this->set_hits_points_max(100);
	this->set_energy_points(50);
	this->set_attack_damages(30);
	this->set_name("random_clap_name");
	std::cout << "A new random DiamondTrap has been created by default" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name)
{
	this->set_hits_points(100);
	this->set_hits_points_max(100);
	this->set_energy_points(50);
	this->set_attack_damages(30);
	this->_name = name;
	this->set_name(name.append("_clap_name"));
	std::cout << "A new DiamondTrap has been created with following parameters: " << std::endl;
	std::cout << "   Name: " << this->_name << std::endl;
	std::cout << "   Claptrap Name: " << this->get_name() << std::endl;
	std::cout << "   Hit points: " << this->get_hits_points() << std::endl;
	std::cout << "   Energy points: " << this->get_energy_points() << std::endl;
	std::cout << "   Attacks damages: " << this->get_attack_damages() << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy)
{
	this->set_hits_points(copy.get_hits_points());
	this->set_hits_points_max(copy.get_hits_points_max());
	this->set_energy_points(copy.get_energy_points());
	this->set_attack_damages(copy.get_attack_damages());
	this->_name = copy._name;
	this->set_name(copy.get_name());
	std::cout << "A new DiamondTrap has been created by copy with following parameters: " << std::endl;
	std::cout << "   Name: " << this->_name << std::endl;
	std::cout << "   Claptrap Name: " << this->get_name() << std::endl;
	std::cout << "   Hit points: " << this->get_hits_points() << std::endl;
	std::cout << "   Hit points max: " << this->get_hits_points_max() << std::endl;
	std::cout << "   Energy points: " << this->get_energy_points() << std::endl;
	std::cout << "   Attacks damages: " << this->get_attack_damages() << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << this->get_name() << " has been destroyed" << std::endl;
}

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &copy)
{
	std::cout << "DiamondTrap " << this->_name << " will now become " << copy.get_name() << " by assignation. His new parameters are: " << std::endl;;
	this->set_hits_points(copy.get_hits_points());
	this->set_hits_points_max(copy.get_hits_points_max());
	this->set_energy_points(copy.get_energy_points());
	this->set_attack_damages(copy.get_attack_damages());
	this->_name = copy._name;
	this->set_name(copy.get_name());
	std::cout << "   Name: " << this->_name << std::endl;
	std::cout << "   Claptrap Name: " << this->get_name() << std::endl;
	std::cout << "   Hit points: " << this->get_hits_points() << std::endl;
	std::cout << "   Hit points max: " << this->get_hits_points_max() << std::endl;
	std::cout << "   Energy points: " << this->get_energy_points() << std::endl;
	std::cout << "   Attacks damages: " << this->get_attack_damages() << std::endl;
	return (*this);
}

void	DiamondTrap::whoAmI(void) const
{
	std::cout << "My Claptrap Name is " << this->get_name() << std::endl;
	std::cout << "My DiamondTrap Name is " << this->_name << std::endl;
}
