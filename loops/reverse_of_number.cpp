#include <iostream>
using namespace std;

// Program to find reverse of a number
// Example: 12345 -> 54321

int main()
{
    int n, reverse = 0, digit;
    cout << "Enter a number: ";
    cin >> n;
    
    int original = n;  // Store original number
    
    // Extract digits and build reverse number
    while (n > 0)
    {
        digit = n % 10;  // Extract last digit
        reverse = reverse * 10 + digit;  // Add digit to front of reverse
        n = n / 10;  // Remove last digit
    }
    
    cout << "Original: " << original << endl;
    cout << "Reverse: " << reverse << endl;
    
    return 0;
}

// Example:
// Input: 12345
// Output: Original: 12345
//         Reverse: 54321
