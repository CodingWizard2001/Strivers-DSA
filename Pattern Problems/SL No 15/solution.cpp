// Generate Following Pattern:
//                      A B C D E 
//                      A B C D 
//                      A B C 
//                      A B 
//                      A 

#include<iostream>
using namespace std;
int main(){
    int rows;
    cout<<"Enter no. of rows : ";
    cin>>rows;
    for(int i = rows;i >= 1;i--){
        for(int j = 1;j <= i;j++){
            cout<<(char)(j + 64)<<" ";
        }
        cout<<endl;
    }
}