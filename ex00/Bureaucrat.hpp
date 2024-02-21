/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchahban <rchahban@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 21:46:07 by rchahban          #+#    #+#             */
/*   Updated: 2024/02/21 01:30:57 by rchahban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

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
		int	getGrade();
		void	setName(const std::string name);
		void	setGrade(int grade);
		void decrement();
		void increment();
		class GradeTooHighException: public std::exception
		{
			virtual const char* what() const throw()
			{
				return "Grade too High!";
			}
		};
		class GradeTooLowException: public std::exception
		{
			virtual const char* what() const throw()
			{
				return "Grade too Low!";
			}
		};
		 
};

#endif