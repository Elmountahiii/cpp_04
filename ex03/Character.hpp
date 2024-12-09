/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 16:10:47 by yel-moun          #+#    #+#             */
/*   Updated: 2024/12/09 17:29:14 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "LinkedList.hpp"

class Character :public ICharacter
{
	private:
		std::string _name;
		AMateria *inventory[4];
		LinkedList *list;

	public:
		Character(void); // Default constructor
		Character(const Character& obj); // Copy constructor
		Character(const std::string name);
		Character&	operator=(const Character& obj); // Copy assignment operator
		~Character(); // Destructor
		std::string const &getName() const;
		void equip(AMateria *obj);
		void unquip(int index);
		void use(int index, ICharacter &target);
		

};

#endif
