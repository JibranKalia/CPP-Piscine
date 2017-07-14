/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 12:02:42 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/11 18:37:03 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
int main(void) {
	Bureaucrat suit1 = Bureaucrat("The Bureaucrat 1", 40);
	Bureaucrat suit2 = Bureaucrat("The Bureaucrat 2", 20);

	Form contract1 = Form("Contract 1", 50, 70);
	Form contract2 = Form("Contract 2", 20, 70);

	suit1.signForm(contract1);
	std::cout << suit1 << std::endl;
	std::cout << contract1 << std::endl;
	std::cout << std::endl;

	suit1.signForm(contract2);
	std::cout << suit1 << std::endl;
	std::cout << contract2 << std::endl;
	std::cout << std::endl;

	suit2.signForm(contract1);
	std::cout << suit2 << std::endl;
	std::cout << contract1 << std::endl;
	std::cout << std::endl;

	suit2.signForm(contract2);
	std::cout << suit2 << std::endl;
	std::cout << contract2 << std::endl;
  return (0);
}
