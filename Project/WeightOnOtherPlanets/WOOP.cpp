#include <iostream>
#include <string>

using namespace std;

int main(){


    cout << "This is a program for calculating your weight on other planets. \n";
    double kg;
    int choice;
    cout << "How much do you weigh: ";
    cin >> kg;
    cout << "1. How much do you weigh on Mars?" << endl;
    cout << "2. How much do you weigh on the Moon?" << endl;
    cout << "2. How much do you weigh on Jupiter?" << endl;
    cout << "Choose an option (1,2 or 3):" << endl;
    cin >> choice;

    if (choice == 1) {
        double Mars=kg*0.379;
        cout << "You weigh " << Mars << " kg on Mars.";
    }   else if (choice == 2) {
        double Moon=kg*0.165;
        cout << "You weigh " << Moon << " kg on the Moon.";
    }   else if (choice == 3) {
        double J=kg*2.53;
        cout << "You weigh " << J << " kg on Jupiter.";
    }   else {
        cout << "Invalid choice, please choose 1, 2, or 3." << endl;
    }

    return 0;
}