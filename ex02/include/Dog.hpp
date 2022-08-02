/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jforner <jforner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 12:52:51 by jforner           #+#    #+#             */
/*   Updated: 2022/08/02 23:56:19 by jforner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal{

private :
Brain * _brain;

public:
    Dog(void);
    ~Dog(void);

    Dog(const Dog &copy);

    Brain   *getBrain(void)const;

    Dog& operator=(Dog &copy);
    Dog& operator=(const Dog &copy);
	void	makeSound(void)const;
};
#endif