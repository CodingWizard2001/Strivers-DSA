// Generate Following Pattern:
//                      * * * * * 
//                      * * * * 
//                      * * * 
//                      * * 
//                      * 

#include<iostream>
using namespace std;
int main(){
    int rows;
    cout<<"Enter no. of rows : ";
    cin>>rows;
    for(int i = (rows - 1);i >= 0;i--){
        for(int j = 0;j <= i;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}