// Given a number, check whether it is prime or not. A prime number is a natural number that is only divisible by 1 and by itself.

#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    bool flag = true;
    for(int i = 2;i <= (num / 2);i++){
        if(num % i == 0){
            flag = false;
            break;
        }
    }
    if(flag == true && num != 1) cout<<num<<" is a prime number";
    else cout<<num<<" is not a prime number";
}