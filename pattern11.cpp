#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number:"<<endl;
    cin>>n;
    int row = 0;
    while(row<=n){
        char ch ='A';
        ch = ch + row;
        int col = 0;
        while(col<=row){
            cout<<ch <<" ";
            col = col + 1;
        }
        cout<<endl;
        row = row +1;
    }
}
