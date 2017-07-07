/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 14:13:30 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/05 20:11:16 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
#define HUMAN_HPP

#include "Brain.hpp"

class Human {
 public:
  std::string identify() const;
  const Brain& getBrain() const;
  Human();
  ~Human();

 private:
  const Brain _brain;
};

#endif
