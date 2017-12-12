// doesn't pull name from file anymore
#include "CTest.hpp"

/*
testFile
    methodNameToTest
        "check" should return true if true
*/

CTest classToTest("Your class name");
classToTest.it("methodName", "should return true if true",
    expect(methodToTest(inputMaybe), closeTo(10000, .00001)));

// for negations
classToTest.it("methodName", "should return true if true",
    not(expect(methodToTest(inputMaybe), closeTo(10000, .00001))));