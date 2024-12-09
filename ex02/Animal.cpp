/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 12:02:49 by yel-moun          #+#    #+#             */
/*   Updated: 2024/12/09 21:56:18 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("Unkown")
{
	std::cout << "Animal Constructor Called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal Destructor Called" << std::endl;
}

Animal::Animal(const Animal &obj)
{
	std::cout << "Animal Copy Constructor Called" << std::endl;
	this->_type = obj._type;
}

Animal &Animal::operator=(const Animal &obj)
{
	std::cout << "Animal Assignment operator Called" << std::endl;
	if (this == &obj)
		return (*this);
	this->_type = obj._type;
	return (*this);
}

std::string Animal::getType() const {
	return this->_type;
}
