#include<iostream>
using namespace std;    

int main(){
    int num;
    cin>>num;
    int last_digit = num%10;    
    for(;num>=10;num=num/10);
    int first_digit = num;
    cout<<"sum of first and last digit of "<<num<<" is: "<<first_digit+last_digit<<endl;
}