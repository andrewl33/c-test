#include <iostream>
#include <string>
#include <tuple>
#include "CTestTest.hpp"
#include "../src/CTest.hpp"


void CTestTest() {
  // test empty class
  std::string emptyClassMessage = "There is a missing CTest label.";
  std::cout << "Test empty class, should print \"" << emptyClassMessage << "\"" << std::endl;
  CTest emptyClass{}; // most vexing parse

  // test it function
  // test empty
  CTest emptyItArgs("EmptyArgs");
  emptyItArgs.it(
    "Method without args"
  );
  // test one
  CTest oneArg("OneArgWithNoTuple");
  oneArg.it(
    "methodShorthand1",
    "should return true if true",
    true
  );
  oneArg.it(
    "methodShorthand2",
    "should return false if false",
    false
  );
  // test many
  CTest manyArgs("ManyArgs");
  manyArgs.it("methodWith4TestsAllFalse",
    test(
      "1",
      false
    ),
    test(
      "2",
      false
    ),
    test(
      "3",
      false
    ),
    test(
      "4",
      false
    )
  );
  manyArgs.it("methodWith11TestsAllTrue",
    test(
      "1",
      true
    ),
    test(
      "2",
      true
    ),
    test(
      "3",
      true
    ),
    test(
      "4",
      true
    ),
    test(
      "5",
      true
    ),
    test(
      "6",
      true
    ),
    test(
      "7",
      true
    ),
    test(
      "8",
      true
    ),
    test(
      "9",
      true
    ),
    test(
      "10",
      true
    ),
    test(
      "11",
      true
    )
  );
}