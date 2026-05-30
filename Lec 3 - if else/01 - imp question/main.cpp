// Question : Take 3 positive integers input and print the greatest of them without using && and || operator

#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter three Numbers : ";
    cin>>a>>b>>c;
    if(a>b){
        if(a>c){
            cout<<"Greatest No. is : "<<a;
        }else{
            cout<<"Greatest No. is : "<<c;
        }
    }else{
        if(b>c){
           cout<<"Greatest No. is : "<<b; 
        }else{
            cout<<"Greatest No. is : "<<c;
        }
    }
    return 0;
}