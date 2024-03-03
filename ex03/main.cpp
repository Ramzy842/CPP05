/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchahban <rchahban@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 20:39:24 by rchahban          #+#    #+#             */
/*   Updated: 2024/03/03 23:35:27 by rchahban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "./Intern.hpp"

int main ()
{
	try {
		Intern someRandomIntern;
		Bureaucrat b1;
		Form* rrf;
		rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
		rrf->beSigned(b1);
		rrf->execute(b1);
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}