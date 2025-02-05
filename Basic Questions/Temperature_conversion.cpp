#include<iostream>
using namespace std;

int main(){
    float cel, fah, kel;
    cout<<"enter the temperature in celsius:";

    cin>>cel;
    cout<<"Celsius to Fahrenheit: "<<(cel * 9/5) + 32<<endl;
    cout<<"Celsius to Kelvin: "<<cel + 273.15<<endl;    

    cout<<"enter the temperature in fahrenheit:";
    cin>>fah;
    cout<<"Fahrenheit to Celsius: "<<(fah - 32) * 5/9<<endl;    
    cout<<"Fahrenheit to Kelvin: "<<(fah - 32) * 5/9 + 273.15<<endl;    

    cout<<"enter the temperature in kelvin:";
    cout<<kel;
    cout<<"Kelvin to Celsius: "<<kel - 273.15<<endl;
    cout<<"Kelvin to Fahrenheit: "<<(kel - 273.15) * 9/5 + 32<<endl;
}