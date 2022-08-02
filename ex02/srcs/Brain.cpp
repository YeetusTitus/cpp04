/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jforner <jforner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 12:48:31 by jforner           #+#    #+#             */
/*   Updated: 2022/07/14 16:58:16 by jforner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Brain.hpp>

//constructor & destructor

Brain::Brain(void)
{
	this->nbIdeas = 0;
	this->toChange = 0;
	std::cout << "Brain created !" << std::endl;
}

Brain::Brain(const Brain &copy)
{
	for(int i = 0; i < 100; i++)
		this->ideas[i] = copy.ideas[i];
	this->nbIdeas = copy.nbIdeas;
	this->toChange = copy.toChange;
    std::cout << "Brain created from a copy !" << std::endl;
}

Brain::~Brain(void)
{

  std::cout << "Brain destroyed!" << std::endl;
}

//operation overloader
Brain&  Brain::operator=(Brain &copy)
{
	for(int i = 0; i < 100; i++)
		this->ideas[i] = copy.ideas[i];
	this->nbIdeas = copy.nbIdeas;
	this->toChange = copy.toChange;
	std::cout << "Brain copied!" << std::endl;
	return (*this);
}

Brain&  Brain::operator=(const Brain &copy)
{
	for(int i = 0; i < 100; i++)
		this->ideas[i] = copy.ideas[i];
	this->nbIdeas = copy.nbIdeas;
	this->toChange = copy.toChange;
	std::cout << "Brain copied!" << std::endl;
	return (*this);
}
//getter & setter

std::string Brain::getAnIdeas(int index)
{
	return (this->ideas[index]);
}
//other

void	Brain::addIdea(std::string str)
{
	if (this->toChange == 100)
		this->toChange = 0;
	if (nbIdeas < 100)
		this->nbIdeas++;
	this->ideas[this->toChange++] = str;
}
//bonus

void Brain::printAllIdeas(void)
{
	for(int i = 0; i < this->nbIdeas; i++)
		std::cout << i << " : " << this->ideas[i] << std::endl;
}