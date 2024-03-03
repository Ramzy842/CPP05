/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchahban <rchahban@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 21:35:39 by rchahban          #+#    #+#             */
/*   Updated: 2024/03/03 23:06:32 by rchahban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>
class Bureaucrat;

class AForm
{
	private:
		const std::string	name;
		bool				isSigned;
		const int			requiredGradeToSign;
		const int			requiredGradeToExec;
	public:
		AForm();
		AForm(const std::string name, const int requiredGradeToSign, const int requiredGradeToExec);
		AForm(const AForm& other);
		AForm& operator=(const AForm& other);
		virtual ~AForm();
		const std::string	getName() const;
		bool				getisSigned() const;
		int					getRequiredGradeToSign();
		int					getRequiredGradeToExec() const;
		void				setIsSigned();
		void				beSigned(Bureaucrat& bureaucrat);
		virtual 			void execute(Bureaucrat const & executor) const = 0;
		int					isValidForExecution(const Bureaucrat& executor) const;
		class GradeTooHighException: public std::exception
		{
			virtual const char* what() const throw();
		};
		class GradeTooLowException: public std::exception
		{
			virtual const char* what() const throw();
		};
		class validationExecException: public std::exception
		{
			virtual const char* what() const throw();
		};
};
std::ostream& operator<<(std::ostream& COUT, AForm& form);

#endif