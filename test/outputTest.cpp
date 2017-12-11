#include <iostream>
#include "outputTest.hpp"
#include "../src/output.hpp"

struct TestItem {
  level l;
  bool isCheck;
  std::string statement;
};

TestItem trueTestArray[] = {
  { FILE_NAME, true, "This should be a check on level one"},
  { METHOD, true, "This should be a check on level two"},
  { EXPECT, true, "This should be a check on level three"}
};

TestItem falseTestArray[] = {
  { FILE_NAME, false, "This should be a cross on level one"},
  { METHOD, false, "This should be a cross on level two"},
  { EXPECT, false, "This should be a cross on level three"}
};


void outputTest() {
  std::cout << "OutputTest: Check marks" << std::endl;
  for (int i = 0; i < 3; i++) {
    output(trueTestArray[i].l, trueTestArray[i].isCheck, trueTestArray[i].statement);
  }

  std::cout << "OutputTest: Cross marks" << std::endl;
  for (int i = 0; i < 3; i++) {
    output(falseTestArray[i].l, falseTestArray[i].isCheck, falseTestArray[i].statement);
  }
}