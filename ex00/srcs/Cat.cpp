/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jforner <jforner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 12:50:56 by jforner           #+#    #+#             */
/*   Updated: 2022/07/13 09:32:05 by jforner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Cat.hpp>

//constructor & destructor

Cat::Cat(void): Animal()
{
    this->type = "Cat";
    std::cout << "Cat created !" << std::endl;
}

Cat::~Cat(void)
{

  std::cout << "Cat destroyed!" << std::endl;
}

//operation overloader

//getter & setter

//other

void	Cat::makeSound(void)const
{
	std::cout << "Meow !" << std::endl;
}
//bonus