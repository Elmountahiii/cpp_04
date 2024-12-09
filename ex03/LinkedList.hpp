/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   LinkedList.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 13:13:59 by yel-moun          #+#    #+#             */
/*   Updated: 2024/12/09 20:20:55 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LINKEDLIST_HPP
# define LINKEDLIST_HPP
# include <iostream>
#include "Node.hpp"
#include "AMateria.hpp"

class LinkedList
{
	private:
		Node * _head;

	public:
		LinkedList(void); // Default constructor
		LinkedList(const LinkedList& obj); // Copy constructor
		LinkedList&	operator=(const LinkedList& obj); // Copy assignment operator
		~LinkedList(); // Destructor
		
		void add(AMateria *obj);
		Node *getNode() const;

};

#endif
