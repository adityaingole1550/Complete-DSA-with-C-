// Question : WAP to count digits of a given number

#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"Enter the number: ";
    cin>>n;
    int count = 0;
    do {
        n = n/10;
        count++;
    }while(n != 0);
    cout<<"No of digits are : "<<count;
    return 0;
}
    