/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprofett <mprofett@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 13:36:46 by mprofett          #+#    #+#             */
/*   Updated: 2023/08/07 15:11:50 by mprofett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap() :
	_name("random"),
	_hit_points(10),
	_hit_points_max(10),
	_energy_points(10),
	_attack_damages(0)
{
	std::cout << "A new random ClapTrap has been created by default" << std::endl;
	return;
}

ClapTrap::ClapTrap(std::string name) :
	_name(name),
	_hit_points(10),
	_hit_points_max(10),
	_energy_points(10),
	_attack_damages(0)
{
	std::cout << "A new random ClapTrap has been created with following parameters: " << std::endl;
	std::cout << "   Name: " << this->_name << std::endl;
	std::cout << "   Hit points: " << this->_hit_points << std::endl;
	std::cout << "   Energy points: " << this->_energy_points << std::endl;
	std::cout << "   Attacks damages: " << this->_attack_damages << std::endl;
	return;
}

ClapTrap::ClapTrap(const ClapTrap &copy) :
	_name(copy.get_name()),
	_hit_points(copy.get_hits_points()),
	_hit_points_max(copy.get_hits_points_max()),
	_energy_points(copy.get_energy_points()),
	_attack_damages(copy.get_attack_damages())
{
	std::cout << "A new ClapTrap " << _name << " has been created by copy with following parameters: " << std::endl;
	std::cout << "   Name: " << this->_name << std::endl;
	std::cout << "   Hit points: " << this->_hit_points << std::endl;
	std::cout << "   Energy points: " << this->_energy_points << std::endl;
	std::cout << "   Attacks damages: " << this->_attack_damages << std::endl;
	return;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &copy)
{
	std::cout << "ClapTrap " << _name << " will now become " << copy.get_name() << " by assignation. His new parameters are: " << std::endl;;
	this->_name = copy.get_name();
	this->_hit_points = copy.get_hits_points();
	this->_hit_points_max = copy.get_hits_points_max();
	this->_energy_points = copy.get_energy_points();
	this->_attack_damages = copy.get_attack_damages();
	std::cout << "   Name: " << this->_name << std::endl;
	std::cout << "   Hit points: " << this->_hit_points << std::endl;
	std::cout << "   Energy points: " << this->_energy_points << std::endl;
	std::cout << "   Attacks damages: " << this->_attack_damages << std::endl;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << _name << " has been destroyed" << std::endl;
	return;
}

std::string	ClapTrap::get_name(void) const
{
	return (this->_name);
}

int			ClapTrap::get_hits_points(void) const
{
	return (this->_hit_points);
}

int			ClapTrap::get_hits_points_max(void) const
{
	return (this->_hit_points_max);
}

int			ClapTrap::get_energy_points(void) const
{
	return (this->_energy_points);
}

int			ClapTrap::get_attack_damages(void) const
{
	return (this->_attack_damages);
}

void		ClapTrap::attack(const std::string & target)
{
	if (this->_energy_points > 0 && this->_hit_points > 0)
	{
		--this->_energy_points;
		std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << this->_attack_damages << " points of damage !" << std::endl;
		std::cout << "ClapTrap " << _name << " energy is now " << this->_energy_points << "." << std::endl;
	}
	else if (this->_hit_points > 0 && !(this->_energy_points > 0))
		std::cout << "ClapTrap " << _name << " lack of energy in order to perform an attack." << std::endl;
	else
		std::cout << "ClapTrap " << _name << " hit points are too low. He cannot perform any action." << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << _name << " took " << amount << " points of damage !" << std::endl;
	this->_hit_points -= amount;
	std::cout << "ClapTrap " << _name << " hit points are equal to " << this->_hit_points << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hit_points < 0)
		std::cout << "ClapTrap " << _name << " hit points are too low. He cannot perform any action." << std::endl;
	else if (this->_hit_points >= this->_hit_points_max)
		std::cout << "ClapTrap " << _name << " hit points are already at their maximum. He doesnt need to repair himself." << std::endl;
	else if (this->_energy_points <= 0)
		std::cout << "ClapTrap " << _name << " lack of energy in order to repair himself." << std::endl;
	else
	{
		--this->_energy_points;
		if (this->_hit_points + (int)amount > this->_hit_points_max)
			this->_hit_points = this->_hit_points_max;
		else
			this->_hit_points += amount;
		std::cout << "ClapTrap " << _name << " repair himself. His hit points are now " << this->_hit_points << "." << std::endl;
		std::cout << "ClapTrap " << _name << " energy is now " << this->_energy_points << "." << std::endl;
	}
}
