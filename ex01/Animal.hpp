/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 11:37:59 by yel-moun          #+#    #+#             */
/*   Updated: 2024/12/02 15:30:47 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

class Animal {
	
	protected:
	 	std::string _type;
	
	public :
		Animal();
		virtual ~Animal();
		Animal(const Animal &obj);
		Animal &operator=(const Animal &obj);
		std::string	getType() const;
		virtual void makeSound() const;
};

#endif