#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number:"<<endl;
    cin>>n;
    int row = 1;
    while(row<=n){
        int col = 0;
        while(col<n){
            cout<<row<< " ";
            col = col + 1;

        }
        cout<<endl; //next line 
        row = row + 1;
    }
}