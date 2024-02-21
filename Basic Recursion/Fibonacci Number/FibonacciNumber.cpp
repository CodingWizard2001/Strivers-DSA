// Fibonacci Number

#include<iostream>
using namespace std;
int FibonacciSeries(int term){
    if(term <= 1){
        return term;
    }
    int last = FibonacciSeries(term - 1);
    int sLast = FibonacciSeries(term - 2);
    cout<<last<<" "<<sLast<<endl;
    return (last + sLast);
}
int main(){
    int term;
    cout<<"Enter the term : ";
    cin>>term;
    cout<<term<<" th Fibonacci number will be : "<<FibonacciSeries(term);
}