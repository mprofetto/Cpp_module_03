/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprofett <mprofett@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 15:30:07 by mprofett          #+#    #+#             */
/*   Updated: 2023/08/07 15:33:10 by mprofett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap()
{
	this->set_hits_points(100);
	this->set_hits_points_max(100);
	this->set_energy_points(100);
	this->set_attack_damages(30);
	std::cout << "A new random FragTrap has been created by default" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	this->set_hits_points(100);
	this->set_hits_points_max(100);
	this->set_energy_points(100);
	this->set_attack_damages(30);
	this->set_name(name);
	std::cout << "A new FragTrap has been created with following parameters: " << std::endl;
	std::cout << "   Name: " << this->get_name() << std::endl;
	std::cout << "   Hit points: " << this->get_hits_points() << std::endl;
	std::cout << "   Energy points: " << this->get_energy_points() << std::endl;
	std::cout << "   Attacks damages: " << this->get_attack_damages() << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy)
{
	this->set_hits_points(copy.get_hits_points());
	this->set_hits_points_max(copy.get_hits_points_max());
	this->set_energy_points(copy.get_energy_points());
	this->set_attack_damages(copy.get_attack_damages());
	this->set_name(copy.get_name());
	std::cout << "A new FragTrap has been created by copy with following parameters: " << std::endl;
	std::cout << "   Name: " << this->get_name() << std::endl;
	std::cout << "   Hit points: " << this->get_hits_points() << std::endl;
	std::cout << "   Hit points max: " << this->get_hits_points_max() << std::endl;
	std::cout << "   Energy points: " << this->get_energy_points() << std::endl;
	std::cout << "   Attacks damages: " << this->get_attack_damages() << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->get_name() << " has been destroyed" << std::endl;
}

FragTrap	&FragTrap::operator=(const FragTrap &copy)
{
	std::cout << "FragTrap " << this->get_name() << " will now become " << copy.get_name() << " by assignation. His new parameters are: " << std::endl;;
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

void		FragTrap::highFivesGuys(void) const
{
	std::cout << "Hey guys ! Give me High Fives !" << std::endl;
}
