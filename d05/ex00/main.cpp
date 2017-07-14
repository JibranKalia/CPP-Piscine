/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 12:02:42 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/11 15:24:21 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
int main(void) {
  {
    try {
      Bureaucrat jim("Jim", -2);
      std::cout << jim << std::endl;
    } catch (std::exception& e) {
      std::cout << e.what() << std::endl;
    }
  }
  {
    Bureaucrat jim("jimmig", 12);
    try {
      for (int i = 0; i < 150; i++) {
        jim.incGrade();
        std::cout << jim << std::endl;
      }
    } catch (std::exception& e) {
      std::cout << e.what() << std::endl;
    }
    std::cout << jim << std::endl;
  }

  {
    Bureaucrat jim("jimmig", 132);
    try {
      for (int i = 0; i < 150; i++) {
        jim.decGrade();
        std::cout << jim << std::endl;
      }
    } catch (std::exception& e) {
      std::cout << e.what() << std::endl;
    }
    std::cout << jim << std::endl;
  }

  {
    try {
      Bureaucrat jim("jimmig", 0);
      for (int i = 0; i < 150; i++) {
        jim.decGrade();
        std::cout << jim << std::endl;
      }
      std::cout << jim << std::endl;
    } catch (std::exception& e) {
      std::cout << e.what() << std::endl;
    }
  }
  return (0);
}
