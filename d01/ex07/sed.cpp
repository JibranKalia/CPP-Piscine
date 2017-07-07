/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 10:21:11 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/06 21:19:40 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>

void lineRead(std::ifstream& inFile, std::ofstream& outFile,
              std::string& toReplace, std::string& toReplaceWith) {
  std::string writeLine;
  std::string readLine;
  size_t start;
  while (getline(inFile, readLine)) {
    start = readLine.find(toReplace);
    writeLine = readLine;
    if (start != std::string::npos) {
      writeLine.replace(start, toReplaceWith.length(), toReplaceWith);
    }
    outFile << writeLine << std::endl;
  }
}

void sed(std::string filename, std::string s1, std::string s2) {
  std::string line;
  std::string outname = filename + ".replace";
  std::ifstream inFile;
  std::ofstream outFile;

  inFile.open(filename, std::ios::in);
  if (inFile.fail()) {
    std::cerr << filename << " Open Failed" << std::endl;
    return;
  }
  outFile.open(outname, std::ios::out | std::ios::trunc);
  if (outFile.fail()) {
    std::cerr << outname << "File Open Failed" << std::endl;
    return;
  }
  lineRead(inFile, outFile, s1, s2);
  inFile.close();
  outFile.close();
}

void displayUsage(std::string name) {
  std::cout << "usage: " << name
            << " <filename> <string to replace> <string being replaced>"
            << std::endl;
  exit(0);
}

int main(int argc, char** argv) {
  if (argc == 4)
    sed(std::string(argv[1]), std::string(argv[2]), std::string(argv[3]));
  else
    displayUsage(argv[0]);
  return 0;
}
