#include<iostream>
using namespace std;

int main(){
    int num;
    cin>>num;
    int rem, i=1, hex=0;
    while(num!=0){
        rem = num%16;
        hex = hex + rem*i;
        num = num/16;
        i = i*10;
    }
    cout<<"Hexadecimal equivalent of given decimal number is: "<<hex<<endl;
}