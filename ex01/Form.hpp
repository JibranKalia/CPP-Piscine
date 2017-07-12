/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 17:39:24 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/11 17:55:44 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

class Form
{
	public:
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
	public:
		Form();
		Form(std::string name, int grade);
		~Form();
		Form(const Form &src);
		Form& operator=(const Form &src);
		std::string getName() const;
		int getGrade() const;
		void incGrade();
		void decGrade();
	private:
		const std::string _name;
		const int _grade;
		bool sign;
};

std::ostream& operator<<(std::ostream& out, const Bureaucrat& src);

#endif
