/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchahban <rchahban@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 21:35:22 by rchahban          #+#    #+#             */
/*   Updated: 2024/02/23 13:55:05 by rchahban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
#include "AForm.hpp"

class RobotomyRequestForm : public AForm 
{
	private:
		const char *target;
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(const char *target);
		RobotomyRequestForm(const RobotomyRequestForm& form);
		~RobotomyRequestForm();
		RobotomyRequestForm& operator=(const RobotomyRequestForm& form);
		void execute(Bureaucrat const & executor) const;
};

#endif