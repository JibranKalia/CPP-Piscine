/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 14:17:12 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/05 20:14:23 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human() {
	std::cout << "Human is born" << std::endl;
}

Human::~Human() {
	std::cout << "Human dies" << std::endl;
}

std::string Human::identify() const {
  return _brain.identify();
}

const Brain& Human::getBrain() const { return _brain; }
