// Generate Following Pattern:
//                      A 
//                      B B 
//                      C C C 
//                      D D D D 
//                      E E E E E 

#include<iostream>
using namespace std;
int main(){
    int rows;
    cout<<"Enter no. of rows : ";
    cin>>rows;
    for(int i = 1;i <= rows;i++){
        for(int j = 1;j <= i;j++){
            cout<<(char)(i + 64)<<" ";
        }
        cout<<endl;
    }
}