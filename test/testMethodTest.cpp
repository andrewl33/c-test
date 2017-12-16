/*******************************************************************
*  Houses all tests for test_methods
* *****************************************************************/
#include <iostream>
#include <string>

#include "testMethodTest.hpp"
#include "../src/test_methods/closeTo.hpp"
#include "../src/test_methods/equalTo.hpp"
#include "../src/test_methods/greaterThan.hpp"
#include "../src/test_methods/lessThan.hpp"
#include "../src/test_methods/within.hpp"

// closeTo() test
void closeToTest() {
  std::cout << (closeTo(1, 1, 0) == true ? "Passed1" : "Failed1") << std::endl;
  std::cout << (closeTo(1.0, 2.0, .9) == false ? "Passed2" : "Failed2") << std::endl;
  std::cout << (closeTo(1.123123123, 1.123123123, .0000001) == true ? "Passed3" : "Failed3") << std::endl;
  std::cout << (closeTo(12123,1123123, 10000000) == true ? "Passed4" : "Failed4") << std::endl;
  std::cout << (closeTo(1,-1, 1) == false ? "Passed5" : "Failed5" ) << std::endl;
  std::cout << (closeTo(1,2,.9) == false ? "Passed6" : "Failed6") << std::endl;
}

// equalTo() test
void equalToTest() { 
  std::cout << (equalTo(1,1) == true ? "Passed1" : "Failed1") << std::endl;
  std::cout << (equalTo(1.0,2.0) == false ? "Passed2" : "Failed2") << std::endl;
  std::cout << (equalTo(1,1) == true ? "Passed3" : "Failed3") << std::endl;
  std::cout << (equalTo('d','c') == false ? "Passed4" : "Failed4") << std::endl;
  std::cout << (equalTo(1,-1) == false ? "Passed5" : "Failed5") << std::endl;
  std::cout << (equalTo(1,1312312313) == false ? "Passed6" : "Failed6") << std::endl;
};

// greaterThan() test
void greaterThanTest() { 
  std::cout << (greaterThan(2,3) == true ? "Passed1" : "Failed1") << std::endl;
  std::cout << (greaterThan(-1,1) == true ? "Passed2" : "Failed2") << std::endl;
  std::cout << (greaterThan(1,1231231231) == true ? "Passed3" : "Failed3") << std::endl;
  std::cout << (greaterThan(1,1) == false ? "Passed4" : "Failed4") << std::endl;
  std::cout << (greaterThan(1231,1) == false ? "Passed5" : "Failed5" ) << std::endl;
  std::cout << (greaterThan(1,-1312312313) == false ? "Passed6" : "Failed6") << std::endl;
};

// lessThan() test
void lessThanTest() { 
  std::cout << (lessThan(2,3) == false ? "Passed1" : "Failed1") << std::endl;
  std::cout << (lessThan(-1,1) == false ? "Passed2" : "Failed2") << std::endl;
  std::cout << (lessThan(1,1231231231) == false ? "Passed3" : "Failed3") << std::endl;
  std::cout << (lessThan(1,1) == false ? "Passed4" : "Failed4") << std::endl;
  std::cout << (lessThan(1231,1) == true ? "Passed5" : "Failed5" ) << std::endl;
  std::cout << (lessThan(1,-1312312313) == true ? "Passed6" : "Failed6") << std::endl;
};

// within() test
void withinTest() { 
  int a[2] = {1,2};
  long int b[2] = {12348923489123,123123123123};
  float c[2] = {123.123123, 113.123123};
  double d[2] = {123.12312312431234, 155.123123891234};
  double e[2] = {-1.122231231, 1.12381298};

  std::cout << (within(a,3) == false ? "Passed1" : "Failed1") << std::endl;
  std::cout << (within(b, 1000) == false ? "Passed2" : "Failed2") << std::endl;
  std::cout << (within(c, -1) == false ? "Passed3" : "Failed3") << std::endl;
  std::cout << (within(d,157) == false ? "Passed4" : "Failed4") << std::endl;
  std::cout << (within(e,0) == true ? "Passed5" : "Failed5") << std::endl;
  std::cout << (within(d,134) == true ? "Passed6" : "Failed6") << std::endl;
};

// main method
void testMethodTests() {
  std::cout << "closeToTest()" << std::endl;
  closeToTest();
  std::cout << "equalToTest()" << std::endl;
  equalToTest();
  std::cout << "greaterThanTest()" << std::endl;
  greaterThanTest();
  std::cout << "lessThanTest()" << std::endl;
  lessThanTest();
  std::cout << "withinTest()" << std::endl;
  withinTest();
};