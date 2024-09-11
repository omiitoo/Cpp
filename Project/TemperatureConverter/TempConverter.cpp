#include <iostream>
using namespace std;

int main(){
    int choice;

    cout << "1. Convert from Celsius to Fahrenheit" << endl;
    cout << "2. Convert from Fahrenheit to Celsius" << endl;
    cout << "Choose an option (1 or 2):" << endl;
    cin >> choice;


    if (choice == 1) {
        float C;
        cout << "Celsius: ";
        cin >> C;
        float F = (C*9/5)+32;
        cout << "Fahrenheit: " << F ;

    } else if (choice == 2) {
        float F;
        cout << "Fahrenheit: ";
        cin >> F;
        float C = (F-32)*5/9;
        cout << "Celsius: " << C ;

    } else {
        cout << "Invalid choice, please choose 1 or 2." ; 
    }
}