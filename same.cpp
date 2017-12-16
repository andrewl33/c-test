#include <iostream>

using namespace std;

void same (float a[2], float b) {
  cout << a <<"," << b << endl;
}

int main () {
  float s[] = {1,2};
  same(s, 2);
}