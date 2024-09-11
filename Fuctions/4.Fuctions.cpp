#include <iostream>
#include <string>

using namespace std;

void mF(string fname, int age) {
    cout << fname << " Refsnes. " << age << " years old.  \n";
}

int main(){
    mF("Yumer", 24);
    mF("Ilayda", 7);
    mF("Yumi", 16);

    return 0;
}