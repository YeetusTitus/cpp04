/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jforner <jforner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 11:17:36 by jforner           #+#    #+#             */
/*   Updated: 2022/07/14 10:37:37 by jforner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Dog.hpp>
#include <Cat.hpp>
#include <WrongCat.hpp>

int	main(void)
{
	std::cout << "\033[0;31m";
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	
	std::cout << "\033[0m";
	std::cout << std::endl;
	std::cout << j->getType() << " ";
	j->makeSound();
	std::cout << i->getType() << " ";
	i->makeSound();
    meta->makeSound();

	std::cout << "\033[0;34m";
	delete  meta;
	delete  i;
	delete  j;
	std::cout << "\033[0m";

	std::cout << std::endl;
	std::cout << "\033[0;31m";
	const WrongAnimal* verse = new WrongAnimal();
	const WrongAnimal* ca = new WrongCat();

	std::cout << "\033[0m";
	std::cout << ca->getType() << " "; ca->makeSound();
	verse->makeSound();

	std::cout << "\033[0;34m";
	delete  verse;
	delete  ca;
	std::cout << "\033[0m";
	return 0;
}
