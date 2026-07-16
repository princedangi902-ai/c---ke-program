#include <iostream>
using namespace std;

// Program to understand arithmetic operators in C++
// Operators: +, -, *, /, % (modulus/remainder)

int main()
{
    int x = 10;
    float y = 3.0;
    
    // Division with mixed types (int and float)
    cout << "Division (10 / 3.0): " << x / y << endl;
    
    // Order of operations: * and / are evaluated before + and -
    float z = 10 / 3 + 4.5 * 2;  // (10/3) + (4.5*2) = 3 + 9 = 12
    cout << "Order of operations (10/3 + 4.5*2): " << z << endl;
    
    // Additional examples
    cout << "\n--- Arithmetic Operations ---" << endl;
    cout << "10 + 5 = " << 10 + 5 << endl;  // Addition
    cout << "10 - 5 = " << 10 - 5 << endl;  // Subtraction
    cout << "10 * 5 = " << 10 * 5 << endl;  // Multiplication
    cout << "10 / 5 = " << 10 / 5 << endl;  // Division
    cout << "10 % 3 = " << 10 % 3 << endl;  // Modulus (remainder)
    
    return 0;
}

// Output:
// Division (10 / 3.0): 3.33333
// Order of operations (10/3 + 4.5*2): 12
// 
// --- Arithmetic Operations ---
// 10 + 5 = 15
// 10 - 5 = 5
// 10 * 5 = 50
// 10 / 5 = 2
// 10 % 3 = 1
