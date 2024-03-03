/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchahban <rchahban@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 21:35:24 by rchahban          #+#    #+#             */
/*   Updated: 2024/03/03 23:17:38 by rchahban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ShrubberyCreationForm.hpp"
#include "./AForm.hpp"

void drawTree(std::ofstream& outputFile)
{
	outputFile << "         *" << std::endl;
	outputFile << "        /|\\ " << std::endl;
	outputFile << "       /*|O\\ " << std::endl;
	outputFile << "      /*/|\\*\\ " << std::endl;
	outputFile << "     /X/O|*\\X\\ " << std::endl;
	outputFile << "    /*/X/|\\X\\*\\ " << std::endl;
	outputFile << "   /O/*/X|*\\O\\X\\ " << std::endl;
	outputFile << "  /*/O/X/|\\X\\O\\*\\ " << std::endl;
	outputFile << " /X/O/*/X|O\\X\\*\\O\\ " << std::endl;
	outputFile << "/O/X/*/O/|\\X\\*\\O\\X\\ " << std::endl;
	outputFile << "        |X|" << std::endl;
	outputFile << "        |X|" << std::endl;
}


ShrubberyCreationForm::ShrubberyCreationForm(): AForm("Shrubbery Creation Form", 145, 137), target("Somewhere")
{
	
	std::cout << "Shrubbery Creation Form constructor called." << std::endl;
}
ShrubberyCreationForm::ShrubberyCreationForm(const std::string	target) : AForm("Shrubbery Creation Form", 145, 137), target(target)
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
	(void)form;
	std::cout << "Shrubbery Creation Form copy assignment operator called." << std::endl;
	return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (!this->isValidForExecution(executor))
		throw validationExecException();
	std::ofstream outputFile(target);
	drawTree(outputFile);
    outputFile.close();
}