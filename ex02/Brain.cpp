/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 17:29:07 by yel-moun          #+#    #+#             */
/*   Updated: 2024/12/09 21:56:25 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	for (size_t i = 0; i < 100; i++)
	{
		this->_ideas[i] = "";
	}
}

Brain::~Brain()
{
	
}

Brain::Brain(const Brain &obj)
{
	*this = obj;
}


Brain &Brain::operator=(const Brain &obj)
{
	if (this == &obj)
		return (*this);
	for (size_t i = 0; i < 100; i++)
	{
		this->_ideas[i] = obj._ideas[i];
	}
	return (*this);
}

const std::string* Brain::getIdeas() const {
	return this->_ideas;
}

void	Brain::setIdeas(int index, std::string value)
{
	if (index >= 100)
		return;
	this->_ideas[index] = value;
}