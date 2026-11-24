// Array is a data structure, to store similer data type elements

// Syntax and Declaration

// int x[7]  Declaration
// x[2] = 3; 

#include<iostream>
using namespace std;
int main(){
    // int arr[7];
    // arr[0]=7;
    // arr[1]=1;
    // arr[2]=2;
    // arr[3]=3;
    // arr[4]=4;
    // arr[5]=5;
    // arr[6]=6;

// better way to inisialize

    int arr[7] = {1,2,3,4,5,6,7};
    cout<<arr[2];
    return 0;
}

// int arr] = {1,2,3,4,5,6,7};  also possible but we have to initialize it next to it 
// means arr[];
// then a[3] = 5; not possiboe
// if we want to declear arrary first then ininialize we have to give size also like arr[7]
