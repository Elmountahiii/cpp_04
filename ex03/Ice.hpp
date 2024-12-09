/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 17:52:28 by yel-moun          #+#    #+#             */
/*   Updated: 2024/12/05 17:11:02 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
#include "AMateria.hpp"

class Ice : public AMateria
{
	private:

	public:
		Ice(void); // Default constructor
		Ice(const Ice& obj); // Copy constructor
		Ice&	operator=(const Ice& obj); // Copy assignment operator
		~Ice(); // Destructor
		AMateria* clone() const;
		void use(ICharacter& target);

};

#endif
