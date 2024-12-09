/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   LinkedList.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 13:14:01 by yel-moun          #+#    #+#             */
/*   Updated: 2024/12/09 20:54:11 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "LinkedList.hpp"

LinkedList::LinkedList(void)
{
	this->_head  = NULL;
}

LinkedList::~LinkedList(void)
{
	while (this->_head)
	{
		std::cout << "****** deleting *******" << std::endl;
		Node *tmp = _head;
		_head  = _head->getNext();
		delete tmp;
	}
	
}

LinkedList::LinkedList(const LinkedList& obj)
{
	Node *tmp = obj.getNode();
	while (tmp)
	{
		this->add(tmp->getData());
		tmp = tmp->getNext();
	}
	
}

LinkedList& LinkedList::operator=(const LinkedList& obj)
{
	if (this != &obj)
	{
		while (this->_head)
		{
			Node *tmp = this->_head;
			this->_head = this->_head->getNext();
			delete tmp;
		}
		this->_head = NULL;
		Node *tmp = obj._head;
		while (tmp)
		{
			this->add(tmp->getData());	
			tmp = tmp->getNext();
		}
	}
	return (*this);
}

void	LinkedList::add(AMateria *obj) {
	Node * newCreated = new Node(obj);

	if (!this->_head)
		_head = newCreated;
	else
	{
		Node * tmp = this->_head;
		while (tmp->getNext())
			tmp = tmp->getNext();
		tmp->setNext(newCreated);
	}
}


Node *LinkedList::getNode() const
{
	return (this->_head);
}

