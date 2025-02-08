#include<iostream>
using namespace std;

int main(){
    int n, sum_even=0, sum_odd=0;
    cout<<"enter the number: ";
    cin>>n;

    for(int i=0; i<=n; i++){
        if(i%2==0){
            sum_even+=i;
        }
        else{
            sum_odd+=i;
        }
    }

    cout<<"Sum of even and odd numbers: "<<sum_even<<" and "<<sum_odd<<endl;
}