#include <iostream>
using namespace std;

// Program to validate if three sides can form a valid triangle
// Triangle inequality theorem: Sum of any two sides > third side

int main()
{
    int side1, side2, side3;
    
    // Input three sides from user
    cout << "Enter side 1: ";
    cin >> side1;
    
    cout << "Enter side 2: ";
    cin >> side2;
    
    cout << "Enter side 3: ";
    cin >> side3;
    
    // Check triangle inequality theorem
    if (side1 + side2 > side3 && side2 + side3 > side1 && side1 + side3 > side2)
    {
        cout << "Valid Triangle" << endl;
        
        // Check type of triangle
        if (side1 == side2 && side2 == side3)
            cout << "Type: Equilateral" << endl;
        else if (side1 == side2 || side2 == side3 || side1 == side3)
            cout << "Type: Isosceles" << endl;
        else
            cout << "Type: Scalene" << endl;
    }
    else
    {
        cout << "Invalid Triangle" << endl;
    }
    
    return 0;
}

// Example:
// Input: 3, 4, 5
// Output: Valid Triangle
//         Type: Scalene
