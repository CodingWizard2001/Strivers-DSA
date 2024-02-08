// Generate Following Pattern:
//                      ****
//                      *  *
//                      *  *
//                      ****

#include<iostream>
using namespace std;
int main(){
    int rows,cols;
    cout<<"Enter no. of rows : ";
    cin>>rows;
    cout<<"Enter no. of cols : ";
    cin>>cols;
    for(int i = 0;i < rows;i++){
        for(int j = 0;j < cols;j++){
            if(i == 0 || j == 0 || i == (rows - 1) || j == (cols - 1)){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}