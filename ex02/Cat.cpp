/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 12:27:41 by yel-moun          #+#    #+#             */
/*   Updated: 2024/12/09 21:55:05 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat Constructor Called" << std::endl;
	this->brain = new Brain();
	for (size_t i = 0; i < 100; i++)
	{
		brain->setIdeas(i, "Meow");
	}
	this->_type = "Cat";
}

Cat::~Cat()
{
	std::cout << "Cat Destructor Called" << std::endl;
	delete this->brain;
}

Cat::Cat(const Cat &obj)
{
	std::cout << "Cat Copy Constructor Called" << std::endl;
	this->_type = obj._type;
	this->brain = new Brain();
	for (size_t i = 0; i < 100; i++)
	{
		this->brain->setIdeas(i, obj.brain->getIdeas()[i]);
	}
}

Cat &Cat::operator=(const Cat &obj)
{
	std::cout << "Cat Assignment operator Called" << std::endl;
	if(this == &obj)
		return (*this);
	this->_type = obj._type;
	delete this->brain;
	this->brain = new Brain();
	for (size_t i = 0; i < 100; i++)
	{
		this->brain->setIdeas(i, this->brain->getIdeas()[i]);
	}
	return (*this);
}

void Cat::makeSound() const{
	std::cout << "Cat says Meow Meow Meow Meow Meow" << std::endl;
}

std::string Cat::getType() const {
	return (this->_type);
}


Brain *Cat::getBrain() const {
	return this->brain;
}
