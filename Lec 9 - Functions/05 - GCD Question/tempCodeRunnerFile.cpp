// Question: Write a function to compute the greatest common divisor of two given numbers. 

// eg First No. = 36, Second No. = 60 
// GCD = 12

#include<iostream>
using namespace std;

int GCD (int a, int b){
    int c;
    for(int i=1;i<=a;i++){
        if(a % i == 0){
            if(b % i == 0){
                c = i;
            }
        }
    }

    return c;
}

int main(){
    int a,b;
    cout<<"Enter first and second number ";
    cin>>a>>b;
    
    cout<<"GCD is "<<GCD(a,b);
    
    return 0;
}