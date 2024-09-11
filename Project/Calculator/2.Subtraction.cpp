#include <iostream>
using namespace std;

int main(){

    int x,y;
    cout << "X: ";
    cin >> x;
    cout << "Y: ";
    cin >> y;

    if (x<y){
        cout<<"False: X is less than Y." << endl;
    } else {
        int sum = x-y;
        cout << "Sum is: " << sum << endl;
    }

    return 0;

}