#ifndef EQUALTO_HPP
#define EQUALTO_HPP

#include <string>

// checks to see that the values equal each other 
bool equalTo(short int a, short int b);
bool equalTo(unsigned short int a, unsigned short int b);
bool equalTo(int a,int b);
bool equalTo(unsigned int a, unsigned int b);
bool equalTo( long int a, long int b);
bool equalTo(unsigned long int a, unsigned long int b);
bool equalTo(long long int a, long long int b);
bool equalTo(unsigned long long int a, unsigned long long int b);
bool equalTo(float a,float b);
bool equalTo(double a, double b);
bool equalTo(long double a, long double b);
bool equalTo(char a,char b);
bool equalTo(std::string a,std::string b);

#endif