#include <iostream>
using namespace std;

// Program to understand the ternary operator (?:)
// Syntax: condition ? value_if_true : value_if_false

int main()
{
    int age = 20;
    
    // Example 1: Check age
    string status = (age >= 18) ? "Adult" : "Minor";
    cout << "Status: " << status << endl;
    
    // Example 2: Find maximum of two numbers
    int a = 15, b = 20;
    int max_num = (a > b) ? a : b;
    cout << "Maximum: " << max_num << endl;
    
    // Example 3: Check if number is even or odd
    int num = 7;
    string result = (num % 2 == 0) ? "EVEN" : "ODD";
    cout << num << " is " << result << endl;
    
    return 0;
}

// Output:
// Status: Adult
// Maximum: 20
// 7 is ODD
