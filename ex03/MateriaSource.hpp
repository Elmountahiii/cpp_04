/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 18:16:29 by yel-moun          #+#    #+#             */
/*   Updated: 2024/12/09 17:32:59 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
# include <iostream>
#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class IMateriaSource;

class MateriaSource : public IMateriaSource
{
	private:
		AMateria *_data[4];

	public:
		MateriaSource(void); // Default constructor
		MateriaSource(const MateriaSource& obj); // Copy constructor
		MateriaSource&	operator=(const MateriaSource& obj); // Copy assignment operator
		~MateriaSource(); // Destructor

		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);

};

#endif
