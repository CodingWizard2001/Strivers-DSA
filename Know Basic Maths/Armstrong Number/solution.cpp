// Given a number, check if it is Armstrong Number or Not.

#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    int count = 0;
    int sum = 0,n = num;
    while(n != 0){
        count++;
        n /= 10;
    }
    n = num;
    while(n > 0){
        int digit = (n % 10);
        sum += pow(digit,count);
        n /= 10;
    }
    if(sum == num) cout<<num<<" is an armstrong number";
    else cout<<num<<" is not an armstrong number";
}