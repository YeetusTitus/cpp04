/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jforner <jforner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 11:20:15 by jforner           #+#    #+#             */
/*   Updated: 2022/08/03 00:20:20 by jforner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H
# include <string>
# include <iostream>
# include <cstring>
# include <fstream>

class Animal {

protected :

std::string	type;

public:
    Animal(void);
    virtual ~Animal(void);
        
    Animal(const Animal &copy);

    Animal& operator=(Animal &copy);
    Animal& operator=(const Animal &copy);

	std::string	getType(void)const;

	virtual void	makeSound(void)const =0;
};

#endif
