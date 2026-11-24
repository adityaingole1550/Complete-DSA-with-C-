// dont take load and try to understand just remember it 

#include<iostream>
using namespace std;
void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}
int main(){
    int a,b;
    cout<<"enter two numbers ";
    cin>>a>>b;
    swap(a,b);
    cout<<"value of a and b are now : "<<a<<" and "<<b<<" resp. ";
    return 0;
}