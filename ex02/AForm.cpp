/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchahban <rchahban@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 21:35:37 by rchahban          #+#    #+#             */
/*   Updated: 2024/02/23 10:32:52 by rchahban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./AForm.hpp"
#include "./Bureaucrat.hpp"

AForm::AForm(): name("Default"), isSigned(false), requiredGradeToSign(1), requiredGradeToExec(1) {
	std::cout << "AForm constructor called." << std::endl;
}

AForm::AForm(const std::string _name, const int _requiredGradeToSign, const int _requiredGradeToExec)
	: name(_name) , isSigned(false), requiredGradeToSign(_requiredGradeToSign), requiredGradeToExec(_requiredGradeToExec){
	std::cout << "AForm parametrized constructor called." << std::endl;
}

AForm::AForm(const AForm& other) : name(other.name) , isSigned(other.isSigned), requiredGradeToSign(other.requiredGradeToSign), requiredGradeToExec(other.requiredGradeToExec) {
	std::cout << "AForm copy constructor called." << std::endl;
}

AForm& AForm::operator=(const AForm& other){
	if (this != &other)
		this->isSigned = other.isSigned;
	std::cout << "AForm copy assignment operator called." << std::endl;
	return *this;
}

AForm::~AForm(){
	std::cout << "AForm destructor called." << std::endl;
}

const std::string AForm::getName() const
{
	return this->name;
}

int AForm::getRequiredGradeToSign()
{
	return this->requiredGradeToSign;
}

int	AForm::getRequiredGradeToExec() const
{
	return this->requiredGradeToExec;
}

bool AForm::getisSigned() const
{
	return this->isSigned;
}

void AForm::setIsSigned()
{
	this->isSigned = true;
	std::cout << "AForm signed successfully!" << std::endl; 
}

void AForm::beSigned(Bureaucrat& bureaucrat)
{
	int grade = bureaucrat.getGrade();
	if (grade <= requiredGradeToSign)
		setIsSigned();
	else
		throw GradeTooLowException();
}

std::ostream& operator<<(std::ostream& COUT, AForm& AForm)
{
	COUT << "----------------------------------------------------------------------------" << std::endl;
	COUT << ">>>> AForm info <<<<" << std::endl;
	COUT << "Name: " << AForm.getName() << std::endl;
	COUT << "Signed status: " << AForm.getisSigned() << std::endl;
	COUT << "Required grade to sign: " << AForm.getRequiredGradeToSign() << std::endl;
	COUT << "Required grade to execute: " << AForm.getRequiredGradeToExec() << std::endl;
	COUT << "----------------------------------------------------------------------------" << std::endl;
	return COUT;
}

const char* AForm::GradeTooHighException::what() const throw()
{
	return "Grade too High!";
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return "Grade too Low!";
}

const char* AForm::validationExecException::what() const throw()
{
	return "Form is not valid for execution";
}

int AForm::isValidForExecution(const Bureaucrat& executor) const
{
	if (this->getisSigned() && executor.getGrade() <= this->getRequiredGradeToExec())
		return (1);
	return (0);
}