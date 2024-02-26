/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchahban <rchahban@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 20:39:24 by rchahban          #+#    #+#             */
/*   Updated: 2024/02/26 01:03:31 by rchahban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "./Bureaucrat.hpp"
// #include "./AForm.hpp"
// #include "./ShrubberyCreationForm.hpp"
// #include "./RobotomyRequestForm.hpp"
// #include "./PresidentialPardonForm.hpp"
#include "./Intern.hpp"

int main ()
{
	try {
		Intern someRandomIntern;
		Form* rrf;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}