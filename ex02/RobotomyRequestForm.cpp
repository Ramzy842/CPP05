/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchahban <rchahban@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 21:35:20 by rchahban          #+#    #+#             */
/*   Updated: 2024/02/25 01:52:01 by rchahban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./RobotomyRequestForm.hpp"
#include "./AForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): AForm("Robotomy Request Form", false, 72, 45), target("Somewhere")
{
	std::cout << "Robotomy Request Form constructor called." << std::endl;
}
RobotomyRequestForm::RobotomyRequestForm(const char *target) : AForm("Robotomy Request Form", false, 72, 45), target(target)
{
	std::cout << "Robotomy Request Form parametrized constructor called." << std::endl;
}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& form)
{
	*this = form;
	std::cout << "Robotomy Request Form copy constructor called." << std::endl;
}
RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "Robotomy Request Form destructor called." << std::endl;
}
RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& form)
{
	if (this != &form)
		this->target = form.target;
	std::cout << "Robotomy Request Form copy assignment operator called." << std::endl;
	return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (!this->isValidForExecution(executor))
		throw validationExecException();
	std::cout << "drilling noises." << std::endl;
	std::cout << this->target << " has been robotomized successfully 50% of the time." << std::endl;
}