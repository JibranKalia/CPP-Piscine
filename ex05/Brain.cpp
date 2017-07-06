/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 14:11:36 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/05 20:08:41 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {}

Brain::~Brain() {}

int Brain::getNeurons() const { return _neurons; }

std::string Brain::identify() const {
  std::stringstream out;
  out << static_cast<const void *>(this);
  return out.str();
}
