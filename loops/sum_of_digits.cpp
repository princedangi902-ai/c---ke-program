#include <iostream>
using namespace std;

// Program to find sum of all digits in a number
// Example: 123 -> 1+2+3 = 6

int main()
{
    int n, sum = 0, digit;
    cout << "Enter a number: ";
    cin >> n;
    
    // Extract each digit and add to sum
    while (n > 0)
    {
        digit = n % 10;  // Extract last digit
        sum = sum + digit;  // Add digit to sum
        n = n / 10;  // Remove last digit
    }
    
    cout << "Sum of digits: " << sum << endl;
    
    return 0;
}

// Example:
// Input: 12345
// Digits: 1 + 2 + 3 + 4 + 5
// Output: Sum of digits: 15
