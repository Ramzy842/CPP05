/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchahban <rchahban@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 21:35:14 by rchahban          #+#    #+#             */
/*   Updated: 2024/02/23 14:20:16 by rchahban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./PresidentialPardonForm.hpp"
#include "./AForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): AForm("Presidential Pardon Form", false, 25, 5), target("Somewhere")
{
	std::cout << "Presidential Pardon Form constructor called." << std::endl;
}
PresidentialPardonForm::PresidentialPardonForm(const char *target) : AForm("Presidential Pardon Form", false, 25, 5), target(target)
{
	std::cout << "Presidential Pardon Form parametrized constructor called." << std::endl;
}
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& form)
{
	*this = form;
	std::cout << "Presidential Pardon Form copy constructor called." << std::endl;
}
PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "Presidential Pardon Form destructor called." << std::endl;
}
PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& form)
{
	if (this != &form)
		this->target = form.target;
	std::cout << "Presidential Pardon Form copy assignment operator called." << std::endl;
	return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (!this->isValidForExecution(executor))
		throw validationExecException();
	std::cout << this->target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}