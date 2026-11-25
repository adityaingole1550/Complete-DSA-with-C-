// Question: Calculate the sum of all enelemts in the given array. take array from user
#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[3]; // just replace 3 with n
    cout<<"enter array elements one by one: ";
    for(int i = 0 ; i<n; i++){
        cin>>arr[i];
    }
    for(int i = 0; i<n;i++){
        sum = sum +arr[i];
    }
    
    cout<<"sum is: "<<sum;
    
    return 0;
}