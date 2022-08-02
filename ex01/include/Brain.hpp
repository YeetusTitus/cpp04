/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jforner <jforner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 11:11:30 by jforner           #+#    #+#             */
/*   Updated: 2022/07/14 16:56:25 by jforner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H
# include <string>
# include <iostream>
# include <cstring>
# include <fstream>

class Brain {

protected :
    std::string ideas[100];
    int         nbIdeas;
    int         toChange;

public:
    Brain(void);
    ~Brain(void);

    Brain(const Brain &copy);

    Brain& operator=(Brain &copy);
    Brain& operator=(const Brain &copy);

    std::string getAnIdeas(int index);

    void        addIdea(std::string str);
    
    void printAllIdeas(void);
};
#endif