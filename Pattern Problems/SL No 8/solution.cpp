// Generate Following Pattern:
//                      *********
//                       *******
//                        *****
//                         ***
//                          *

#include<iostream>
using namespace std;
int main(){
    int rows;
    cout<<"Enter no. of rows : ";
    cin>>rows;
    for(int i = 0;i < rows;i++){
        for(int j = (rows - 1);j > (rows - i - 1);j--){
            cout<<" ";
        }
        for(int j = 0;j < (2 * (rows - i)) - 1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}