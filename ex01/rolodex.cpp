/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rolodex.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 10:16:36 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/04 08:59:26 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>

int		g_count = 0;
#define MAX 8

class Contact {
	public:
		void			AddInfo(void);
		void			PrintInfo(void);
		std::string 	GetFirstName(void);
		std::string 	GetLastName(void);
		std::string 	GetNickName(void);
		bool			GetStatus(void);

	private:
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

	std::cout << "Enter Login: ";
	std::getline(std::cin, this->login);

	std::cout << "Enter Postal Address: ";
	std::getline(std::cin, this->paddress);

	std::cout << "Enter Email Address: ";
	std::getline(std::cin, this->eaddress);

	std::cout << "Enter Phone Number: ";
	std::getline(std::cin, this->number);

	std::cout << "Enter Birthdate: ";
	std::getline(std::cin, this->date);

	std::cout << "Enter Favourite Meal: ";
	std::getline(std::cin, this->meal);

	std::cout << "Enter Underwear Color: ";
	std::getline(std::cin, this->color);

	std::cout << "Enter Darkest Secret: ";
	std::getline(std::cin, this->secret);

	++g_count;
}


void Contact::PrintInfo()
{
	std::cout << "first name: " << this->firstname << std::endl;
	std::cout << "last name: " << this->lastname << std::endl;
	std::cout << "nickname: " << this->nickname << std::endl;
	std::cout << "login: " << this->login << std::endl;
	std::cout << "postal adress: " << this->paddress << std::endl;
	std::cout << "email adress: " << this->eaddress << std::endl;
	std::cout << "phone number: " << this->number << std::endl;
	std::cout << "birthday date: " << this->date << std::endl;
	std::cout << "favorite meal: " << this->meal << std::endl;
	std::cout << "underwear color: " << this->color << std::endl;
	std::cout << "darkest secret: " << this->secret << std::endl;
}

bool Contact::GetStatus()
{
	return this->data;
}

std::string Contact::GetFirstName()
{
	return this->firstname;
}

std::string Contact::GetLastName()
{
	return this->lastname;
}

std::string Contact::GetNickName()
{
	return this->nickname;
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
