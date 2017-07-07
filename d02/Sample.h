/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 09:27:32 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/06 09:29:22 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_H
#define SAMPLE_CLASS_H

class Sample {

	public:
		Sample( void );
		~Sample( void );

		void bar( char const c ) const;
		void bar( int const n ) const;
		void bar( float const z ) const;
		void bar( Sample const & i ) const;
}

#endif
