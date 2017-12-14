#include <initializer_list>
#include <iostream>
#include <string>
#include <vector>
#include "CTest.hpp"
#include "helper.hpp"

CTest::CTest() {
  std::cout << "There is a missing CTest label." << std::endl;
}

CTest::CTest(std::string className) {
  setClassName(className);
  // print className once
  output(CLASS_NAME, this->getClassName());
}
// getters and setters, probably uneccessary
void CTest::setClassName(std::string className) {
  _className = className;
}

std::string CTest::getClassName() {
  return _className;
}

// // used for a single is, without test() method
// void CTest::it(std::string methodName, std::string description, bool isExpected) {
//   // print methodName
//   output(METHOD, methodName);

//   // print expect line
//   output(EXPECT, isExpected, description);
// }

// void CTest::it(std::string methodName, std::initializer_list< std::unique_ptr<std::tuple<std::string, bool>> > testCase)
//   :_testCaseList(testCase) {
//   // print methodName
//   output(METHOD, methodName);
  
//   // prints list of tests
//   for(auto* t : testCase) {
//     output(EXPECT, std::get<bool>(t),std::get<std::string>(t))
//   }
// } 
