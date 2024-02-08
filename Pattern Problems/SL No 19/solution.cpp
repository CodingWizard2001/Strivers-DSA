// Generate Following Pattern:
//                      **********
//                      ****  ****
//                      ***    ***
//                      **      **
//                      *        *
//                      *        *
//                      **      **
//                      ***    ***
//                      ****  ****
//                      **********

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
        for(int j = 0;j < (rows - i);j++){
            cout<<"*";
        }
        for(int j = 0;j < space;j++){
            cout<<" ";
        }
        for(int j = 0;j < (rows - i);j++){
            cout<<"*";
        }
        space += 2;
        cout<<endl;
    }
    // Lower Part
    space = (2 * rows) - 2;
    for(int i = 0;i < rows;i++){
        for(int j = 0;j <= i;j++){
            cout<<"*";
        }
        for(int j = space;j > 0;j--){
            cout<<" ";
        }
        for(int j = 0;j <= i;j++){
            cout<<"*";
        }
        space -= 2;
        cout<<endl;
    }
}