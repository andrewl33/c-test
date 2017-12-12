#include <iostream>
#include "outputTest.hpp"
#include "../src/helper.hpp"

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