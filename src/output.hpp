#ifndef OUTPUT_HPP
#define OUTPUT_HPP

#include <string>

enum level { CLASS_NAME = 0, METHOD = 3, EXPECT = 5 };

void output(level, std::string);

void output(level, bool, std::string);

#endif