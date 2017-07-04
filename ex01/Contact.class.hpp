/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 09:02:04 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/04 09:02:42 by jkalia           ###   ########.fr       */
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
