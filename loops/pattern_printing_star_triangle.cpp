#include <iostream>
using namespace std;

// Program to print a star triangle pattern
// Output:
// *
// * *
// * * *
// * * * *
// * * * * *

int main()
{
    int n = 5;  // Number of rows
    
    // Outer loop for rows
    for (int i = 1; i <= n; i++)
    {
        // Inner loop to print stars
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";  // Print star with space
        }
        cout << endl;  // New line after each row
    }
    
    return 0;
}

// Try modifying to create:
// - Inverted triangle
// - Diamond pattern
// - Pyramid pattern
