#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

  sort(cars.begin(), cars.end());

  for (string car : cars) {
    cout << car << "\n";
  }
  
  return 0;
}
