#include <iostream>
#include <string>
#include <vector>
#include <list>

using namespace std;


int main(){
    list<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

    for (string car : cars) {
    cout << car << "\n";
  }
    
    cars.front() = "Opel";
    cars.back() = "Toyota";

    cout << "\n";
    cout << cars.front() << "\n";
    cout << cars.back() << "\n";
    cout << "\n";

    cars.push_front("Tesla");
    cars.push_back("VW");
    for (string car : cars) {
    cout << car << "\n";
  }

  return 0;
}

  // Remove the first element
  //   cars.pop_front();

  // Remove the last element
  //   cars.pop_back();