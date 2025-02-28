#include<iostream>
using namespace std;

int main(){
    int num, product=1;
    cout<<"enter the number: ";
    cin>>num;

    if(num==0){
        cout<<"Product of the digits of 0 is: 0"<<endl;
    }else{
        for(int i=num;i>0;i=i/10){
            product *= i%10;
        }
    }
    cout<<"Product of the digits of "<<num<<" is: "<<product<<endl;

}