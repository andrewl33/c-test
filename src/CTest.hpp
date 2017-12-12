#ifndef CTEST_HPP
#define CTEST_HPP

#include <string>
#include "equalTo.hpp"
#include "helper.hpp"

class CTest {
private:
  std::string _className = "";
public:
  CTest();
  CTest(std::string);

  void setClassName(std::string);
  std::string getClassName();

  void it(std::string, std::string, bool);
};

#endif