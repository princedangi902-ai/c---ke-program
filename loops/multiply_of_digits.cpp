#include <iostream>
using namespace std;
int main()
{
    int digits = 0, n;
    cout << "enter a number: ";
    cin >> n;
    int sum = 1;
    int lastdigit;
    for (; n > 0;)
    {
        lastdigit = n % 10;
        if (lastdigit != 0)
        {
            sum = (n % 10) * sum;
            n = n / 10;
            digits++;
        }
        else
        {
            n = n / 10;
            digits++;
            continue;
        }
    }
    cout << "the digits of the number is: " << digits << endl;
    cout << "the sum of digits is: " << sum << endl;
    return 0;
}