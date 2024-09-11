#include <iostream>
using namespace std;

// Global variable x
int x = 5;

void myFunction() {

  int x = 22;
  
  cout << x << "\n";  
}

int main() {
  myFunction();
  
  cout << x;  
  return 0;
}
