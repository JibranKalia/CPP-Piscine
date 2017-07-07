/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sample1.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 10:54:51 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/04 11:04:34 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Sample1 {

	char	a1;
	int		a2;
	float	a3;

	public:
	Sample1( char p1, int p2, float p3 );
	~Sample1( void );
};

Sample1::Sample1( char p1, int p2, float p3 ) : a1(p1), a2(p2), a3(p3) {
	std::cout << "Constructor called" << std::endl;
	
	std::cout << "this->a1 = " << this->a1 << std::endl;
	std::cout << "this->a2 = " << this->a2 << std::endl;
	std::cout << "this->a3 = " << this->a3 << std::endl;
}

Sample1::~Sample1( void ) {
	std::cout << "Destructor called" << std::endl;
};

int		main() {

	Sample1 object('1', 42, 4.2f);
	return (0);
}
