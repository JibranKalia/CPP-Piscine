/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 21:47:53 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/06 21:50:11 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/stat.h>
#include <fstream>
#include <iostream>

void readWrite(std::istream &in) { std::cout << in.rdbuf(); }

int main(int argc, char **argv) {
  if (argc == 1) {
    readWrite(std::cin);
  } else {
    struct stat info;
    for (int i = 1; i < argc; i++) {
      std::string fileName(argv[i]);
      if (!fileName.compare("-")) {
        readWrite(std::cin);
      } else {
        std::ifstream inFile(fileName);
        if (inFile) {
          stat(argv[i], &info);
          if (S_ISDIR(info.st_mode)) {
            std::cout << "cat: " << fileName << ": Is a directory" << std::endl;
          } else
            readWrite(inFile);
        } else {
          if (errno == ENOENT)
            std::cout << "cat: " << fileName << ": No such file or directory"
                      << std::endl;
          else if (errno == EACCES)
            std::cout << "cat: " << fileName << ": Permission denied"
                      << std::endl;
        }
        inFile.close();
      }
    }
  }
  return 0;
}
