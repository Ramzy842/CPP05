/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchahban <rchahban@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 15:53:27 by rchahban          #+#    #+#             */
/*   Updated: 2024/02/21 23:33:14 by rchahban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Default"), grade(1)
{
	std::cout << "Bureaucrat constructor called." << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : name(name)
{
	setGrade(grade);
	std::cout << "Bureaucrat parametrized constructor called." << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other)
{
	*this = other;
	std::cout << "Bureaucrat copy constructor called." << std::endl;
}
Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{
	if (this != &other)
	{
		this->setGrade(other.grade);
	}
	std::cout << "Bureaucrat copy assignment operator called." << std::endl;
	return *this;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat destructor called." << std::endl;
}

const std::string Bureaucrat::getName()
{
	return this->name;
}

int	Bureaucrat::getGrade()
{
	return this->grade;
}

void	Bureaucrat::setGrade(int grade)
{
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	else
		this->grade = grade;
}

void	Bureaucrat::decrement()
{
	int currentGrade = this->getGrade();
	if (currentGrade == 150)
		throw GradeTooLowException();
	this->setGrade(currentGrade + 1);
	std::cout << "Decremented bureaucrat grade successfully" << std::endl;
}



void	Bureaucrat::increment()
{
	int currentGrade = this->getGrade();
	if (currentGrade == 1)
		throw GradeTooHighException();
	this->setGrade(currentGrade - 1);	
	std::cout << "Incremented bureaucrat grade successfully" << std::endl;
}

std::ostream& operator<<(std::ostream& COUT, Bureaucrat& bureaucrat)
{
	COUT << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << std::endl;
	return COUT;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade too High!";
}


const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade too Low!";
}


void Bureaucrat::signForm(Form& form)
{
	try{
		form.beSigned(*this);
		std::cout << this->getName() << " signed " << form.getName() << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << this->getName() << " couldn't sign " << form.getName() << " because " << e.what() << std::endl;
	}
}