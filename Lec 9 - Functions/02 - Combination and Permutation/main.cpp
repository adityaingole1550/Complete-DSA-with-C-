#include<iostream>
using namespace std;

int fact(int x){
    int fac= 1;
    for(int i = 1 ; i <= x; i++){
        fac = fac*i;
    }
    return fac;  
}

int main(){
    int n,r;
    cout<<"Enter the value of n: ";
    cin>>n;
    cout<<"Enter the value of r: ";
    cin>>r;
     cout<<"Combination is: " << fact(n)/(fact(r)*fact(n-r)) <<"\n";
     cout<<"Permutation is: " << fact(n)/fact(n-r);

    return 0;
}