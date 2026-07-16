#include <iostream>
using namespace std;

// Program to count total number of digits in a number
// Example: 12345 has 5 digits

int main()
{
    int n, count = 0;
    cout << "Enter a number: ";
    cin >> n;
    
    // Count digits by dividing by 10
    while (n > 0)
    {
        count++;  // Increment count
        n = n / 10;  // Remove last digit
    }
    
    cout << "Total digits: " << count << endl;
    
    return 0;
}

// Example:
// Input: 98765
// Output: Total digits: 5
