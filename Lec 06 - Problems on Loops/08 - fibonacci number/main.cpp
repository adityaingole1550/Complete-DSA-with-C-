// Print the nth fibonacci number start from 1.

#include<iostream>
using namespace std;
int main(){
    int n,f = 1;
    cout<<"Enter the value of n : ";
    cin>>n;
    int f1 = 0;
    int f2 = 1;
    for(int i = 1 ; i <n ; i++){
        f = f1 + f2;
        f1 = f2;
        f2 = f;

    }
    cout<<f;
    return 0;
}