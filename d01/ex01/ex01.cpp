/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 06:57:18 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/05 06:57:30 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void memoryLeak() {
  std::string* panthere = new std::string("String panthere");
  std::cout << *panthere << std::endl;
  delete panthere;
}
