// Question: Find the maximum valus of all the elements in the array.
#include<iostream>
using namespace std;
int main(){
    int n; 
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[6]; // replace 6 by n
    cout<<"Enter elements one by one: ";
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    int max = arr[0];
    for(int i =1;i<n;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    cout<<"maximum value no. is: "<<max;
    return 0;
}