/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rolodex.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 10:16:36 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/03 11:36:58 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

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
		std::string		number;
		int				date;

};

int		main()
{
	Contact person;
	
	std::cout << "Enter First Name : " << std::endl;
	std::cin >> person.firstname;

	std::cout << "Enter Last Name : " << std::endl;
	std::cin >> person.lastname;

	std::cin.ignore();
	std::cout << "Enter Nickname: " << std::endl;
	std::getline(std::cin, person.nickname);

	std::cin.ignore();
	std::cout << "Enter Phone Number: " << std::endl;
	std::getline(std::cin, person.number);

	std::cout << "\n\nFirst Name:\t" << person.firstname;
	std::cout << "\nLast Name:\t" << person.lastname;
	std::cout << "\nNick Name:\t" << person.nickname;
	std::cout << "\nPhone Number:\t" << person.number << std::endl;

	/**

	std::cout << "Enter the Number: " << std::endl;
	std::cin >> person.number;

	std::cin.ignore();
	std::cout << "Enter Nickname: ";
	std::getline(std::cin, person.nickname);

	std::cout << person.firstname << ": " << person.nickname << std::endl;
	**/
	return (0);
}
