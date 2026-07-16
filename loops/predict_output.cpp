#include <iostream>
using namespace std;

// Program to demonstrate loop behavior and output prediction
// This helps you understand how loops work

int main()
{
    // Example 1: Simple loop
    cout << "Example 1: " << endl;
    for (int i = 1; i <= 3; i++)
    {
        cout << i << " ";
    }
    cout << endl;
    
    // Example 2: Loop with increment by 2
    cout << "\nExample 2: " << endl;
    for (int i = 0; i < 10; i += 2)
    {
        cout << i << " ";
    }
    cout << endl;
    
    // Example 3: Nested loop
    cout << "\nExample 3: " << endl;
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 2; j++)
        {
            cout << "(" << i << "," << j << ") ";
        }
        cout << endl;
    }
    
    return 0;
}

// Output:
// Example 1:
// 1 2 3
// Example 2:
// 0 2 4 6 8
// Example 3:
// (1,1) (1,2)
// (2,1) (2,2)
// (3,1) (3,2)
