// Generate Following Pattern:
//                      *        *
//                      **      **
//                      ***    ***
//                      ****  ****
//                      **********
//                      ****  ****
//                      ***    ***
//                      **      **
//                      *        *

#include<iostream>
using namespace std;
int main(){
    int rows;
    cout<<"Enter no. of rows : ";
    cin>>rows;
    int num = 0;
    int space = 0;
    // Upper Part
    for(int i = 0;i < rows;i++){
        for(int j = 0;j <= i;j++){
            cout<<"*";
        }
        for(int j = 0;j < 2 * (rows - i) - 2;j++){
            cout<<" ";
        }
        for(int j = 0;j <= i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    // Lower Part
    for(int i = 0;i < (rows - 1);i++){
        for(int j = (rows - i - 1);j > 0;j--){
            cout<<"*";
        }
        for(int j = 0;j < (2 * i) + 2;j++){
            cout<<" ";
        }
        for(int j = (rows - i - 1);j > 0;j--){
            cout<<"*";
        }
        cout<<endl;
    }
}