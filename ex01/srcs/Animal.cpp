/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jforner <jforner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 12:07:21 by jforner           #+#    #+#             */
/*   Updated: 2022/07/13 09:32:45 by jforner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Animal.hpp>

//constructor & destructor

Animal::Animal(void)
{
   this->type = "Default";
  std::cout << "Animal created !" << std::endl;
}

Animal::Animal(const Animal &copy)
{
   this->type = copy.getType();
  std::cout << "Animal created from a copy!" << std::endl;
}

Animal::~Animal(void)
{
  std::cout << "Animal destroyed!" << std::endl;
}

//operation overloader

Animal&  Animal::operator=(Animal &copy)
{
	this->type = copy.getType();
	std::cout << "Animal copied!" << std::endl;
	return *this;
}

Animal&  Animal::operator=(const Animal &copy)
{
	this->type = copy.getType();
	std::cout << "Animal copied!" << std::endl;
	return *this;
}
//getter & setter

std::string Animal::getType(void)const
{
    return (this->type);
}

//other

void	Animal::makeSound(void)const
{
        std::cout << "*Unknown noises*" << std::endl;
}
//bonus