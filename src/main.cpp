#include "CTest.hpp"
#include <iostream>
#include <string>

int methodToTest(int a) {
  return a;
}

int main() {
  CTest classToTest("ClassName");
  classToTest.it("methodName", 
      "should return true if true",
      is(equalTo(123, methodToTest(123)))
    );
  classToTest.it("methodName2", 
    test(
      "wow",
      is(equalTo(123, methodToTest(123)))
    ),
    test(
      "same",
      is(equalTo(124, methodToTest(123)))
    )  
    );  
  return 0;
}