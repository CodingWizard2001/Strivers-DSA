// Generate Following Pattern:
//                  E 
//                  D E 
//                  C D E
//                  B C D E
//                  A B C D E

#include<iostream>
using namespace std;
int main(){
    int rows;
    cout<<"Enter no. of rows : ";
    cin>>rows;
    for(int i = 1;i <= rows;i++){
        for(char j = ('A' + rows) - i;j <= ('A' + rows - 1);j++){
            cout<<j;
        }
        cout<<endl;
    }
}