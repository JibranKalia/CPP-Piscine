/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 10:54:19 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/05 11:35:00 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
#define ZOMBIEHORDE_HPP

#include "Zombie.hpp"

class ZombieHorde {
 public:
  ZombieHorde(int N);
  ~ZombieHorde(void);
  std::string _randomname(int length);

 private:
  int _limit;
  void *raw_memory;
  Zombie *horde;
  std::string _zombietype;
};

#endif
