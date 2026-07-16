#include <iostream>
using namespace std;

// Program to practice printing numbers with different formats

int main()
{
    // Printing individual numbers
    cout << "Individual numbers:" << endl;
    cout << 1 << endl;
    cout << 2 << endl;
    cout << 3 << endl;
    
    // Printing numbers on same line
    cout << "\nNumbers on same line: ";
    for (int i = 1; i <= 5; i++)
    {
        cout << i << " ";
    }
    
    cout << endl;
    
    return 0;
}

// Output:
// Individual numbers:
// 1
// 2
// 3
// 
// Numbers on same line: 1 2 3 4 5
