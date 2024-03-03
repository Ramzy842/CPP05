/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchahban <rchahban@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 00:21:37 by rchahban          #+#    #+#             */
/*   Updated: 2024/03/03 01:28:59 by rchahban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>
#include "./AForm.hpp"


class Intern {
	public:
		Intern();
		~Intern();
		Intern(const Intern& intern);
		Intern& operator=(const Intern& intern);
		AForm *makeForm(std::string formName, std::string target) const;
		class formNotFoundException: public std::exception
		{
			virtual const char* what() const throw();
		};
};

typedef AForm Form;

#endif