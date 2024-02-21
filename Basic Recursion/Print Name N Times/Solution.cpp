// Print Name N times

#include<iostream>
using namespace std;
void print(int i,int num){
    if(i > num) return;
    cout<<"Rahul Goswami"<<endl;
    print(i + 1,num);
}
int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    print(1,num);
}