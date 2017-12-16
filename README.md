# CTest
Small assertion library for C++.

## Usage

```C++
#include "CTest.hpp"
#include <iostream>
#include <string>

int methodToTest(int a) {
  return a;
}

int main() {
  // Put classname when object is created
  CTest classToTest("ClassName");

  // Shorthand, single test per method
  classToTest.it("methodName", 
    "should return true if true",
    is(equalTo(123, methodToTest(123)))
  );

  // Handle multiple tests by wrapping in test()
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
```
Console out:
```sh
ClassName
   methodName
     ✓ should return true if true
   methodName2
     ✓ method to test should return the same number
     ✓ should be greater than 100
     ✓ should be less than 124
```

### Getting started
CTest uses a single object per class, and the assertions normally written:
```C++
Test.it("method_name", 
  test( 
    "should be something"
    <testing expression>
  )
);
```
or
```C++
Test.it("method_name", "should be something", <testing expression>)
);
```
### Linking your test files
Include ```"src/CTest.hpp"``` to your test file.
Then add your test file to the Makefile under ```FILES_TO_TEST```.

### General methods

First, start by calling the testclass ```CTest``` with your class name.

Example:
```C++
CTest TestClass("SquareRoot");
```

Then, use ```it(method_name, message, <testing expression>)``` to run method tests.

Example (single): 
```C++
TestClass.it("doublesNumber()", "should double the number", is(equalTo(4), doublesNumber(2)));
```
To use multiple tests, wrap your ```message``` and ```<testing expression>``` with ```test()```.

Example (mutiple tests): 
```C++
TestClass.it(
  "doublesNumber()", 
  test(
    "should double the number", 
    is(equalTo(4, doublesNumber(2)))
  );
```

Wrap all comparisons in ```is()``` or ```isNot()```.

### Comparisons
The general format in the is/isNot statement is:
```C++
comparison(number_to_test_against, method_to_test_against(inputValue), options);
```
where options are comparison-specific.

#### closeTo()
Checks that the returned value is close to the test value
```C++
closeTo(2, doubleNumber(1));
```

#### equalTo()
Checks that the returned value is equal to the test value
```C++
equalTo(2, doubleNumber(1));
```
#### greaterThan()
Checks that the returned value is greater than the test value
```C++
greaterThan(-100, doubleNumber(1));
```
#### lessThan()
Checks that the returned value is less than the test value
```C++
lessThan(10000, doubleNumber(1));
```
#### within()
Checks that the returned value is within the two value test array
```C++
int testArray[2] = {100,1000}
lessThan(testArray, doubleNumber(100));
```