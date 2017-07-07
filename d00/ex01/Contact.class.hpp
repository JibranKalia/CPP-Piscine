/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 09:02:04 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/04 09:09:11 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>

#define MAX 8

class Contact {
	public:
		void			AddInfo(void);
		void			PrintInfo(void) const;
		std::string 	GetFirstName(void) const;
		std::string 	GetLastName(void) const;
		std::string 	GetNickName(void) const;
		bool			GetStatus(void) const;

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
