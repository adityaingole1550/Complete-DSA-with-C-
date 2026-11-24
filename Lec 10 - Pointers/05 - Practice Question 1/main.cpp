// Write a program to calculate sum of two numbers using pointers.

#include<iostream>
using namespace std;
int main(){
    int a,b;
    int *pa = &a;
    int *pb = &b;
    cout<<"enter two numbers";
    cin>>*pa>>*pb;

    cout<<"sum is: "<<*pa+*pb;


    return 0;
}