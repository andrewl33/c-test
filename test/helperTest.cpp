#include <iostream>
#include <string>
#include <tuple>
#include "helperTest.hpp"
#include "../src/helper.hpp"

/*******************************************************************
*                            is/isNot
* *****************************************************************/
void isTest() {
  std::cout << "Should be true: "  << is(true) << std::endl;
  std::cout << "Should be false: " << is(false) << std::endl;
  std::cout << "Should be false: " << isNot(true) << std::endl;
  std::cout << "Should be true: "  << isNot(false) << std::endl;
}
/*******************************************************************
*                             Output
* *****************************************************************/

struct TestItem {
  level l;
  std::string statement;
  bool isCheck;
};

TestItem trueTestArray[] = {
  { CLASS_NAME, "This should be level one"},
  { METHOD, "This should be level two"},
  { EXPECT, "This should be a check on level three", true}
};

TestItem falseTestArray[] = {
  { CLASS_NAME, "This should level one"},
  { METHOD, "This should be level two"},
  { EXPECT, "This should be a cross on level three", false}
};


void outputTest() {
  std::cout << "OutputTest: Check marks" << std::endl;
  for (int i = 0; i < 2; i++) {
    output(trueTestArray[i].l, trueTestArray[i].statement);
  }
  output(trueTestArray[2].l, trueTestArray[2].isCheck, trueTestArray[2].statement);

  std::cout << "OutputTest: Cross marks" << std::endl;
  for (int i = 0; i < 2; i++) {
    output(falseTestArray[i].l, falseTestArray[i].statement);
  }
  output(falseTestArray[2].l, falseTestArray[2].isCheck, falseTestArray[2].statement);
}

/*******************************************************************
*                             test
* *****************************************************************/
struct TupleInputs {
  std::string s;
  bool isExpected;
};

TupleInputs testIn[] = {
  {"asdfasdfas", true},
  {"qwev", false}
};

std::tuple<std::string, bool> testOut[] = {
  std::make_tuple("asdfasdfas", true),
  std::make_tuple("qwev", false)
};

void testTest() {
  for (int i = 0; i < 2; i++) {
    std::tuple<std::string, bool> testVal = test(testIn[i].s, testIn[i].isExpected);
    
    // vscode return errors, should be fine
    if (std::get<0>(testVal) == std::get<0>(testOut[i]) && std::get<1>(testVal) == std::get<1>(testOut[i])) {
      std::cout << "Passed" << std::endl;
    }
    else {
      std::cout << "Failed" << std::endl;
    }
  }
}