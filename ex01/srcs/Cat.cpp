/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jforner <jforner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 12:50:56 by jforner           #+#    #+#             */
/*   Updated: 2022/08/02 21:32:14 by jforner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Cat.hpp>

//constructor & destructor

Cat::Cat(void): Animal()
{
    this->type = "Cat";
    this->_brain = new Brain();
    std::cout << "Cat created !" << std::endl;
}

Cat::Cat(const Cat &copy): Animal(copy)
{
	delete _brain;
	_brain = new Brain(*copy._brain);
    std::cout << "Cat created from a copy !" << std::endl;
}

Cat::~Cat(void)
{
	delete this->_brain;
  std::cout << "Cat destroyed!" << std::endl;
}

Cat& Cat::operator=(const Cat &copy)
{
	delete _brain;
	_brain = new Brain(*copy._brain);
	return *this;
}

//getter & setter

Brain *Cat::getBrain(void)const
{
	return(this->_brain);
}

//other

void	Cat::makeSound(void)const
{
	std::cout << "Meow !" << std::endl;
}
//bonus