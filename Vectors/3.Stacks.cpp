#include <iostream>
#include <stack>
using namespace std;

int main() {
  stack<string> cars;

    cars.push("Volvo");
    cars.push("BMW");
    cars.push("Ford");
    cars.push("Mazda");
  
    cout << cars.top();
    cout << "\n";
    cars.top() = "Tesla";

    cout << cars.top();


  return 0;
}
