// Question : two numbers are enered through the keyboard. Write a program to fine the value of one number raised to the power of another.

#include<iostream>
using namespace std;
int main(){
    int a, b;
    cout<<"Enter the base : ";
    cin>>a;
    cout<<"Enter the Exponrnt : ";
    cin>>b;
    int result = 1;
    for(int i = 0 ; i < (abs(b)) ; i++){
        result *= a;
    }

    if(b>=0){
        cout<<"Answer : "<<result;
    } else {
        float result2 = (float)1 / result;
        cout<<"Answer : " <<result2;
    }
    
    
    return 0;
}