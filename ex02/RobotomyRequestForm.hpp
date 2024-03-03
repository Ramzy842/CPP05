/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchahban <rchahban@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 21:35:22 by rchahban          #+#    #+#             */
/*   Updated: 2024/03/03 01:08:51 by rchahban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
#include "AForm.hpp"

class RobotomyRequestForm : public AForm 
{
	private:
		const std::string	target;
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(const std::string	target);
		RobotomyRequestForm(const RobotomyRequestForm& form);
		~RobotomyRequestForm();
		RobotomyRequestForm& operator=(const RobotomyRequestForm& form);
		void execute(Bureaucrat const & executor) const;
};

#endif