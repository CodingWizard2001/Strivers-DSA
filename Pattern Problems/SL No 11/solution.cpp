// Generate Following Pattern:
//                        1
//                        01
//                        101
//                        0101
//                        10101

#include<iostream>
using namespace std;
int main(){
    int rows;
    cout<<"Enter no. of rows : ";
    cin>>rows;
    for(int i = 0;i < rows;i++){
        if(i % 2 == 0){
            for(int j = 0;j <= i;j++){
                if(j % 2 == 0){
                    cout<<1;
                }
                else{
                    cout<<0;
                }
            }
        }
        else{
            for(int j= 0;j <= i;j++){
                if(j % 2 == 0){
                    cout<<0;
                }
                else{
                    cout<<1;
                }
            }
        }
        cout<<endl;
    }
}