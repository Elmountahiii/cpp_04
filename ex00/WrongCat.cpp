/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 16:51:23 by yel-moun          #+#    #+#             */
/*   Updated: 2024/12/02 16:52:19 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "WrongCat Constructor Called" << std::endl;
	this->_type = "WrongCat";
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Destructor Called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &obj)
{
	std::cout << "WrongCat Copy Constructor Called" << std::endl;
	*this = obj;
}

WrongCat &WrongCat::operator=(const WrongCat &obj)
{
	std::cout << "WrongCat Assignment operator Called" << std::endl;
	if(this == &obj)
		return (*this);
	this->_type = obj._type;
	return (*this);
}

void WrongCat::makeSound() const{
	std::cout << "WrongCat says Meow Meow Meow Meow Meow" << std::endl;
}

std::string WrongCat::getType() const {
	return (this->_type);
}



