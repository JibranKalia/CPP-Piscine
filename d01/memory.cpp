/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memory.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 14:06:12 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/04 14:18:16 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class Student
{
	private:
		std::string _login;

	public:
	Student() : _login("ldefault")
	{
		std::cout << "Student: " << this->_login << " is born" << std::endl;
	}

	~Student()
	{
		std::cout << "Student " << this->_login << " died" << std::endl;
	}
};

int	main()
{
	Student		bob = Student();
	Student*	jim = new Student[42];


	delete [] jim;
	return (0);
}
