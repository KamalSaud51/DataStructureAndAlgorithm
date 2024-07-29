#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number:"<<endl;
    cin>>n;
    int row = 0;
    while(row < n){
        int col = 0;
       while(col < n){
            cout<< "*" <<" ";
            col = col + 1;

        }
        cout<<endl;
        row = row + 1;
    }
}