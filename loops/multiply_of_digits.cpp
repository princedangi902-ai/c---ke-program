#include <iostream>
using namespace std;

// Program to find product (multiply) of all digits in a number
// Example: 123 -> 1*2*3 = 6

int main()
{
    int n, product = 1, digit;
    cout << "Enter a number: ";
    cin >> n;
    
    // Extract each digit and multiply
    while (n > 0)
    {
        digit = n % 10;  // Extract last digit
        product = product * digit;  // Multiply digit to product
        n = n / 10;  // Remove last digit
    }
    
    cout << "Product of digits: " << product << endl;
    
    return 0;
}

// Example:
// Input: 234
// Calculation: 2 * 3 * 4 = 24
// Output: Product of digits: 24

// Note: If the number contains 0, product will be 0
// Example: 102 -> 1 * 0 * 2 = 0
