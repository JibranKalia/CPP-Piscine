/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   references.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 14:22:37 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/04 14:28:27 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

/*
* Ref = Constant Pointer;
* Ref cannot point to anything.
* Ref is (a pointer that is derefernced);
* Red kind like an alias.
*/

int		main()
{
	int		numberOfBalls = 42;

	int*	ballsPtr = &numberOfBalls;
	int&	ballsRef = numberOfBalls;

	std::cout << numberOfBalls << " " << *ballsPtr << " " << ballsRef << std::endl;

	*ballsPtr = 21;
	std::cout << numberOfBalls << std::endl;
	ballsRef = 84;
	std::cout << numberOfBalls << std::endl;
	return (0);
}
