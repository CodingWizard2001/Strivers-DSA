// Generate Following Pattern:
//                      1 
//                      1 2 
//                      1 2 3 
//                      1 2 3 4 
//                      1 2 3 4 5 

#include<iostream>
using namespace std;
int main(){
    int rows;
    cout<<"Enter no. of rows : ";
    cin>>rows;
    for(int i = 1;i <= rows;i++){
        for(int j = 1;j <= i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}