/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchahban <rchahban@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 00:21:35 by rchahban          #+#    #+#             */
/*   Updated: 2024/03/03 01:40:58 by rchahban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Intern.hpp"
#include "./ShrubberyCreationForm.hpp"
#include "./PresidentialPardonForm.hpp"
#include "./RobotomyRequestForm.hpp"
#include <cctype>


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



std::string to_lower(const std::string& str) {
  std::string lower_str;
  for (int x = 0; x < (int)str.length(); x++) {
    lower_str += std::tolower(str[x]);
  }
  return lower_str;
}

AForm *createRobotomyForm(const std::string target)
{
	return (new RobotomyRequestForm(target));
}

AForm *createPresidentialForm(const std::string target)
{
	return (new PresidentialPardonForm(target));
}

AForm *createShrubberyForm(const std::string target)
{
	return (new ShrubberyCreationForm(target));
}

const char* Intern::formNotFoundException::what() const throw()
{
	return "Invalid form name!";
}

AForm *Intern::makeForm(std::string formName, std::string target) const
{
	AForm *form = NULL;
	bool formFound = false;
	std::string names[3] = {"Shrubbery Creation", "Presidential Pardon", "Robotomy Request"};
	AForm* (*forms[3])(std::string target) = {createShrubberyForm, createPresidentialForm, createRobotomyForm};
	for (int x = 0; x < 3; x++)
	{
		if (to_lower(formName) == to_lower(names[x]))
		{
			form = forms[x](target);
			formFound = true;
			std::cout << "Intern creates " << form->getName() << std::endl;
		}
	}
	if (!formFound)
		throw formNotFoundException();
	return form;
}