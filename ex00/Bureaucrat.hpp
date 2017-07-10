/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 12:02:38 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/10 12:42:24 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>

class Bureaucrat {
	public:
		Bureaucrat(std::string inname, int ingrade);
		~Bureaucrat();
		Bureaucrat(const Bureaucrat &src);
		Bureaucrat& operator=(const Bureaucrat &src);
		std::string getName() const;
		//int getGrade() const;
	private:
		int				  _grade;
		const std::string _name;
};

//std::ostream& operator<<(std::ostream& out, const Bureaucrat& src)

#endif
