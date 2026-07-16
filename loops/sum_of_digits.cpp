#include <iostream>
using namespace std;
int main()
{
    int digits = 0, n;
    cout << "enter a number: ";
    cin >> n;
    int sum = 0;

    for (; n > 0;)
    {
        sum = (n % 10) + sum;
        n = n / 10;
        digits++;
    }
    cout << "the digits of the number is: " << digits << endl;
    cout << "the sum of digits is: " << sum << endl;
    return 0;
}