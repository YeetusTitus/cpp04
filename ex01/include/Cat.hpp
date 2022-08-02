/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jforner <jforner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 12:37:36 by jforner           #+#    #+#             */
/*   Updated: 2022/08/02 23:56:12 by jforner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal{

private :

Brain * _brain;

public:
    Cat(void);
    ~Cat(void);

    Cat(const Cat &copy);

    Brain   *getBrain(void)const;

    Cat& operator=(const Cat &copy);
	void	makeSound(void)const;
};

#endif