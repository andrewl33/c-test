#include <iostream>
#include "helperTest.hpp"

int main() {
  std::cout << "helper.cpp: is/Not" << std::endl;
  isTest();
  std::cout << "-----------------------------------------------------" << std::endl;

  std::cout << "helper.cpp: output " << std::endl;
  outputTest();
  std::cout << "-----------------------------------------------------" << std::endl;

  std::cout << "helper.cpp: test " << std::endl;
  testTest();
  std::cout << "-----------------------------------------------------" << std::endl;
  return 0;
}