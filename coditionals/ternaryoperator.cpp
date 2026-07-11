#include <iostream>
using namespace std;
int main() {
    int a ;
    cout<< "enter a number: ";
    cin>>a;
// syntax of ternary (condition) ? if true : if false;
    (a%2==0) ? cout<<"even number" : cout<<"odd number";
    return 0;
}