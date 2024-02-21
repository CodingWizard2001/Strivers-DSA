// Print 1 To N 

#include<iostream>
using namespace std;
void print(int i,int num){
    if(num < i) return;
    cout<<num<<" ";
    print(i,num - 1);
}
int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    print(1,num);
}