#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number:"<<endl;
    cin>>n;
    int row = 1;
    while(row<=n){
        int col = 1;
        while(col<=n){
            cout<<col<< " ";
            col = col + 1;

        }
        cout<<endl; //next line 
        row = row + 1;
    }
}