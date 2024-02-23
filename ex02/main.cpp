/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchahban <rchahban@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 20:39:24 by rchahban          #+#    #+#             */
/*   Updated: 2024/02/23 14:25:22 by rchahban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Bureaucrat.hpp"
#include "./AForm.hpp"
#include "./ShrubberyCreationForm.hpp"
#include "./RobotomyRequestForm.hpp"
#include "./PresidentialPardonForm.hpp"

int main ()
{
	try {
		Bureaucrat b1 = Bureaucrat("Robert", 2);
		std::cout << b1;
		b1.increment();
		AForm *f1 = new PresidentialPardonForm("Some form");
		std::cout << *f1;
		f1->beSigned(b1);
		b1.executeForm(*f1);
		delete f1;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}