#include <iostream>
#include <set>
using namespace std;

int main() {

    set<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};


    for (string car : cars) {
        cout << car << "\n";
    }

    cout << "\n";
    set<int> numbers = {1, 7, 3, 2, 5, 9};

    for (int num : numbers) {
        cout << num << "\n";
  }
    cout << "\n";
    set<int, greater<int>> numberss = {1, 7, 3, 2, 5, 9};

    for (int num : numberss) {
        cout << num << "\n";
    }
    cout << "\n";

  return 0;
}
