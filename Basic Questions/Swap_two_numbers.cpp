#include<iostream>
using namespace std;

int main(){
    int a,b,temp;

    cout<<"enter two numbers: ";
    cin>>a>>b;

    cout<<"before swapping: "<<a<<" "<<b<<endl;

    temp=a;
    a=b;
    b=temp;

    cout<<"after swapping: "<<a<<" "<<b<<endl;
}