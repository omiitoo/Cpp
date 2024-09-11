#include <iostream>
#include <queue>
using namespace std;

int main() {

    queue<string> cars;


    cars.push("Volvo");
    cars.push("BMW");
    cars.push("Ford");
    cars.push("Mazda");
    

    cout << cars.front() << "\n";


    cout << cars.back() << "\n";

    cout << "\n";
   
    cars.front() = "Tesla";

    cars.back() = "VW";

    cout << cars.front() << "\n";

    cout << cars.back() << "\n";

    cars.pop();
    cout << cars.front();
    
    return 0;
}
