/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchahban <rchahban@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 21:35:17 by rchahban          #+#    #+#             */
/*   Updated: 2024/03/03 01:05:40 by rchahban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm 
{
	private:
		const std::string	target;
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(const std::string	target);
		PresidentialPardonForm(const PresidentialPardonForm& form);
		~PresidentialPardonForm();
		PresidentialPardonForm& operator=(const PresidentialPardonForm& form);
		void execute(Bureaucrat const & executor) const;
};

#endif