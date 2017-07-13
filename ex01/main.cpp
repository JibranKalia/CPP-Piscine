/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 08:31:38 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/12 18:26:57 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <climits>
#include <iostream>

struct Data {
  std::string s1;
  int n1;
  std::string s2;
};

void *serialize(void) {
  int i;
  static char charset[] =
      "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890";
  Data *out = new Data;
  for (i = 0; i <= 8; i++) {
    out->s1 += charset[rand() % sizeof(charset)];
  }
  out->n1 = rand() % INT_MAX;
  for (i = 0; i <= 8; i++) {
    out->s2 += charset[rand() % sizeof(charset)];
  }
  return (out);
}

Data *deserialize(void *raw) {
  Data *ret = static_cast<Data *>(raw);
  return (ret);
}

int main(void) {
  srand(time(0));
  void *r = serialize();
  Data *d = deserialize(r);

  std::cout << "String 1: " << d->s1 << std::endl;
  std::cout << "Int: " << d->n1 << std::endl;
  std::cout << "String 2: " << d->s2 << std::endl;
  delete d;
  return (0);
}
