// doesn't pull name from file anymore
#include "CTest.hpp"

/*
testFile
    methodNameToTest
        "check" should return true if true
*/

CTest classToTest("Your class name");
classToTest.it(
    "methodName",
    test(
        "should return true if true",
        is(closeTo(10000, .00001, methodToTest(inputMaybe)))
    ),
    test(
        "should return true if true",
        is(equalTo(10000, methodToTest(inputMaybe)))
    )
    );

// for negations
classToTest.it("methodName", "should return true if true",
    not(closeTo(10000, .00001, methodToTest(someInputValue))));
