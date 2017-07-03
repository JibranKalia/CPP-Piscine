/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rolodex.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 10:16:36 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/03 11:11:22 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Contact {
	public:
		std::string		firstname;
		std::string		lastname;
		std::string		nickname;
		std::string		login;
		std::string		paddress;
		std::string		eaddress;
		std::string		meal;
		std::string		color;
		std::string		secret;
		int				number;
		int				date;

};

int		main()
{
	Contact person;

	std::cout << "Enter the First Name : ";
	std::cin >> person.firstname;

	std::cout << "Enter the Number: ";
	std::cin >> person.number;

	std::cout << person.firstname << ": " << person.number << std::endl;
	return (0);
}
