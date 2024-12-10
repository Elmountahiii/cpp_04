/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 12:48:04 by yel-moun          #+#    #+#             */
/*   Updated: 2024/12/10 12:13:11 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"


void	subject_test(void)
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;//should not create a leak
	delete i;
}

void	my_test(void)
{	
	
	std::cout << "------------ Deep copy test 1 -------------" << std::endl;
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
	std::cout << "------------ Deep copy test 2 -------------" << std::endl;
	Cat *a = new Cat();
	Cat *b = new Cat(*a);
	std::cout << "Address of a brain : " << a->getBrain() << std::endl;
	std::cout << "Address of b brain : " << b->getBrain() << std::endl;
	delete a;
	delete b;
}

int main(void)
{
	subject_test();
	my_test();
	system("leaks poly");
	return (0);
}
