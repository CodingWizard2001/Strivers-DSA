// Generate Following Pattern:
//                           *
//                          ***
//                         *****
//                        *******
//                       *********
//                       *********
//                        *******
//                         *****
//                          ***
//                           *

#include<iostream>
using namespace std;
int main(){
    int rows;
    cout<<"Enter no. of rows : ";
    cin>>rows;
    for(int i = 0;i < rows;i++){
        for(int j = 0;j < (rows - i - 1);j++){
            cout<<" ";
        }
        for(int j = 0;j < (2 * i) + 1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i = rows;i > 0;i--){
        for(int j = 0;j < (rows - i);j++){
            cout<<" ";
        }
        for(int j = 0;j < (2 * i) -1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}