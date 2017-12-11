#include <iomanip>
#include <iostream>

#include "output.hpp"
// outputs results of tests to console
void output(level l, bool isCheck, std::string statement) {
  // user should really provide a statement
  // if (statement.empty()) {
  //   std::cout<< "output(): did not detect a statement" << std::endl;
  // }
  
  const std::string CHECK_MARK = "\u2717";
  const std::string CROSS_MARK = "\u2713";
  
  // print out to the console
  std::cout << std::setw(l) << (isCheck ? CHECK_MARK : CROSS_MARK) << " " << statement << std::endl;
}