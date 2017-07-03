/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rolodex.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 10:16:36 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/03 15:24:00 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>

int		g_count = 0;
#define MAX 3

class Contact {
	public:
		void			AddInfo(void);
		void			PrintInfo(void);
		int				id;
		bool			data;
		std::string		firstname;
		std::string		lastname;
		std::string		nickname;
		std::string		login;
		std::string		paddress;
		std::string		eaddress;
		std::string		number;
		std::string		date;
		std::string		meal;
		std::string 	color;
		std::string		secret;
};


void Contact::AddInfo()
{
	this->data = true;

	std::cout << "Enter First Name: ";
	std::getline(std::cin, this->firstname);

	std::cout << "Enter Last Name: ";
	std::getline(std::cin, this->lastname);

	std::cout << "Enter Nick Name: ";
	std::getline(std::cin, this->nickname);

	/**
	std::cout << "Enter Login: " << std::endl;
	std::getline(std::cin, this->login);

	std::cout << "Enter Postal Address: " << std::endl;
	std::getline(std::cin, this->paddress);

	std::cout << "Enter Email Address: " << std::endl;
	std::getline(std::cin, this->eaddress);

	std::cout << "Enter Phone Number: " << std::endl;
	std::getline(std::cin, this->number);

	std::cout << "Enter Birthdate: " << std::endl;
	std::getline(std::cin, this->date);

	std::cout << "Enter Favourite Meal: " << std::endl;
	std::getline(std::cin, this->meal);

	std::cout << "Enter Underwear Color: " << std::endl;
	std::getline(std::cin, this->color);

	std::cout << "Enter Darkest Secret: " << std::endl;
	std::getline(std::cin, this->secret);
	**/

	++g_count;
}


void Contact::PrintInfo()
{
	std::cout << this->firstname << std::endl;
	std::cout << this->lastname << std::endl;
	std::cout << this->nickname << std::endl;
//	std::cout << this->login << std::endl;
//	std::cout << this->paddress << std::endl;
//	std::cout << this->eaddress << std::endl;
}

int		main()
{
	Contact person[MAX];

	while (1)
	{
		std::string		command;
		int				number;
		std::cout << "\nEnter Command: ADD / SEARCH / EXIT" << std::endl;
		std::getline(std::cin, command);
		if (command.compare(0, 3, "ADD") == 0)
		{
			if (g_count < MAX)
				person[g_count].AddInfo();
			else
				std::cout << "Have too many contacts" << std::endl;
		}
		else if (command.compare(0, 6, "SEARCH") == 0)
		{
			for (int i = 0; i < g_count; ++i)
			{
				std::cout << std::setw(10);
				std::cout << i << " | ";
				std::cout << person[i].firstname << " | ";
				std::cout << person[i].lastname << " | ";
				std::cout << person[i].nickname << std::endl;
			}
			std::cout << "Choose Index" << std::endl;
			std::cin >> command;
			std::stringstream(command) >> number;
			std::cin.ignore();
			if (number < 0 || number > g_count)
				std:: cout << "Index out of bounds" << std::endl;
			else
				person[number].PrintInfo();
		}
		else if (command.compare(0, 5, "EXIT") == 0)
			exit(EXIT_SUCCESS);
		else
			std::cout << "Command not recognized" << std::endl;
	}
}

/**
void Contact::SetFirstName(std::string tmp) {
	firstname = tmp;
}

std::string Contact::GetFirstName() const {
	return firstname;
}

int		main()
{
	Contact person;
	std::string tmp;

	std::cout << "Enter First Name : " << std::endl;
	std::cin >> tmp;
	person.SetFirstName(tmp);

	std::cout << "Enter Last Name : " << std::endl;
	std::cin >> person.lastname;

	std::cin.ignore();
	std::cout << "Enter Nickname: " << std::endl;
	std::getline(std::cin, person.nickname);

	std::cin.ignore();
	std::cout << "Enter Phone Number: " << std::endl;
	std::getline(std::cin, person.number);

	std::cout << "\n\nFirst Name:\t" << person.GetFirstName();
	std::cout << "\nLast Name:\t" << person.lastname;
	std::cout << "\nNick Name:\t" << person.nickname;
	std::cout << "\nPhone Number:\t" << person.number << std::endl;


	std::cout << "Enter the Number: " << std::endl;
	std::cin >> person.number;

	std::cin.ignore();
	std::cout << "Enter Nickname: ";
	std::getline(std::cin, person.nickname);

	std::cout << person.firstname << ": " << person.nickname << std::endl;
	return (0);
}
**/
