// Write a C++ program to check whether it's a palindrome number

#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    int reverse = 0,n = num;
    while(n != 0){
        int digit = (n % 10);
        reverse = (reverse * 10) + digit; 
        n /= 10;
    }
    if(num == reverse){
        cout<<"Palindrome number";
    }
    else{
        cout<<"Not a palindrome number";
    }
}