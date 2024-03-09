// Given a number ‘N’, find out the sum of the first N natural numbers.

#include<iostream>
using namespace std;
int Sum(int n){
    if(n == 1) return 1;
    return n + Sum(n - 1);
}
int main(){
    int N;
    cout<<"Enter the value of N : ";
    cin>>N;
    cout<<"Sum will be : "<<Sum(N);
}