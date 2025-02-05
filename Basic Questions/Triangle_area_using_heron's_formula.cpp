#include<iostream>
#include<math.h>
using namespace std;

int main(){
    float a, b, c, s, area;  // s is semi-perimeter
    cout<<"enter the sides of the triangle";
    cin>>a>>b>>c;
    cout<<"sides of the triangle are: "<<a<<", "<<b<<", "<<c<<endl; 

    s = (a + b + c) / 2;
    area = sqrt(s * (s-a) * (s-b) * (s-c));
    cout<<"Area of the triangle is: "<<area<<endl;
}