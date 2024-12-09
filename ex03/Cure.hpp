/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 17:51:04 by yel-moun          #+#    #+#             */
/*   Updated: 2024/12/03 19:10:12 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"
#include <iostream>


class Cure : public AMateria
{
	public:
		Cure(void); // Default constructor
		Cure(const Cure& obj); // Copy constructor
		Cure&	operator=(const Cure& obj); // Copy assignment operator
		~Cure(); // Destructor
		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);

};

#endif
