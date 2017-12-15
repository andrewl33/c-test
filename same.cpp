#include <iostream>
#include <string>
#include <type_traits>
using namespace std;

template<typename T, typename U>
void equalTo(T a,U b) {
  cout << std::is_same<T,U>::value <<endl;
   
}
int main() {
  equalTo('a', "a");
  return 0;
}