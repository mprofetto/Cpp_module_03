/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprofett <mprofett@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 13:36:36 by mprofett          #+#    #+#             */
/*   Updated: 2023/08/07 15:19:56 by mprofett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>

class ClapTrap
{
	private:
		std::string	_name;
		int			_hit_points;
		int			_hit_points_max;
		int			_energy_points;
		int			_attack_damages;

	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &copy);
		ClapTrap &operator=(const ClapTrap &copy);
		~ClapTrap();

		std::string	get_name(void) const;
		int			get_hits_points(void) const;
		int			get_hits_points_max(void) const;
		int			get_energy_points(void) const;
		int			get_attack_damages(void) const;
		void		set_name(const std::string name);
		void		set_hits_points(const int hp);
		void		set_hits_points_max(const int hp);
		void		set_energy_points(const int ep);
		void		set_attack_damages(const int att);

		void		attack(const std::string & target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
};

#endif
