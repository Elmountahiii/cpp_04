/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 13:23:32 by yel-moun          #+#    #+#             */
/*   Updated: 2024/12/02 15:31:17 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog Constructor Called" << std::endl;
	this->_type = "Dog";
}

Dog::~Dog()
{
	std::cout << "Dog Destructor Called" << std::endl;
}

Dog::Dog(const Dog &obj)
{
	std::cout << "Dog Copy Constructor Called" << std::endl;
	*this = obj;
}

Dog &Dog::operator=(const Dog &obj)
{
	std::cout << "Dog Assignment operator Called" << std::endl;
	if(this == &obj)
		return (*this);
	this->_type = obj._type;
	return (*this);
}

void Dog::makeSound() const{
	std::cout << "Dog says Bark Bark Bark Bark Bark Bark" << std::endl;
}

std::string Dog::getType() const {
	return (this->_type);
}


