// Given a number, print all the divisors of the number. A divisor is a number that gives the remainder as zero when divided.

#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    cout<<"All divisors are : ";
    for(int i = 1;i <= num;i++){
        if(num % i == 0){
            cout<<i<<" ";
        }
    }
}