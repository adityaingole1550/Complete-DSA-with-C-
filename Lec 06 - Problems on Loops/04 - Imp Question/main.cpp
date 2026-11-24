// Question : WAP tp print sum of digits of a given number.

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Number : ";
    cin>>n;
    int sum = 0;
    do{

        sum = sum + (n % 10);
        n = n /10;
        
    }while(n != 0);
    cout<<sum;
    return 0;
}