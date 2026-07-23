#include <iostream>
using namespace std;
int main()
{
    char a;
    cout << "enter one operator in these (*,+,-,/): ";
    cin >> a;
   
    switch (a)
    {
    case '*':
        cout << "this operator uses for multiply numbers !!";
        break;
    case '/':
        cout << "this operator uses for dividing numbers !!";
        break;
    case '+':
        cout << "this operator uses for adding numbers !!";
        break;
    case '-':
        cout << "this operator uses for substracting numbers !!";
    default:
        cout << "invalid input !!! enter the operator from these ( * , + , - , / )";
        break;
    }
    return 0;
}