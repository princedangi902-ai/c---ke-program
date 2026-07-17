#include <iostream>
using namespace std;
int main() {
    int a,b,c;// variable insialitation 
  cout<<"enter 1st number :";
  cin>>a;                   
  cout<<"enter 2st number :";
  cin>>b;
  cout<<"enter 3st number :";
  cin>>c;                       
  if(a>b and a>c){
    cout<<a<<" is greatest";
  }
else if(b>a and b>c){
    cout<<b<<" is greatest";

}
    else cout<<c<<" is greatest";
    return 0;
}