/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 12:02:38 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/11 17:48:14 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>

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

 private:
  const std::string _name;
  int _grade;
};

std::ostream& operator<<(std::ostream& out, const Bureaucrat& src);

#endif
