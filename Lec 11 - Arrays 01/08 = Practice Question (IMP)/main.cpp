// Question : find second maximum value form array

#include<iostream>
#include<climits> // remember this
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
    int max2 = INT_MIN; // remember this
    for(int i =1;i<n;i++){
        if(arr[i]>max2 && arr[i]<max){
            max2 = arr[i];
        }
    }
    cout<<"second maximum value no. is: "<<max2;
    return 0;
}