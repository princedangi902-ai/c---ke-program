#include <iostream>
using namespace std;
int main() {// simple program of a triangle id it exists or not using basic if else statement 
    int a,b,c;// variable insialitation 
  cout<<"enter 1st side :";
  cin>>a;                   
  cout<<"enter 2st side :";
  cin>>b;
  cout<<"enter 3st side :";
  cin>>c;                       //these above line are for taking input from user for sides of triangle
if ((a+b)>c and (a+c)>b and (b+c)>a)//codition that sum of two side should alwayes grater then remaining side 
{
    cout<<"valid triangle";// if the condition will be true 
}
else{
    cout<<"not a triangle";// if the codition will failed
}
    
    return 0;
}