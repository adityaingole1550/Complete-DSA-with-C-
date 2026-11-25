// Question: Find the element x in the array. Take array and x as input

#include<iostream>
using namespace std;
int main(){
    int n,x;
    cout<<"enter size of array: ";
    cin>>n;
    cout<<"Enter the elements one by one: ";
    int arr[6]; // replace 6 by n
    bool isPresent = false;
    for(int i = 0; i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the no. to find: ";
    cin>>x;
    for(int i = 0; i<n;i++){
        if(arr[i] == x){
            isPresent = true;
            cout<<"Element found at index: "<<i<<endl;
        }
    }
    if(isPresent == false){
        cout<<"404 Element not found";
    }


    return 0;
}