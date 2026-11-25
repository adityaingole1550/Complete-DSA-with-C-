// array occupies consicutive memory 
#include<iostream>
using namespace std;
int main(){
    int arr[]={2,3,4,5,54};
    cout<<&arr[0]<<endl;
    cout<<&arr[1]<<endl;
    cout<<&arr[2]<<endl;
    cout<<&arr[3]<<endl;
    cout<<&arr[4]<<endl;

    cout<<&arr<<endl; // as we know it will print address of first element i.e where array starts
    return 0;
}