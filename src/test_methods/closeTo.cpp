/*******************************************************************
* Takes value to test, a method that returns the value expected
* and then provide an interval it is expected to be in
* *****************************************************************/
#include "closeTo.hpp"

bool closeTo(int valueToTest, int method, double interval) {
  double a = (double)method - ((double)valueToTest-interval);
  double b = (double)method - ((double)valueToTest+interval);
  return (a*b) <= 0;
}

bool closeTo(float valueToTest, float method, double interval) {
  double a = (double)method - ((double)valueToTest-interval);
  double b = (double)method - ((double)valueToTest+interval);
  return (a*b) <= 0;
}

bool closeTo(double valueToTest, double method, double interval) {
  double a = (double)method - ((double)valueToTest-interval);
  double b = (double)method - ((double)valueToTest+interval);
  return (a*b) <= 0;
}
