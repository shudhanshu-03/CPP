#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int p, r, t;
    cout<<"enter the principal amount: ";
    cin>>p;

    cout<<"enter the rate of interest: ";
    cin>>r; 

    cout<<"enter the time period: ";    
    cin>>t;
    
    cout<<"The compound interest is: "<<p*(pow((1+r/100),t)-p); 
}