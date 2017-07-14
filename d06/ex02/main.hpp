/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 18:29:12 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/12 18:36:25 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_HPP
#define MAIN_HPP

class Base
{
	public:
		virtual ~Base();
};

class A : public Base
{};

class B : public Base
{};

class C : public Base
{};
#endif
