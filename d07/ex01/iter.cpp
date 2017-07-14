/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 08:31:38 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/13 14:28:26 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cmath>
#include <iomanip>
#include <iostream>

template <typename T>
void iter(T* array, size_t len, void (*OP)(T&)) {
  for (size_t i = 0; i < len; ++i) {
    OP(array[i]);
  }
}

template <typename T>
void print(T& i) {
  std::cout << i << std::endl;
}

int main(void) {
  int array1[] = {3, 5, 22};
  std::string array2[] = {"salut", "les", "gens", "yo"};
  iter(array1, 3, print);
  iter(array2, 4, print);
}
