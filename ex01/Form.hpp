/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 17:39:24 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/11 18:39:57 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP
#include <iostream>
#include "Bureaucrat.hpp"

class Form {
 public:
  class GradeTooHighException : public std::exception {
   public:
    virtual const char* what() const throw();
  };
  class GradeTooLowException : public std::exception {
   public:
    virtual const char* what() const throw();
  };

 public:
  Form();
  Form(std::string name, int grade_to_sign, int grade_to_execute);
  ~Form();
  Form(const Form& src);
  Form& operator=(const Form& src);
  std::string getName() const;
  int getGradeSign() const;
  int getGradeExecute() const;
  bool getIsSigned() const;
  void beSigned(Bureaucrat &src);
  void incGrade();
  void decGrade();

 private:
  bool _is_signed;
  const std::string _name;
  const int _grade_to_sign;
  const int _grade_to_execute;
};

std::ostream& operator<<(std::ostream& out, const Form& src);

#endif
