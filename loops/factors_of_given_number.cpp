#include <iostream>
using namespace std;

// Program to find all factors of a given number
// Factor: A number that divides another number without remainder

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    cout << "Factors of " << n << ": ";
    
    // Check all numbers from 1 to n
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)  // If i divides n without remainder
            cout << i << " ";  // i is a factor
    }
    
    cout << endl;
    
    return 0;
}

// Example:
// Input: 12
// Output: Factors of 12: 1 2 3 4 6 12
