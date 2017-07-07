/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 14:03:10 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/05 06:44:44 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
#define PONY_HPP

#include <iostream>

class Pony {
 public:
  Pony(std::string color, int age);
  ~Pony(void);
  std::string getColor(void);
  int getAge(void);

 private:
  std::string _color;
  int _age;
};

#endif
