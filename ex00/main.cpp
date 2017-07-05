/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 14:02:51 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/05 06:53:19 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.class.hpp"

void ponyOnTheHeap(void) {
  std::cout << "Creating (Red, 10) Pony on the heap" << std::endl;
  Pony *redPony = new Pony("red", 10);

  std::cout << "This pony is: " << redPony->getColor() << " and "
            << redPony->getAge() << std::endl;

  delete redPony;
  std::cout << "Heap Function End" << std::endl;
}

void ponyOnTheStack(void) {
  std::cout << "Creating (Yellow, 100) Pony on the stack" << std::endl;
  Pony yellowPony("yellow", 100);

  std::cout << "This pony is: " << yellowPony.getColor() << " and "
            << yellowPony.getAge() << std::endl;

  std::cout << "Stack Function End" << std::endl;
}

int main(void) {
  std::cout << "Start of Program" << std::endl;
  ponyOnTheHeap();
  ponyOnTheStack();
  std::cout << "End of Program" << std::endl;
  return (0);
}
