// Generate Following Pattern:
//                    4 4 4 4 4 4 4 
//                    4 3 3 3 3 3 4 
//                    4 3 2 2 2 3 4 
//                    4 3 2 1 2 3 4 
//                    4 3 2 2 2 3 4 
//                    4 3 3 3 3 3 4 
//                    4 4 4 4 4 4 4 

#include<iostream>
using namespace std;
int main(){
    int rows;
    cout<<"Enter no. of rows : ";
    cin>>rows;
    for(int i = 0;i < (2 * rows) - 1;i++){
        for(int j = 0;j < (2 * rows) -1;j++){
            int top = i;
            int down = j;
            int left = (2 * rows - 2) - i;
            int right = (2 * rows - 2) - j;
            cout<<(rows - min(min(top,left),min(down,right)))<<" ";
        }
        cout<<endl;
    }
}