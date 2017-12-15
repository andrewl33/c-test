#ifndef CTEST_HPP
#define CTEST_HPP

#include <string>
#include <tuple>
#include <vector>
#include "test_methods/closeTo.hpp"
#include "test_methods/equalTo.hpp"
#include "helper.hpp"


#include <iostream>

class CTest {
private:
  std::string _className = "";
  std::vector< std::tuple<std::string, bool> > _testCaseList; // holds testCases

  void setClassName(std::string);
  std::string getClassName();

  void pushTestCase() {} // ends the parsing of testCases
  
public:
  CTest();
  CTest(std::string);

/**********************************************************************************
*    it() is used to describe a single method and collect all its test cases
* ********************************************************************************/
  template<typename... T>
  void it(std::string methodName, T... testCases) {
    // print methodName
    output(METHOD, methodName);
    
    // parses testCases and put them in _testCaseList
    pushTestCase(testCases...);

    // iterate through _testCaseList
    for (auto const& testCase: _testCaseList) {
      output(EXPECT, std::get<1>(testCase), std::get<0>(testCase));
    }

    // clear
    _testCaseList.clear();
  } 

  // unpack testCases pack
  template<typename... T>
  void pushTestCase(std::tuple<std::string, bool> testCase,T... testCases) {
    _testCaseList.push_back(testCase);
    this->pushTestCase(testCases...);
  }

  // it() with only one test cases
  // doesn't use the test() method
  void pushTestCase(std::string methodName, bool isOk) {
    _testCaseList.push_back(make_tuple(methodName, isOk));
  }
};

#endif