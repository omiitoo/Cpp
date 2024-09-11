#include <iostream>
#include <string>
using namespace std;

void myFunction(string fname) {
  cout << fname << " Refsnes\n";
}

int main() {
  myFunction("Yumer");
  myFunction("Mustafa");
  myFunction("Yumi");
  return 0;
}
