/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 09:02:19 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/04 09:32:36 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

int		g_count = 0;

void Contact::AddInfo()
{
	this->data = true;

	std::cout << "Enter First Name: ";
	std::getline(std::cin, firstname);

	std::cout << "Enter Last Name: ";
	std::getline(std::cin, lastname);

	std::cout << "Enter Nick Name: ";
	std::getline(std::cin, nickname);

	std::cout << "Enter Login: ";
	std::getline(std::cin, login);

	std::cout << "Enter Postal Address: ";
	std::getline(std::cin, paddress);

	std::cout << "Enter Email Address: ";
	std::getline(std::cin, eaddress);

	std::cout << "Enter Phone Number: ";
	std::getline(std::cin, number);

	std::cout << "Enter Birthdate: ";
	std::getline(std::cin, date);

	std::cout << "Enter Favourite Meal: ";
	std::getline(std::cin, meal);

	std::cout << "Enter Underwear Color: ";
	std::getline(std::cin, color);

	std::cout << "Enter Darkest Secret: ";
	std::getline(std::cin, secret);

	++g_count;
}


void Contact::PrintInfo() const
{
	std::cout << "first name: " << firstname << std::endl;
	std::cout << "last name: " << lastname << std::endl;
	std::cout << "nickname: " << nickname << std::endl;
	std::cout << "login: " << login << std::endl;
	std::cout << "postal adress: " << paddress << std::endl;
	std::cout << "email adress: " << eaddress << std::endl;
	std::cout << "phone number: " << number << std::endl;
	std::cout << "birthday date: " << date << std::endl;
	std::cout << "favorite meal: " << meal << std::endl;
	std::cout << "underwear color: " << color << std::endl;
	std::cout << "darkest secret: " << secret << std::endl;
}

bool Contact::GetStatus() const
{
	return data;
}

std::string Contact::GetFirstName() const
{
	return firstname;
}

std::string Contact::GetLastName() const
{
	return lastname;
}

std::string Contact::GetNickName() const
{
	return nickname;
}

void PrintFormat(std::string tmp)
{
	if (tmp.length() > 10)
		std::cout << std::right << std::setw(10) << tmp.substr(0, 9).append(".");
	else
		std::cout << std::right << std::setw(10) << tmp.substr(0, 10);
}

void SearchInfo(Contact *person)
{
	std::string		command;
	std::string		tmp;
	int				number;

	std::cout << std::right << std::setw(10) << "index" << " | ";
	std::cout << std::right << std::setw(10) << "first name" << " | ";
	std::cout << std::right << std::setw(10) << "last name" << " | ";
	std::cout << std::right << std::setw(10) << "nickname" << std::endl;
	int i = 0;
	while (i < 8)
	{
		if (person[i].GetStatus() == false)
			break;
		std::cout << std::setw(10);
		std::cout << i << " | ";
		PrintFormat(person[i].GetFirstName());
		std::cout << " | ";
		PrintFormat(person[i].GetLastName());
		std::cout << " | ";
		PrintFormat(person[i].GetNickName());
		std::cout << std::endl;
		++i;
	}
	std::cout << "Choose Index" << std::endl;
	std::cin >> command;
	std::stringstream(command) >> number;
	std::cin.ignore();
	if (number < 0 || number > (g_count - 1))
		std:: cout << "Index out of bounds" << std::endl;
	else
		person[number].PrintInfo();

}

int		main()
{
	Contact person[MAX];

	while (1)
	{
		std::string		command;
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
			SearchInfo(person);
		}
		else if (command.compare(0, 5, "EXIT") == 0)
			exit(EXIT_SUCCESS);
		else
			std::cout << "Command not recognized" << std::endl;
	}
}
