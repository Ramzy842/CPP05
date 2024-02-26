/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchahban <rchahban@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 00:21:35 by rchahban          #+#    #+#             */
/*   Updated: 2024/02/26 01:47:03 by rchahban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Intern.hpp"

Intern::Intern()
{
	std::cout << "Intern constructor called." << std::endl;
}

Intern::~Intern()
{
	std::cout << "Intern destructor called." << std::endl;
}

Intern::Intern(const Intern& intern)
{
	*this = intern;
	std::cout << "Intern copy constructor called." << std::endl;
}
Intern& Intern::operator=(const Intern& intern)
{
	(void)intern;
	std::cout << "Intern copy assignment operator called." << std::endl;
	return (*this);
}

Form *Intern::makeForm(std::__1::string formName, std::__1::string target) const
{
	
}