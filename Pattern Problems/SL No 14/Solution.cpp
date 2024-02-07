// Generate Following Pattern:
//                      A 
//                      A B 
//                      A B C 
//                      A B C D 
//                      A B C D E 

#include<iostream>
using namespace std;
int main(){
    int rows;
    cout<<"Enter no. of rows : ";
    cin>>rows;
    for(int i = 1;i <= rows;i++){
        for(int j = 1;j <= i;j++){
            cout<<(char)(j + 64)<<" ";
        }
        cout<<endl;
    }
}