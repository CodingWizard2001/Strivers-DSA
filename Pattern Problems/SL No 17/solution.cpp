// Generate Following Pattern:
//                           A 
//                         A B A
//                       A B C B A
//                     A B C D C B A
//                   A B C D E D C B A

#include<iostream>
using namespace std;
int main(){
    int rows;
    cout<<"Enter no. of rows : ";
    cin>>rows;
    for(int i = 1;i <= rows;i++){
        for(int j = 1;j <= (rows - i);j++){
            cout<<" ";
        }
        for(int j = 1;j <= i;j++){
            cout<<(char)(j + 64);
        }
        for(int j = (i - 1);j >= 1;j--){
            cout<<(char)(j + 64);
        }
        cout<<endl;
    }
}