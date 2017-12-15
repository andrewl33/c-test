/*******************************************************************
*  Strict equal
* *****************************************************************/
#include <string> 
#include "equalTo.hpp"

bool equalTo(short int a, short int b) {return a==b;}
bool equalTo(unsigned short int a, unsigned short int b) {return a==b;}
bool equalTo(int a,int b) {return a==b;}
bool equalTo(unsigned int a, unsigned int b) {return a==b;}
bool equalTo(long int a, long int b) {return a==b;}
bool equalTo(unsigned long int a, unsigned long int b) {return a==b;}
bool equalTo(long long int a, long long int b) {return a==b;}
bool equalTo(unsigned long long int a, unsigned long long int b) {return a==b;}
bool equalTo(float a,float b) {return a==b;}
bool equalTo(double a, double b) {return a==b;}
bool equalTo(long double a, long double b) {return a==b;}
bool equalTo(char a,char b) {return a==b;}
bool equalTo(std::string a,std::string b) {return a==b;}