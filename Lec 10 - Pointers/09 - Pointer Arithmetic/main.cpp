#include<iostream>
using namespace std;
int main(){
    int x= 1;
    int *p = &x;
    cout<<p<<endl;
    p = p+1;
    cout<<p<<endl;
    return 0;
}

// just remember size of datatypes and after we incremet we move by 1 data type size
// int - 4 bytes
// bool/char - 1 byte
//