#include<iostream>
using namespace std;

int main(){
    int radius, height;
    cin>>radius>>height;

    cout<<"radius = "<<radius<<endl<<"height = "<<height<<endl;
    
    cout<<"volume of sphere = "<<(4/3)*3.14*radius*radius*radius<<endl;
    cout<<"volume of cylinder = "<<3.14*radius*radius*height<<endl; 
    cout<<"volume of cone = "<<(1/3)*3.14*radius*radius*height<<endl;
    cout<<"volume of cube = "<<radius*radius*radius<<endl;
}
