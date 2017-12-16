/*******************************************************************
*   within two numbers
* *****************************************************************/
// "Method name" is within "number1, number2", "method to test"
#include "within.hpp"

bool within(int a[2], double b) {return ((double)a[0] - b)*((double)a[1] - b) <= 0;}
bool within(long int a[2], long double b) {return ((double)a[0] - b)*((long double)a[1] - b) <= 0;}
bool within(float a[2], double b) {return ((double)a[0] - b)*((double)a[1] - b) <= 0;}
bool within(double a[2], double b) {return ((double)a[0] - b)*((double)a[1] - b) <= 0;}
bool within(long double a[2], long double b) {return ((long double)a[0] - b)*((long double)a[1] - b) <= 0;}