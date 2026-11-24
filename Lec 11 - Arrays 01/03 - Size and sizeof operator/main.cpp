// how can we find length of array?
#include<iostream>
using namespace std;
int main(){
    int arr[] = {3,4,5,3,4,3,4,3,4};

    int size = sizeof(arr)/sizeof(arr[2]); // there is no seperate method to find no. of elements in C++ like jva and other language 
    // so this is jugad
    cout<<size<<endl; // prints no. of elements
    cout<<sizeof(arr); // prints memory size in bytes
    return 0;
}