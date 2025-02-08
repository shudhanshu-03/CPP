#include<iostream>
using namespace std;    

int main(){
    int st, end, total_count=0;
    cout<<"enter the starting and ending number: ";
    cin>>st>>end;

    for(int i=st; i<=end; i++){
        int count=0;
        for(int j=1; j<=i; j++){
            if(i%j==0){
                count++;
            }
        }
        if(count == 2){
            cout<<i<<" is a prime number."<<endl;
            total_count++;
        }
    }
    cout<<"Total prime numbers between "<<st<<" and "<<end<<" are: "<<total_count<<endl;
}