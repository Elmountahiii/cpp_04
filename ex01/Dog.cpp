/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 13:23:32 by yel-moun          #+#    #+#             */
/*   Updated: 2024/12/09 21:51:42 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog Constructor Called" << std::endl;
	this->brain = new Brain();
	for (size_t i = 0; i < 100; i++)
	{
		this->brain->setIdeas(i,"Bark");
	}
	this->_type = "Dog";
}

Dog::~Dog()
{
	std::cout << "Dog Destructor Called" << std::endl;
	delete this->brain;
}

Dog::Dog(const Dog &obj)
{
	std::cout << "Dog Copy Constructor Called" << std::endl;
	this->brain = new Brain();
	this->_type = obj._type;
	for (size_t i = 0; i < 100; i++)
	{
		this->brain->setIdeas(i, obj.brain->getIdeas()[i]);
	}
}

Dog &Dog::operator=(const Dog &obj)
{
	std::cout << "Dog Assignment operator Called" << std::endl;
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

void Dog::makeSound() const{
	std::cout << "Dog says Bark Bark Bark Bark Bark Bark" << std::endl;
}

std::string Dog::getType() const {
	return (this->_type);
}

Brain *Dog::getBrain() const {
	return this->brain;
}