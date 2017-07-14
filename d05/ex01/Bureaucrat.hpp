/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 12:02:38 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/11 18:47:32 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>
class Form;

class Bureaucrat {
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
  Bureaucrat();
  Bureaucrat(std::string name, int grade);
  ~Bureaucrat();
  Bureaucrat(const Bureaucrat& src);
  Bureaucrat& operator=(const Bureaucrat& src);
  std::string getName() const;
  int getGrade() const;
  void incGrade();
  void decGrade();
  void signForm(Form& f);

 private:
  const std::string _name;
  int _grade;
};

std::ostream& operator<<(std::ostream& out, const Bureaucrat& src);

#endif
