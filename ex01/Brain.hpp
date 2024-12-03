/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 17:11:41 by yel-moun          #+#    #+#             */
/*   Updated: 2024/12/02 20:11:30 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
#define BRAIN_H

#include <iostream>

class Brain {
	private:
		std::string _ideas[100];
	public :
		Brain();
		~Brain();
		Brain(const Brain &obj);
		Brain &operator=(const Brain &obj);
		const	std::string* getIdeas() const;
		void	setIdeas(int index, std::string value);
		
};

#endif