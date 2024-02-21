/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchahban <rchahban@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 21:46:07 by rchahban          #+#    #+#             */
/*   Updated: 2024/02/21 23:20:49 by rchahban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include "Form.hpp"
#include <iostream>

class Form;

class Bureaucrat
{
	private:
		const std::string name;
		int		grade;
	public:
		Bureaucrat();
		Bureaucrat(const std::string name, int	grade);
		Bureaucrat(const Bureaucrat& other);
		Bureaucrat& operator=(const Bureaucrat& other);
		~Bureaucrat();
		const std::string	getName();
		int					getGrade();
		void				setGrade(int grade);
		void				decrement();
		void				increment();
		void				signForm(Form& form);
		class GradeTooHighException: public std::exception
		{
			virtual const char* what() const throw();
		};
		class GradeTooLowException: public std::exception
		{
			virtual const char* what() const throw();
		};
		 
};
std::ostream& operator<<(std::ostream& COUT, Bureaucrat& bureaucrat);

#endif