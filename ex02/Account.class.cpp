/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 09:16:15 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/04 09:29:38 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.class.hpp"
#include <iostream>

Account::Account( int initial_deposit) {
	_amount = initial_deposit;
}

Account::~Account() {
}

int		Account::getNbAccounts( void ) {
	return _nbAccounts;
}

int		main(void)
{
	Account entry(133);
	int		test;

	test = entry.getNbAccounts();
	std::cout << test << std::endl;
}
