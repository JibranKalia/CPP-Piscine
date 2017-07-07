/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 14:16:35 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/05 14:51:24 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "Human.hpp"

int main() {
  Human bob;

  std::cout << bob.identify() << std::endl;
  std::cout << bob.getBrain().identify() << std::endl;
}
