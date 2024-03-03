/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchahban <rchahban@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 19:51:01 by rchahban          #+#    #+#             */
/*   Updated: 2024/03/03 23:01:48 by rchahban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>
class Bureaucrat;

class Form
{
	private:
		const std::string	name;
		bool				isSigned;
		const int			requiredGradeToSign;
		const int			requiredGradeToExec;
	public:
		Form();
		Form(const std::string name, const int requiredGradeToSign, const int requiredGradeToExec);
		Form(const Form& other);
		Form& operator=(const Form& other);
		~Form();
		const std::string	getName();
		bool				getisSigned();
		int					getRequiredGradeToSign();
		int					getRequiredGradeToExec();
		void				setIsSigned();
		void				beSigned(Bureaucrat& bureaucrat);
		class GradeTooHighException: public std::exception
		{
			virtual const char* what() const throw();
		};
		class GradeTooLowException: public std::exception
		{
			virtual const char* what() const throw();
		};
		 
};
std::ostream& operator<<(std::ostream& COUT, Form& form);

#endif