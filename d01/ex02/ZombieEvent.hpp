/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 08:20:45 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/05 10:24:48 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
#define ZOMBIEEVENT_HPP

#include "Zombie.hpp"

class ZombieEvent {
 public:
  void setZombieType(std::string _type);
  Zombie *newZombie(std::string name);
  Zombie randomChump(void);
  ZombieEvent(void);
  ~ZombieEvent(void);

 private:
  std::string _zombietype;
};
#endif
