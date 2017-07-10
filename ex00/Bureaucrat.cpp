/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 12:02:33 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/10 12:42:55 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

Bureaucrat::Bureaucrat(std::string inname, int ingrade) : _name(inname) {
	try
	{
		if (_grade < 1)
			throw std::range_error("Bureaucrat::GradeTooHighException");
		if (_grade > 150)
			throw std::range_error("Bureaucrat::GradeTooLowException");
		_grade = ingrade;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

Bureaucrat::~Bureaucrat() {}


Bureaucrat& Bureaucrat::operator=(const Bureaucrat& src) {
	//_name = src._name;
	_grade = src._grade;
  return *this;
}

Bureaucrat::Bureaucrat(const Bureaucrat& src) { *this = src; }

std::string Bureaucrat::getName() const;

