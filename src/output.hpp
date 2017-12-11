#ifndef OUTPUT_HPP
#define OUTPUT_HPP

#include <string>

enum level { FILE_NAME = 3, METHOD = 5, EXPECT = 7 };

void output(level, bool, std::string);

#endif