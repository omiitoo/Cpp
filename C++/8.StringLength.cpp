#include <iostream>
#include <string>

using namespace std;

int main(){
    string txt = "YumerMustafaMehmed";
    cout << "The length of the txt string is: " << txt.length() << "\n";
    cout << "The length of the txt string is: " << txt.size() << "\n";
    cout << txt[5] << "\n";
    txt[0]= 'O';
    cout << txt << "\n";

    return 0;
}