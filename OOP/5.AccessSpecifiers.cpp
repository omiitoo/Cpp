#include <iostream>
using namespace std;

class MyClass {
    public:
    int x;
    private:
    int y;
};

int main(){
    MyClass myObj;
    myObj.x=25;
    myObj.y=50;
    return 0;
}

//The program you provided will give a compilation error because the member y is declared as private