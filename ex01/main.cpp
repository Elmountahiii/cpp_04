/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 12:48:04 by yel-moun          #+#    #+#             */
/*   Updated: 2024/12/03 12:40:56 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"


int main(void)
{
	Animal *animls[20];
	
	for (size_t i = 0; i < 20; i++)
	{
		if (i % 2 == 0)
		{
			animls[i] = new Cat();
		}
		else
		{
			animls[i] = new Dog();
		}
	}
	for (size_t i = 0; i < 20; i++)
	{
		delete animls[i];
	}
	system("leaks poly");
	std::cout << "------------ Deep copy test -------------" << std::endl;
	Cat *a = new Cat();
	Cat *b = new Cat(*a);
	std::cout << "Address of a brain : " << a->getBrain() << std::endl;
	std::cout << "Address of b brain : " << b->getBrain() << std::endl;
	return (0);
}
