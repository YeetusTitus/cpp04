/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jforner <jforner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 11:17:36 by jforner           #+#    #+#             */
/*   Updated: 2022/08/03 02:00:50 by jforner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Dog.hpp>
#include <Cat.hpp>

int	main(void)
{
	{
	std::cout << "\033[0;31m";
	const Animal* ani[2];

	// const Animal* oni = new Animal();

	// oni->makeSound();
	ani[0] = new Cat();
	ani[1] = new Dog();
	
	std::cout << "\033[0m";
	std::cout << ani[0]->getType() << std::endl;
	ani[0]->makeSound();
	std::cout << ani[1]->getType() << std::endl;
	ani[1]->makeSound();
	std::cout << std::endl;

	
	std::cout << "\033[0;31m";
	for(int i=0; i < 2; i++)
		delete ani[i];

	const Dog j;
	
	Cat i;
	const Cat l;
	
	std::cout << "\033[0m";
	std::cout << std::endl;

	i.getBrain()->addIdea("Ok I pull up !");
	j.getBrain()->addIdea("Bruh sound effect #2");
	l.getBrain()->addIdea("FTG FDP !");
	std::cout << j.getType() << " Idea = " << j.getBrain()->getAnIdeas(0) << std::endl;
	std::cout << i.getType() << " Idea = " << i.getBrain()->getAnIdeas(0) << std::endl;

	i = l;
	std::cout << i.getType() << " Idea = " << i.getBrain()->getAnIdeas(0) << std::endl;
	
	i.getBrain()->addIdea("Issou !");
	i.getBrain()->addIdea("K");
	l.getBrain()->printAllIdeas();
	i.getBrain()->printAllIdeas();
	
	for(int p = 1; p < 100; p++)
		j.getBrain()->addIdea("Bruh sound effect #2");
	std::cout << "\033[0;31m";
	const Dog k(j);
	std::cout << "\033[0m";
	k.getBrain()->addIdea("Lament");
	std::cout << "\033[0;32m";
	j.getBrain()->printAllIdeas();
	std::cout << "\033[0;35m";
	k.getBrain()->printAllIdeas();
	std::cout << "\033[0;31m";
}
	std::cout << "\033[0m";
	// system("leaks animals");
	return 0;
}
