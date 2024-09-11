#include <iostream>
#include <string>
#include <vector>

using namespace std;


int main(){
    vector<string> cars={"Volvo", "BMW", "Ford", "Mercedes"};
    cars.push_back("Tesla");

    for(string car : cars) {
        cout << car << "\n";
    }

        // 0 ilk arabayi gosterir, ve 1 ikinci 2 ucuncu ve ........
        cout << "\n";
        cout << cars[0] << " " << cars[2] << "\n";


        //ilk ve son araba
        cout << "\n";
        cout << cars.front() << " " << cars.back() << "\n";

        cars[2] = "Audi";
        cout << cars[2]<<"\n";
        cars.at(1)="Skoda";
        cout << cars.at(1) << "\n";



        cout << cars.size();
        cout << cars.empty();
    
    return 0;
}