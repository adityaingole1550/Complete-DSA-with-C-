#include<iostream>
using namespace std;
int main(){
    int x = 4;
    int *p = &x;

    cout<<p<<endl;
    cout<<*p<<endl; // accessing without x

    *p = 7;
    cout<<x;
    return 0;
}