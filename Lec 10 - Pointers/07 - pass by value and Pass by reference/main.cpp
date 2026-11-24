// we if we create a function and then we pass an argument like sum(a,b) in which we just pass value we call it pass by value
// and if we pass address of variable instead of value we call it pass by reference

// Question: We have to swap two numbers using a swap function

#include<iostream>
using namespace std;

void swap(int*p1, int*p2){
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}
int main(){
    int a,b;
    cout<<"enter two numbers ";
    cin>>a>>b;
    swap(&a,&b);
    cout<<"value of a and b are now : "<<a<<" and "<<b<<" resp. ";
    return 0;
}