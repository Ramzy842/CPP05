/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchahban <rchahban@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 20:39:24 by rchahban          #+#    #+#             */
/*   Updated: 2024/02/21 23:37:35 by rchahban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Bureaucrat.hpp"
#include "./Form.hpp"

int main ()
{
	try {
		Bureaucrat b1 = Bureaucrat("Robert", 3);
		std::cout << b1;
		b1.increment();
		Form f1("Birth certificate", false, 4, 4);
		Form f3 = f1;
		std::cout << f1 << f3;
		f1.beSigned(b1);
		b1.signForm(f1);
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}