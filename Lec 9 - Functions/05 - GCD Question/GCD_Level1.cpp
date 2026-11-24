// Question: Write a function to compute the greatest common divisor of two given numbers. 

// eg First No. = 36, Second No. = 60 
// GCD = 12

#include<iostream>
using namespace std;

int GCD (int a, int b){
    int c=1;
    for(int i=1;i<=min(a,b);i++){
        if(a % i == 0){
            if(b % i == 0){
                c = i;
            }
        }
    }

    return c;
}

// want more optimized - innsead of starting form one to min(a,b) start form min(a,b) upto 1

int GCD2(int a, int b){
    for (int i=min(a,b);i>=1;i--){
        if(a % i == 0 && b % i == 0){
            return i;
            break;
        }
    }
}

int main(){
    int a,b;
    cout<<"Enter first and second number ";
    cin>>a>>b;
    
    cout<<"GCD is "<<GCD2(a,b);
    
    return 0;
}