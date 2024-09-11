#include <iostream>
using namespace std;
 
// Driver code
int main()
{
    char op;
    float num1, num2;

    // +, -, *, /
    cout << "Enter operator: + , - , * , / \n";
    cout << "Enter operator: ";

    cin >> op;
    cout << "Enter the first number: ";
    cin >> num1;
    
    cout << op << "\n"; 
    cout << "Enter the second number: ";
    cin >> num2;
 
    switch (op) {

    case '+':
        cout <<"Sum is: " << num1 + num2;
        break;
 
    case '-':
        cout <<"Sum is: " << num1 - num2;
        break;
 
    case '*':
        cout <<"Sum is: " << num1 * num2;
        break;
 
    case '/':
    if (num2 == 0)
        cout << "Error! Division by zero.";
    else
        cout << "Result is: " << num1 / num2;
    break;
 
    default:
        cout << "Error! operator is not correct";
    }
 
    return 0;
}