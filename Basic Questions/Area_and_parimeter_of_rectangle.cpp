#include<iostream>
using namespace std;

int main(){
    int length, breadth;
    cout<<"enter the length and breadth of the rectangle: ";
    cin>>length>>breadth;

    cout<<"Area of the rectangle is: "<<length * breadth<<endl;
    cout<<"Perimeter of the rectangle is:"<<2 * (length + breadth)<<endl;
}