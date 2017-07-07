/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 14:11:36 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/05 20:14:07 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain is born" << std::endl;
}

Brain::~Brain() {
	std::cout << "Brain dies" << std::endl;
}

int Brain::getNeurons() const { return _neurons; }

std::string Brain::identify() const {
  std::stringstream out;
  out << static_cast<const void *>(this);
  return out.str();
}
