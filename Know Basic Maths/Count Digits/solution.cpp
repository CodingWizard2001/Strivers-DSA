// Write a C++ program to print count digits

#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    int count = 0;
    while(num != 0){
        count++;
        num /= 10;
    }
    cout<<"No. of digits are : "<<count;
}