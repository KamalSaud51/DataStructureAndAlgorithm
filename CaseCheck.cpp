#include<iostream>
using namespace std;
int main(){
    char ch;
 cout<<"Enter a charecter:"<<endl;
 cin>>ch;
 if(ch>= 'a' && ch<='z'){
    cout<<"The charecter is in lowercase:"<<endl;
 }else if(ch>='A' && ch<='Z'){
    cout<<"The charexter is in uppercase:"<<endl;
 }else{
    cout<<"The charecter is in numeric value:"<<endl;
 }
}