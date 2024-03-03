/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchahban <rchahban@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 20:39:24 by rchahban          #+#    #+#             */
/*   Updated: 2024/03/03 01:41:17 by rchahban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "./Intern.hpp"

int main ()
{
	try {
		Intern someRandomIntern;
		Form* rrf;
		rrf = someRandomIntern.makeForm("presidential pardoN", "Bender");
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}