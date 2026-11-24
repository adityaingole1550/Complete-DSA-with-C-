// we know we can find address of any vairable means where the actually we value stored in memory by using "&" operator
// now we store integers in int, characters in char, boolean in bool
// and to store address we use pointers

#include<iostream>
using namespace std;
int main(){
    int x = 4;
    float y = 3.3;
    int*p = &x;
    float*q = &y;

    cout<<&x<<endl;
    cout<<p;
    //both will give same ans

    return 0;
}

