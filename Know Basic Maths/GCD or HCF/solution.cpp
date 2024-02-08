// Find the gcd of two numbers.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int num1,num2;
    cout<<"Enter first number : ";
    cin>>num1;
    cout<<"Enter second number : ";
    cin>>num2;
    int GCD = 1;
    int mini = min(num1,num2);
    for(int i = 2;i <= mini;i++){
        if(num1 % i == 0 && num2 % i == 0){
            GCD = i;
        }
    }
    cout<<"Greatest common divisor will be : "<<GCD;
}