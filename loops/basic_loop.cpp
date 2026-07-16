#include <iostream>
using namespace std;

// Program to understand basic for loop structure
// for loop: for(initialization; condition; increment)

int main()
{
    // Example 1: Print numbers 1 to 5
    cout << "Numbers 1 to 5: ";
    for (int i = 1; i <= 5; i++)  // i starts at 1, continues while i <= 5, increment i by 1
    {
        cout << i << " ";
    }
    cout << endl;
    
    // Example 2: Print numbers in reverse
    cout << "Numbers 5 to 1: ";
    for (int i = 5; i >= 1; i--)  // Decrement i by 1
    {
        cout << i << " ";
    }
    cout << endl;
    
    return 0;
}

// Output:
// Numbers 1 to 5: 1 2 3 4 5
// Numbers 5 to 1: 5 4 3 2 1
