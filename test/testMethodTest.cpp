#include <iostream>
#include <string>

#include "testMethodTest.hpp"
#include "../src/test_methods/equalTo.hpp"

// equalTo() test
void equalToTest() { 
  std::cout << (equalTo(1,1) == true ? "Passed1" : "Failed1") << std::endl;
  std::cout << (equalTo(1.0,2.0) == false ? "Passed2" : "Failed2") << std::endl;
  std::cout << (equalTo(1,1) == true ? "Passed3" : "Failed3") << std::endl;
  std::cout << (equalTo('d','c') == false ? "Passed4" : "Failed4") << std::endl;
  std::cout << (equalTo(1,-1) == false ? "Passed5" : "Failed5" )<< std::endl;
  std::cout << (equalTo(1,1312312313) == false ? "Passed6" : "Failed6") << std::endl;
};

// main method
void testMethodTests() {
  equalToTest();
};