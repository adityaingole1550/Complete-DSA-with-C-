// predict the output
#include<iostream>
using namespace std;
int main(){
    int p = 5 , q = 10;
    p += q -= p;
    cout<<p<<" "<< q << endl;  
    return 0;
}

// output : p += q -= p 
            // p = p + (q = q - p)
            // p = 5 + (q = 10 - 5)
            // p = 5 + (5)
            // p = 10
// then " " space
// then q which is 5

// final output: 10 5