#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <cstdlib>

using namespace std;

int main(){
    int RandomNumber;

    srand(time(NULL));
    RandomNumber = rand();

    cout << "Random Number: " << RandomNumber << endl;

    return 0;
}