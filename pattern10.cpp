#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number:"<<endl;
    cin>>n;
    int row = 0;
    char ch ='A';
    while(row<n){
        ch = 'A';
        ch = ch + row;
        int col = 0;
        while(col<n){
            cout<<ch <<" ";
            ch = ch + 1;
            col = col + 1;
        }
        cout<<endl;
        row = row + 1;
    }
}