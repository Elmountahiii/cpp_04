/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Node.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 20:12:33 by yel-moun          #+#    #+#             */
/*   Updated: 2024/12/05 13:40:36 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NODE_HPP
# define NODE_HPP
# include <iostream>
#include "AMateria.hpp"

class Node
{
	private:
		AMateria *_data;
		Node *_next;

	public:
		Node(void); // Default constructor
		Node(AMateria *data);
		Node(const Node& obj); // Copy constructor
		Node&	operator=(const Node& obj); // Copy assignment operator
		~Node(); // Destructor
		
		// getters 
		AMateria *getData() const;
		Node *getNext() const;
		void	setNext(Node * next);

};

#endif
