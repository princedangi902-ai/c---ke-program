#include <iostream>
using namespace std;

// Program to find the greatest of three numbers
// Uses if-else conditions to compare numbers

int main()
{
    int a, b, c;  // Variables to store three numbers
    
    // Input three numbers from user
    cout << "Enter 1st number: ";
    cin >> a;
    
    cout << "Enter 2nd number: ";
    cin >> b;
    
    cout << "Enter 3rd number: ";
    cin >> c;
    
    // Check if a is greatest
    if (a > b && a > c)
    {
        cout << a << " is the greatest" << endl;
    }
    // Check if b is greatest
    else if (b > a && b > c)
    {
        cout << b << " is the greatest" << endl;
    }
    // Otherwise c is greatest
    else
    {
        cout << c << " is the greatest" << endl;
    }
    
    return 0;
}

// Example:
// Input: 10, 20, 15
// Output: 20 is the greatest
