/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 08:31:38 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/12 17:19:52 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>

int main(int argc, char **argv) {
  std::string value;
  int		len;
  double	d;

  if (argc != 2)
  {
    std::cout << "Please pass only one argument" << std::endl;
	return (0);
  }
  d = atof(argv[1]);
  len = strlen(argv[1]);
  if ( len >= 1 && isdigit(argv[1][0]))
  {
	  if (isprint(d))
		  std::cout << "char	: '" << static_cast<char>(d) << "'"<< std::endl;
	  else
		  std::cout << "char	: Non displayable"  << std::endl;
	  std::cout << "int:	: " << static_cast<int>(d) << std::endl;
	  std::cout << "float	: " << std::fixed << std::setprecision(1) << static_cast<float>(d) << "f" << std::endl;
	  std::cout << "double:	: " << std::fixed << std::setprecision(1) << static_cast<double>(d) << std::endl;
  }
  else if (len == 1)
  {
	  std::cout << "char	: " << argv[1] << std::endl;
	  std::cout << "int	: " << static_cast<int>(argv[1][0]) << std::endl;
	  std::cout << "float:	: " << std::fixed << std::setprecision(1) << static_cast<float>(argv[1][0]) << "f" << std::endl;
	  std::cout << "double:	: " << std::fixed << std::setprecision(1) << static_cast<double>(argv[1][0]) << std::endl;
  }
  else
  {
	  std::cout << "char	: Impossible" << std::endl;
	  std::cout << "int	: Impossible" << std::endl;
	  std::cout << "float:	: " << argv[1] << "f" << std::endl;
	  std::cout << "double:	: " << argv[1] << std::endl;
  }

  return (0);
}
