#ifndef EXPECT_HPP
#define EXPECT_HPP
#include <string>

enum level { CLASS_NAME = 0, METHOD = 3, EXPECT = 5 };
// passes the same value, used for easier reading
bool is(bool);
bool isNot(bool);
// console out formatter
void output(level, std::string);
void output(level, bool, std::string);


#endif