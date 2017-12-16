#include "../src/CTest.hpp"
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
      "method to test should return the same number",
      is(closeTo(123, methodToTest(123), .0001))
    ),
    test(
      "should be greater than 100",
      is(greaterThan(100, methodToTest(123)))
    ),
     test(
      "should be less than 124",
      is(lessThan(124, methodToTest(123)))
    )    
  );  
  return 0;
}