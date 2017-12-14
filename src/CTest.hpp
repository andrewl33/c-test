#ifndef CTEST_HPP
#define CTEST_HPP

#include <string>
#include <tuple>
#include <vector>
#include "equalTo.hpp"
#include "helper.hpp"


#include <iostream>

class CTest {
private:
  std::string _className = "";
  std::vector< std::tuple<std::string, bool> > _testCaseList;
  void pushTestCase() {}
public:
  CTest();
  CTest(std::string);

  void setClassName(std::string);
  std::string getClassName();

  void it(std::string, std::string, bool);

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

  // testing for a single case
  void pushTestCase(std::string methodName, bool isOk) {
    _testCaseList.push_back(make_tuple(methodName, isOk));
  }
};

#endif