#include <iostream>
using namespace std;


class Car {
    public:
    string brand;
    string model;
    int year;
};


int main()
{
    Car carObj1;
    carObj1.brand = "BMW";
    carObj1.model = "M5";
    carObj1.year = 2024;

    Car carObj2;
    carObj2.brand = "Mercedes";
    carObj2.model = "C63 Amg";
    carObj2.year = 2024;

    cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
    cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";
}