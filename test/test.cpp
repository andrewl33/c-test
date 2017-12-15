#include <iostream>
#include "CTestTest.hpp"
#include "helperTest.hpp"
#include "testMethodTest.hpp"

int main() {
  /*******************************************************************
  *                             CTest.cpp
  * *****************************************************************/
  std::cout << "CTest.cpp" << std::endl;
  CTestTest();
  std::cout << "-----------------------------------------------------" << std::endl;

  /*******************************************************************
  *                            Helper.cpp
  * *****************************************************************/
  std::cout << "helper.cpp: is/Not" << std::endl;
  isTest();
  std::cout << "-----------------------------------------------------" << std::endl;

  std::cout << "helper.cpp: output " << std::endl;
  outputTest();
  std::cout << "-----------------------------------------------------" << std::endl;

  std::cout << "helper.cpp: test " << std::endl;
  testTest();
  std::cout << "-----------------------------------------------------" << std::endl;

  /*******************************************************************
  *                         Test Methods
  * *****************************************************************/
  std::cout << "Test Methods" << std::endl;
  testMethodTests();
  std::cout << "-----------------------------------------------------" << std::endl;

   return 0;
}