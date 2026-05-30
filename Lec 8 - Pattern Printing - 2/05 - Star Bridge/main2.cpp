//Question : Print the given patter for n=4 ( n= no. of rows)

// 1 2 3 4 5 6 7
// 1 2       6 7 
// 1           7 


#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Value of n : ";
    cin>>n;

    for(int i = 0; i < n; i++){

        for(int j = 1; j < 2*n; j++){

            if(  ((n-i) < j) &&  (j < (n+i))){
                cout<<"  ";
            } else {
                cout<<j<<" ";
            }

        }
        cout<<endl;
    }
    return 0;
}