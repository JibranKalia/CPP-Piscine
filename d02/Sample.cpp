/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 09:35:37 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/06 09:38:35 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


class Sample {

	public:
		Sample( void );
		~Sample( void );

		void bar( char const c ) const;
		void bar( int const n ) const;
		void bar( float const z ) const;
		void bar( Sample const & i ) const;
}

/**
 * 1 + 1 (infix notation)
 * + 1 1 (prefix notation / Functional rotatoin)
 * 1 1 + (postfix notation)
 *
 * 1.+ ( 1 )
 * +( 1, 1 )
 *
