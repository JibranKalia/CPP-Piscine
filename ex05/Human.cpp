/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 14:17:12 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/05 20:11:13 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human() : _brain() {}

Human::~Human() {}

std::string Human::identify() const {
  return _brain.identify();
}

const Brain& Human::getBrain() const { return _brain; }
