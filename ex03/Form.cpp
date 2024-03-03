/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchahban <rchahban@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 19:51:03 by rchahban          #+#    #+#             */
/*   Updated: 2024/03/03 23:09:26 by rchahban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Form.hpp"

Form::Form(): name("Default"), isSigned(false), requiredGradeToSign(1), requiredGradeToExec(1) {
	std::cout << "Form constructor called." << std::endl;
}

Form::Form(const std::string _name, const int _requiredGradeToSign, const int _requiredGradeToExec)
	: name(_name) , isSigned(false), requiredGradeToSign(_requiredGradeToSign), requiredGradeToExec(_requiredGradeToExec){
	std::cout << "Form parametrized constructor called." << std::endl;
}

Form::Form(const Form& other) : name(other.name) , isSigned(other.isSigned), requiredGradeToSign(other.requiredGradeToSign), requiredGradeToExec(other.requiredGradeToExec) {
	std::cout << "Form copy constructor called." << std::endl;
}

Form& Form::operator=(const Form& other){
	if (this != &other)
		this->isSigned = other.isSigned;
	std::cout << "Form copy assignment operator called." << std::endl;
	return *this;
}

Form::~Form(){
	std::cout << "Form destructor called." << std::endl;
}

// 

const std::string Form::getName()
{
	return this->name;
}

int Form::getRequiredGradeToSign()
{
	return this->requiredGradeToSign;
}

int	Form::getRequiredGradeToExec()
{
	return this->requiredGradeToExec;
}

bool Form::getisSigned()
{
	return this->isSigned;
}

void Form::setIsSigned()
{
	this->isSigned = true;
	std::cout << "Form signed successfully!" << std::endl; 
}

void Form::beSigned(Bureaucrat& bureaucrat)
{
	int grade = bureaucrat.getGrade();
	if (grade <= requiredGradeToSign)
		setIsSigned();
	else
		throw GradeTooLowException();
}

std::ostream& operator<<(std::ostream& COUT, Form& form)
{
	COUT << "----------------------------------------------------------------------------" << std::endl;
	COUT << ">>>> Form info <<<<" << std::endl;
	COUT << "Name: " << form.getName() << std::endl;
	COUT << "Signed status: " << form.getisSigned() << std::endl;
	COUT << "Required grade to sign: " << form.getRequiredGradeToSign() << std::endl;
	COUT << "Required grade to execute: " << form.getRequiredGradeToExec() << std::endl;
	COUT << "----------------------------------------------------------------------------" << std::endl;
	return COUT;
}

const char* Form::GradeTooHighException::what() const throw()
{
	return "Grade too High!";
}


const char* Form::GradeTooLowException::what() const throw()
{
	return "Grade too Low!";
}