#include <iostream>
using namespace std;

// Program to understand modulus operator (%)
// Modulus returns the remainder after division

int main()
{
    // Example 1: Simple modulus operations
    cout << "10 % 3 = " << 10 % 3 << endl;  // 1 (10 divided by 3 leaves remainder 1)
    cout << "15 % 5 = " << 15 % 5 << endl;  // 0 (15 divided by 5 leaves no remainder)
    cout << "7 % 2 = " << 7 % 2 << endl;    // 1 (7 divided by 2 leaves remainder 1)
    
    // Example 2: Check if number is even or odd
    int num = 8;
    if (num % 2 == 0)
        cout << num << " is EVEN" << endl;
    else
        cout << num << " is ODD" << endl;
    
    return 0;
}

// Output:
// 10 % 3 = 1
// 15 % 5 = 0
// 7 % 2 = 1
// 8 is EVEN
