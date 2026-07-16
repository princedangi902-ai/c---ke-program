#include <iostream>
using namespace std;

// Program to check if a number is COMPOSITE
// Composite number: Has factors other than 1 and itself

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    int count = 0;  // Count total factors
    
    // Find all factors
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            count++;  // Increase count if i is a factor
    }
    
    // If factors > 2, then it's composite (factors: 1 and n are always there)
    if (count > 2)
        cout << n << " is a COMPOSITE number" << endl;
    else
        cout << n << " is a PRIME number" << endl;
    
    return 0;
}

// Examples:
// Input: 12  Output: 12 is a COMPOSITE number (factors: 1,2,3,4,6,12)
// Input: 7   Output: 7 is a PRIME number (factors: 1,7)
