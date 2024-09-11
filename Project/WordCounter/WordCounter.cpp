#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main (){
    string text;
    cout <<"Enter your text: ";
    getline(cin, text);

    istringstream iss(text);
    string word;
    int wordCount = 0;

    while (iss >> word) {
        wordCount++;
    }

    cout <<"The text contains "  << wordCount << " words." << endl; 

    return 0;


}