// Write a a program ro check if a number is prime or not.

#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the Numeber: ";
    int n;
    cin>>n;
    if(n != 0 && n != 1 && n !=2){
        if(n % 2 != 0 && n % 3 != 0 && n % 5 != 0 && n % 7 != 0 ){
        cout<<n<<" is a prime Number";
    }else {
        cout<<n<<" is not a prime Number";
    }
    }else if (n == 2){
        cout<<n<<" is a prime Number";
    } else {
        cout<<n<<" is not a prime Number";
    }
    return 0;
}