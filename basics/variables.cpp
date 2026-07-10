#include <iostream>
using namespace std;
int main()
{
    int x = 5, y = 7;
    x = x + y;

    for (int i = 0; x > 0; i++)
    {
        x = x - 1;
    }
    cout << x;
    return 0;
}