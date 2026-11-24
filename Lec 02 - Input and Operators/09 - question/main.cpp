#include<iostream>
using namespace std;
int main(){
    int i = 2, j = 3, k, l;
    float a,b;
    k = i / j * j; // = 0 * 3 = 0
    l = j / i * i; // = 1 * 2 = 2
    a = i / j * j; // first i / j * j will calculated and  int / int = int , int * float  = float
                   // i / j = 2 / 3 = 0 and then 0 * j = 0
    b = j / i * i; // = 3(int)/2(int)=1(int) , 1(int) * 2(int) = 2
    cout<<k<<" "<<l<<" "<< a<<" " << b; // output : 0 2 0 2
    return 0;
}