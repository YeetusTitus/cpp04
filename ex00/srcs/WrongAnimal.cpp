/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jforner <jforner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 12:07:21 by jforner           #+#    #+#             */
/*   Updated: 2022/07/13 09:53:48 by jforner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <WrongAnimal.hpp>

//constructor & destructor

WrongAnimal::WrongAnimal(void)
{
   this->type = "Default";
  std::cout << "WrongAnimal created !" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
   this->type = copy.getType();
  std::cout << "WrongAnimal created from a copy!" << std::endl;
}

WrongAnimal::~WrongAnimal(void)
{
  std::cout << "WrongAnimal destroyed!" << std::endl;
}

//operation overloader

WrongAnimal&  WrongAnimal::operator=(WrongAnimal &copy)
{
	this->type = copy.getType();
	std::cout << "WrongAnimal copied!" << std::endl;
	return *this;
}

WrongAnimal&  WrongAnimal::operator=(const WrongAnimal &copy)
{
	this->type = copy.getType();
	std::cout << "WrongAnimal copied!" << std::endl;
	return *this;
}
//getter & setter

std::string WrongAnimal::getType(void)const
{
    return (this->type);
}

//other

void	WrongAnimal::makeSound(void)const
{
        std::cout << "*Wrong noises*" << std::endl;
}
//bonus