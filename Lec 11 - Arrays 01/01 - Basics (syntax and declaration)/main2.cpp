#include<iostream>
using namespace std;
int main(){
    int arr[7] = {1,2,3,4,5,6,7};
    // donkey work 
    // cout<<arr[0]<<" ";
    // cout<<arr[1]<<" ";
    // cout<<arr[2]<<" "; 
    // and so on 

    // better way using loops
    for(int i = 0 ; i <=6; i++){
        cout<<arr[i]<<" ";
    }

    //

    return 0;
}