/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 11:45:11 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/05 12:05:31 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void) {
  std::string original = "HI THIS IS BRAIN";
  std::string* ptr = &original;
  std::string& ref = original;

  std::cout << "Print using Pointer:" << std::endl;
  std::cout << *ptr << std::endl;
  std::cout << "Print using Ref:" << std::endl;
  std::cout << ref << std::endl;
  return (0);
}
