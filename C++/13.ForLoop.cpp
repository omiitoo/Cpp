#include <iostream>

using namespace std;

int main()
{
    for (int i=1; i<= 2; ++i) {
        cout << "Outer: " << i << "\n";
    

    for (int j = 1; j <= 3; ++j) {
        cout << "Inner: " << j << "\n";
    }
    }
    for (int l = 0; l < 5; l++) {
  cout << l << "\n";
}
    cout << "another" << "\n";
  for (int k = 0; k <= 10; k = k + 2) {
    cout << k << "\n";
  }
     cout << "another" << "\n";

    int myNumbers[5] = {10, 20, 30, 40, 50};
    for (int z : myNumbers) {
    cout << z << "\n";
  }
  
  return 0;
}
