#include<iostream>
using namespace std;

int main(){
    int num;
    cin>>num;
    
    int last_digit = num%10;
    while(num>=10){
        num = num/10;
    }

    cout<<"First digit: "<<num<<endl;
    cout<<"Last digit: "<<last_digit<<endl;
}