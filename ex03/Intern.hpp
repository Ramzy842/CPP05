/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchahban <rchahban@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 00:21:37 by rchahban          #+#    #+#             */
/*   Updated: 2024/02/26 00:51:42 by rchahban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>
#include "./Form.hpp"

class Intern {
	public:
		Intern();
		~Intern();
		Intern(const Intern& intern);
		Intern& operator=(const Intern& intern);
		Form *makeForm(std::string formName, std::string target) const;
};

#endif