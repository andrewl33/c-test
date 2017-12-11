#include <iomanip>
#include <iostream>
#include "output.hpp"

// outputs results of tests to console
void output(level l, bool isCheck, std::string statement) {  
  const std::string CHECK_MARK = "\u2713";
  const std::string CROSS_MARK = "\u2717";
  
  // print out to the console
  std::cout << std::setw(l) << (isCheck ? CHECK_MARK : CROSS_MARK) << " " << statement << std::endl;
}