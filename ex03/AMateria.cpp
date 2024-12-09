/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 18:04:35 by yel-moun          #+#    #+#             */
/*   Updated: 2024/12/09 19:00:30 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void): _type("")
{	
}

AMateria::~AMateria(void)
{
}

AMateria::AMateria(const AMateria& obj)
{
	*this = obj;
}

AMateria& AMateria::operator=(const AMateria& obj)
{
	if (this != &obj)
		this->_type = obj._type;
	return (*this);
}

AMateria::AMateria(std::string const & type) :_type(type){
	
	std::cout << "AMateria Named constructor called" << std::endl;
}

std::string const &AMateria::getType() const{
	return this->_type;
}

void AMateria::use(ICharacter& target)
{
	std::cout << "	" << target.getName() << std::endl;
}

