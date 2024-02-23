/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchahban <rchahban@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 21:35:28 by rchahban          #+#    #+#             */
/*   Updated: 2024/02/23 01:33:35 by rchahban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm 
{
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(const char *target);
		ShrubberyCreationForm(const ShrubberyCreationForm& form);
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm& form);
		
};