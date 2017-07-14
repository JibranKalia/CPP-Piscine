/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 08:31:38 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/12 18:54:02 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"
#include <iostream>

Base::~Base() {}

Base* generate(void) {
  Base* ret;
  int i = rand() % 3;
  if (i == 0) {
    ret = new A;
    std::cout << "A is created" << std::endl;
  } else if (i == 1) {
    ret = new B;
    std::cout << "B is created" << std::endl;
  } else {
    ret = new C;
    std::cout << "C is created" << std::endl;
  }
  return (ret);
}

void identify_from_pointer(Base* ptr) {
  std::cout << "Identify from Pointer" << std::endl;
  if (dynamic_cast<A*>(ptr)) {
    std::cout << "Type is A" << std::endl;
  } else if (dynamic_cast<B*>(ptr)) {
    std::cout << "Type is B" << std::endl;
  } else if (dynamic_cast<C*>(ptr)) {
    std::cout << "Type is C" << std::endl;
  }
}

void identify_from_reference(Base& ref) {
  std::cout << "Identify from Ref" << std::endl;
  try {
    A& a = dynamic_cast<A&>(ref);
    std::cout << "Type is A" << std::endl;
    static_cast<void>(a);
  } catch (const std::bad_cast& e) {
  }
  try {
    B& b = dynamic_cast<B&>(ref);
    std::cout << "Type is b" << std::endl;
    static_cast<void>(b);
  } catch (const std::bad_cast& e) {
  }
  try {
    C& c = dynamic_cast<C&>(ref);
    std::cout << "Type is C" << std::endl;
    static_cast<void>(c);
  } catch (const std::bad_cast& e) {
  }
}

int main(void) {
  srand(time(0));
  Base* b;
  b = generate();
  identify_from_pointer(b);
  identify_from_reference(*b);
  delete b;
  return (0);
}
