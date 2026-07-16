#include <iostream>
using namespace std;

// Program to understand type casting in C++
// Type casting converts a value from one data type to another

int main()
{
    // Implicit type casting (automatic)
    int num = 5;
    float decimal = num;  // int is automatically converted to float
    cout << "Implicit casting (int to float): " << decimal << endl;
    
    // Explicit type casting (manual)
    cout << "\n--- Explicit Type Casting ---" << endl;
    
    float price = 19.99f;
    int discountPrice = (int)price;  // C-style casting
    cout << "Price: " << price << " -> Discount Price: " << discountPrice << endl;
    
    // Division with type casting
    int a = 5, b = 2;
    cout << "5 / 2 = " << a / b << endl;           // 2 (integer division)
    cout << "5 / 2.0 = " << a / (float)b << endl;  // 2.5 (float division)
    
    return 0;
}

// Output:
// Implicit casting (int to float): 5
// 
// --- Explicit Type Casting ---
// Price: 19.99 -> Discount Price: 19
// 5 / 2 = 2
// 5 / 2.0 = 2.5
