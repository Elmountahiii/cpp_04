/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 12:27:56 by yel-moun          #+#    #+#             */
/*   Updated: 2024/12/02 15:31:02 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
#define CAT_H

#include "Animal.hpp"

class Cat : public Animal{
	public:
		Cat();
		~Cat();
		Cat(const Cat &obj);
		Cat &operator= (const Cat &obj);
		void makeSound() const;
		std::string getType() const;
};

#endif
