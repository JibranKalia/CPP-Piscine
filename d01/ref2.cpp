/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ref2.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 15:01:34 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/04 15:21:26 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	byPtr(std::string* str)
{
	*str += " and ponies";
}

void	byConstPtr(std::string const *str)
{
	std::cout << *str << std::endl;
}

void	byRef(std::string& str)
{
	str += " and ponies";
}

void	byConstRef(std::string const & str)
{
	std::cout << str << std::endl;
}

int		main()
{
	std::string str = "i like butterflies";

	std::cout << str << std::endl;
	byPtr(&str);
	byConstPtr(&str);

	str = "I like otters";
	std::cout << str << std::endl;
	byRef(str);
	byConstRef(str);
}
