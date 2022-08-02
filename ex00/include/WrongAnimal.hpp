/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jforner <jforner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 11:20:15 by jforner           #+#    #+#             */
/*   Updated: 2022/07/13 09:46:02 by jforner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_H
# define WRONGANIMAL_H
# include <string>
# include <iostream>
# include <cstring>
# include <fstream>

class WrongAnimal {

protected :

std::string	type;

public:
    WrongAnimal(void);
    virtual ~WrongAnimal(void);
        
    WrongAnimal(const WrongAnimal &copy);

    WrongAnimal& operator=(WrongAnimal &copy);
    WrongAnimal& operator=(const WrongAnimal &copy);

	std::string	getType(void)const;

	void	makeSound(void)const;
};

#endif
