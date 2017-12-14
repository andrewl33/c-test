#include <iostream>
#include <string>
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

// getters and setters
void CTest::setClassName(std::string className) {
  _className = className;
}

std::string CTest::getClassName() {
  return _className;
}

