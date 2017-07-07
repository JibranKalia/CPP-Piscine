/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 08:31:38 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/03 11:05:14 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>

int main(int argc, char **argv) {
  std::locale loc;

  if (argc < 2)
    std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
  else {
    int i;
    for (i = 1; i < argc; ++i) {
      for (size_t j = 0; j < strlen(argv[i]); ++j)
        std::cout << std::toupper(argv[i][j], loc);
    }
    std::cout << std::endl;
  }
}
