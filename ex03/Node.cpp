/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Node.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 20:15:01 by yel-moun          #+#    #+#             */
/*   Updated: 2024/12/09 20:09:32 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Node.hpp"

Node::Node(void)
{
	this->_next = NULL;
	this->_data = NULL;
}


Node::Node(AMateria *data){
	this->_data = data;
	this->_next = NULL;
}

Node::~Node(void)
{
	delete this->_data;
	delete this->_next;
}

Node::Node(const Node& obj)
{
	this->_data = obj._data->clone();
	this->_next = obj._next ? new Node(*obj._next) : NULL;
}

Node& Node::operator=(const Node& obj)
{
	if (this != &obj)
	{
		delete this->_data;
		delete this->_next;
		this->_data = obj._data->clone();
		this->_next = obj._next ? new Node(*obj._next) : NULL;
	}
	return (*this);
}

AMateria *Node::getData() const {
	return this->_data;
}

Node *Node::getNext() const {
	return this->_next;
}

void Node::setNext(Node *obj)
{
	this->_next = obj;
}

