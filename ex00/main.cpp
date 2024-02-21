/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchahban <rchahban@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 20:39:24 by rchahban          #+#    #+#             */
/*   Updated: 2024/02/21 01:52:56 by rchahban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Bureaucrat.hpp"

int main ()
{
	try {
		Bureaucrat b1 = Bureaucrat("John", 100);
		std::cout << b1.getName() << std::endl;
		Bureaucrat b2 = Bureaucrat("Robert", 160);
		std::cout << b2.getName() << std::endl;
		// delete b1;
	}
	catch (Bureaucrat::GradeTooLowException e)
	{
		std::cout << e << std::endl;
	}
	return (0);
}