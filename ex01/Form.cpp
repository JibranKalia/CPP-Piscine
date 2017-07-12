/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 17:39:16 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/11 19:17:08 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form()
    : _is_signed(false),
      _name("randomdude"),
      _grade_to_sign(150),
      _grade_to_execute(150) {}

Form::Form(std::string name, int grade_to_sign, int grade_to_execute)
    : _is_signed(false),
      _name(name),
      _grade_to_sign(grade_to_sign),
      _grade_to_execute(grade_to_execute) {
  if (_grade_to_sign < 1 || _grade_to_execute < 1) {
    throw Form::GradeTooHighException();
  } else if (_grade_to_sign > 150 || _grade_to_execute > 150) {
    throw Form::GradeTooLowException();
  }
}

Form::~Form() {}

Form& Form::operator=(const Form& src) {
  this->_is_signed = src.getIsSigned();
  return *this;
}

Form::Form(const Form& src)
    : _is_signed(src._is_signed),
      _name(src._name),
      _grade_to_sign(src._grade_to_sign),
      _grade_to_execute(src._grade_to_execute) {
  *this = src;
}

std::string Form::getName() const { return this->_name; }
int Form::getGradeSign() const { return this->_grade_to_sign; }
int Form::getGradeExecute() const { return this->_grade_to_execute; }
bool Form::getIsSigned() const { return this->_is_signed; }

std::ostream& operator<<(std::ostream& out, const Form& src) {
  out << src.getName() << ", Grade to sign " << src.getGradeSign()
      << ", Grade to Execute " << src.getGradeExecute()
      << ", Form is" << (src.getIsSigned() ? "" :  " not") << " signed ";
  return out;
}

const char* Form::GradeTooHighException::what() const throw() {
  return ("Error: grade is too high");
}

const char* Form::GradeTooLowException::what() const throw() {
  return ("Error: grade is too low");
}

void Form::beSigned(Bureaucrat &src) {
	if (src.getGrade() >= this->_grade_to_sign)
		this->_is_signed = true;
	else
		throw Form::GradeTooLowException();
}
