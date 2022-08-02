/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jforner <jforner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 12:50:56 by jforner           #+#    #+#             */
/*   Updated: 2022/07/13 09:53:57 by jforner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <WrongCat.hpp>

//constructor & destructor

WrongCat::WrongCat(void): WrongAnimal()
{
    this->type = "WrongCat";
    std::cout << "WrongCat created !" << std::endl;
}

WrongCat::~WrongCat(void)
{

  std::cout << "WrongCat destroyed!" << std::endl;
}

//operation overloader

//getter & setter

//other

void	WrongCat::makeSound(void)const
{
	std::cout << "WrongMeow !" << std::endl;
}
//bonus