/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchahban <rchahban@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 21:46:07 by rchahban          #+#    #+#             */
/*   Updated: 2024/02/23 13:57:41 by rchahban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include "./AForm.hpp"
#include <iostream>

class AForm;

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
		const std::string	getName() const;
		int					getGrade() const;
		void				setGrade(int grade);
		void				decrement();
		void				increment();
		void				executeForm(AForm const & form);
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