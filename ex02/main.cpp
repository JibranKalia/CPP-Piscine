/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 08:31:38 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/12 18:46:16 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"
#include <iostream>

Base::~Base() {}

Base *generate(void)
{
	Base *ret;
	int		i = rand() % 3;
	if (i == 0)
	{
		ret = new A;
		std::cout << "A is created" << std::endl;
	}
	else if (i == 1)
	{
		ret = new B;
		std::cout << "B is created" << std::endl;
	}
	else
	{
		ret = new C;
		std::cout << "C is created" << std::endl;
	}
	return (ret);
}

void identify_from_pointer(Base *ptr)
{
	if (dynamic_cast<A*>(ptr))
	{
		std::cout << "Type is A" << std::endl;
	}
	else if (dynamic_cast<B*>(ptr))
	{
		std::cout << "Type is B" << std::endl;
	}
	else if (dynamic_cast<C*>(ptr))
	{
		std::cout << "Type is C" << std::endl;
	}
}

void identify_from_reference(Base &ref)
{
	Base *ptr = &ref;
	identify_from_pointer(ptr);
}

int main(void) {
	srand(time(0));
	Base *b;
	b = generate();
	identify_from_pointer(b);
	identify_from_reference(*b);
	delete b;
	return (0);
}
