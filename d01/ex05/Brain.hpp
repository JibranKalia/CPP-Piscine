/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 14:13:01 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/05 20:08:18 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <sstream>
#include <string>

class Brain {
 public:
  std::string identify() const;
  int getNeurons() const;
  Brain();
  ~Brain();

 private:
  int _neurons;
};

#endif
