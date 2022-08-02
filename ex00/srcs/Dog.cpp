/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jforner <jforner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 13:01:16 by jforner           #+#    #+#             */
/*   Updated: 2022/07/13 09:31:36 by jforner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Dog.hpp>

//constructor & destructor

Dog::Dog(void): Animal()
{
    this->type = "Dog";
	std::cout << "Dog created !" << std::endl;
}


Dog::~Dog(void)
{

  std::cout << "Dog destroyed!" << std::endl;
}

//operation overloader

//getter & setter

//other

void	Dog::makeSound(void)const
{
    std::cout << "Woof!" << std::endl;
}
//bonus