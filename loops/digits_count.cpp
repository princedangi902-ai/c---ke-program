#include <iostream>
using namespace std;
int main()
{
    int digits = 0, n;
    cout << "enter a number: ";
    cin >> n;
    for (int i = 1; n > 0; i++)
    {
        n = n / 10;
        digits++;
    }
    cout << "the digits of the number is: " << digits;
    return 0;
}