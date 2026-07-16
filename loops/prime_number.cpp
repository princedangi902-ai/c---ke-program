#include <iostream>
using namespace std;

// Program to check if a number is PRIME or COMPOSITE
// Prime number: Only divisible by 1 and itself
// Composite number: Divisible by numbers other than 1 and itself

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    bool isPrime = true;  // Assume the number is prime initially
    
    // Check all numbers from 2 to n/2
    // If any number divides n, then n is not prime
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)  // If n is divisible by i
        {
            isPrime = false;  // n is NOT prime
            break;  // Exit the loop as we found a divisor
        }
    }
    
    // Output result
    if (isPrime)
        cout << n << " is a PRIME number" << endl;
    else
        cout << n << " is a COMPOSITE number" << endl;
    
    return 0;
}

// Examples:
// Input: 7   Output: 7 is a PRIME number
// Input: 9   Output: 9 is a COMPOSITE number
// Input: 889 Output: 889 is a COMPOSITE number (889 = 7 × 127)
