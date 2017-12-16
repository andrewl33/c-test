#include <iostream>

using namespace std;

void same (float a, float b) {
  cout << a <<"," << b << endl;
}

int main () {
  same(1.0, 2);
  same(1.2,123123);
  same(1000,123123123);
}