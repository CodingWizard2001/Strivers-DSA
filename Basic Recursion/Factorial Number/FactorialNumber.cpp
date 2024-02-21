// Factorial Number

#include<iostream>
using namespace std;
int factorial(int num){
    // Base case
    if(num == 1){
        return 1;
    }
    return num * factorial(num - 1);
}
int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    cout<<"Factorial will be : "<<factorial(num);
}