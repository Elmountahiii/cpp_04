/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 13:08:00 by yel-moun          #+#    #+#             */
/*   Updated: 2024/12/10 12:28:49 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>

#include "Character.hpp"
#include "AMateria.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"


void	subjectTest(){
	std::cout << "Subject test" << std::endl;
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;	
}


void	myTest(){
	std::cout << "My test" << std::endl;
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("ElMountahi");
	ICharacter *enemy = new Character("Enemy");
	for (size_t i = 0; i < 4; i++)
	{
		if (i % 2 == 0)
		{
			AMateria* tmp = src->createMateria("ice");
			me->equip(tmp);
		}
		else 
		{
			AMateria* tmp = src->createMateria("cure");
			me->equip(tmp);
		}
	}
	AMateria* tmp = src->createMateria("ice");
	me->equip(tmp);
	me->use(0, *enemy);
	me->use(1, *enemy);
	me->unquip(0);
	me->unquip(1);
	me->use(1, *enemy);
	delete src;
	delete me;
	delete enemy;
	delete tmp;
}

int main(void)
{
	subjectTest();
	myTest();
	system("leaks AMateria");
	return 0;
}
