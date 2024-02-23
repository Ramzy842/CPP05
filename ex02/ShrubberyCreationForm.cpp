/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchahban <rchahban@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 21:35:24 by rchahban          #+#    #+#             */
/*   Updated: 2024/02/23 13:53:03 by rchahban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ShrubberyCreationForm.hpp"
#include "./AForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): AForm("Shrubbery Creation Form", false, 145, 137), target("Somewhere")
{
	std::cout << "Shrubbery Creation Form constructor called." << std::endl;
}
ShrubberyCreationForm::ShrubberyCreationForm(const char *target) : AForm("Shrubbery Creation Form", false, 145, 137), target(target)
{
	std::cout << "Shrubbery Creation Form parametrized constructor called." << std::endl;
}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& form)
{
	*this = form;
	std::cout << "Shrubbery Creation Form copy constructor called." << std::endl;
}
ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "Shrubbery Creation Form destructor called." << std::endl;
}
ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& form)
{
	if (this != &form)
		this->target = form.target;
	std::cout << "Shrubbery Creation Form copy assignment operator called." << std::endl;
	return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (!this->isValidForExecution(executor))
		throw validationExecException();
}