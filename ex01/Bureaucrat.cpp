/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 12:02:33 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/11 17:42:31 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat() : _name("randomdude"), _grade(150)
{
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	if (grade < 1) {
		throw Bureaucrat::GradeTooHighException();
	} else if (grade > 150) {
		throw Bureaucrat::GradeTooLowException();
	} else {
		_grade = grade;
	}
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& src) {
	this->_grade = src._grade;
  return *this;
}

Bureaucrat::Bureaucrat(const Bureaucrat& src) { *this = src; }

std::string Bureaucrat::getName() const{ return this->_name;}
int Bureaucrat::getGrade() const{ return this->_grade;}

std::ostream& operator<<(std::ostream& out, const Bureaucrat& src) {
  out << src.getName() << ",  bureaucrat grade " << src.getGrade();
  return out;
}

const char*	Bureaucrat::GradeTooHighException::what() const throw()
{
		return ("Error: grade is too high");
}

const char*	Bureaucrat::GradeTooLowException::what() const throw()
{
		return ("Error: grade is too low");
}

void Bureaucrat::incGrade()
{
	if (_grade <= 1)
		throw Bureaucrat::GradeTooHighException();
	else
		--this->_grade;
}
void Bureaucrat::decGrade()
{
	if (_grade >= 150)
		throw Bureaucrat::GradeTooLowException();
	else
		++this->_grade;
}
