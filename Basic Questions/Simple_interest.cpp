#include<iostream>
using namespace std;

int main(){
    int p, r, t;
    cout<<"enter the principal amount: ";
    cin>>p;

    cout<<"enter the rate of interest: ";
    cin>>r; 

    cout<<"enter the time period: ";    
    cin>>t;
    
    cout<<"The simple interest is: "<<(p*r*t)/100;
}