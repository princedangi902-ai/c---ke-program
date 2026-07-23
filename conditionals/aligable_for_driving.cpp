#include <iostream>
using namespace std;
int main() {
    int age;
    cout<<"enter your age: ";
    cin>>age;
    if(age>18 && age<70){
    cout<<"you can drive!!";
    }
    else if(age>70 && age<110) {
        cout<<"you are elder citizen and make sure to update licence every 5 years";
    }
    else if (age>0 && age<18){
        cout<<"you are too young and you cannot drive:";
    }
    else {
        cout<<"invalid age !!";
    }
    return 0;
}