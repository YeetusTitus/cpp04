/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jforner <jforner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 13:01:16 by jforner           #+#    #+#             */
/*   Updated: 2022/08/02 19:04:52 by jforner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Dog.hpp>

//constructor & destructor

Dog::Dog(void): Animal()
{
	this->type = "Dog";
	this->_brain = new Brain();
	std::cout << "Dog created !" << std::endl;
}
 
Dog::Dog(const Dog &copy): Animal(copy)
{
	delete _brain;
	_brain = new Brain(*copy._brain);
    std::cout << "Dog created from a copy !" << std::endl;
}

Dog::~Dog(void)
{
	delete this->_brain;
  std::cout << "Dog destroyed!" << std::endl;
}

//operation overloader

Dog& Dog::operator=(Dog &copy)
{
	delete _brain;
	_brain = new Brain(*copy._brain);
	return *this;
}
Dog& Dog::operator=(const Dog &copy)
{
	delete _brain;
	_brain = new Brain(*copy._brain);
	return *this;
}
//getter & setter

Brain *Dog::getBrain(void)const
{
	return(this->_brain);
}

//other

void	Dog::makeSound(void)const
{
    std::cout << "Woof!" << std::endl;
}
//bonus