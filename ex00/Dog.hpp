/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 13:22:39 by yel-moun          #+#    #+#             */
/*   Updated: 2024/12/02 15:31:27 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
#define DOG_H

#include "Animal.hpp"

class Dog : public Animal{
	public:
		Dog();
		~Dog();
		Dog(const Dog &obj);
		Dog &operator= (const Dog &obj);
		void makeSound() const;
		std::string getType() const;
};

#endif
