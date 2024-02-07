// Generate Following Pattern:
//                      1      1
//                      12    21
//                      123  321
//                      12344321

#include<iostream>
using namespace std;
int main(){
    int rows;
    cout<<"Enter no. of rows : ";
    cin>>rows;
    for(int i = 1;i < rows;i++){
        for(int j = 1;j <= i;j++){
            cout<<j;
        }
        for(int j = 1;j < 2 * (rows - i) - 1;j++){
            cout<<" ";
        }
        for(int j = i;j >= 1;j--){
            cout<<j;
        }
        cout<<endl;
    }
}