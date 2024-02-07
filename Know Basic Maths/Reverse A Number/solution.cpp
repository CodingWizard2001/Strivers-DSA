// Write a C++ program to reverse a number

#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    int reverse = 0;
    while(num != 0){
        int digit = (num % 10);
        reverse = (reverse * 10) + digit; 
        num /= 10;
    }
    cout<<"Reverse will be : "<<reverse;
}