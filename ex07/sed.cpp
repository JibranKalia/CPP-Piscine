/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 10:21:11 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/06 10:25:09 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>

void	displayUsage(std::string name)
{
	std::cout << "usage: " << name << " <filename> <string to replace> <string being replaced>" << std::endl;
	exit(0);
}

int		main(int argc, char **argv)
{
	if (argc != 4)
		displayUsage(argv[0]);
	return (0);
}
