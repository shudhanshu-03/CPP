#include <iostream>
using namespace std;

int main(){
    int a;  

    cout<<"Enter a number: ";
    cin>>a;

    a++; //a is printed first and then incremented
    cout<<a<<endl; 

    ++a; //a is incremented first and then printed 
    cout<<a<<endl; 

    a=a+1; //after incrementing a, it is increased by 1
    cout<<a<<endl;  

    a--; //a is printed first and then decremented
    cout<<a<<endl; 

    --a; //a is decremented first and then printed
    cout<<a<<endl;

    a=a-1; //after decrementing a, it is decreased by 1
    cout<<a<<endl; 
}