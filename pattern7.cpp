#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number:"<<endl;
    cin>>n;
    int row = 1;
    while(row<=n){
        int col = 1;
        int num = row;
        while(col<=row){
            cout<<num << " ";
            num = num - 1;
            col = col + 1;
        }
        cout<<endl;
        row = row + 1;
    }
}