#include<iostream>
using namespace std;
int main(){
    //I=increment and decrement 
    int x = 5;
    cout<<x<<endl;

    ++x; // pre increment
    cout<<x<<endl;

    x++; // post increment
    cout<<x<<endl;

    cout<<++x<<endl; // first increment then print hence 8

    cout<<x++<<endl; //first print and then increment hence print 9

    cout<<x<<endl;
     
    
    return 0;
}