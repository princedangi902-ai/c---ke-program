#include <iostream>
using namespace std;

// Program to understand variables in C++
// Variables store data values that can be used and modified

int main()
{
    // Declare and initialize two integer variables
    int x = 5;  // Variable x stores value 5
    int y = 7;  // Variable y stores value 7
    
    // Modify variable x by adding y to it
    x = x + y;  // x becomes 5 + 7 = 12
    
    // Print the result
    cout << "Result: " << x << endl;
    
    return 0;
}

// Output: Result: 12
